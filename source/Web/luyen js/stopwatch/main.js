$(function() {
  var box = $('.box')
  $('.button-stopwatch').click(function() {
    if ($(box).hasClass('animation-translate')) {
      $(box).removeClass('animation-translate')
    }
  })
  
  $('.button-countdown').click(function() {
    if (!$(box).hasClass('animation-translate')) {
      $(box).addClass('animation-translate')
    }
  })
})

// Chuông hết giờ
function PlayVoice() {
  var audio = new Audio('./voice.mp3');
  audio.play();
}

window.onload = function() {
  // Variable
  var sw_hour = 0, sw_minute = 0, sw_sec = 0, sw_ten = 0
  var cd_hour, cd_minute, cd_sec, cd_ten = 100
  var cardTen = document.getElementsByClassName('ten')
  var cardSec = document.getElementsByClassName('sec')
  var cardMinute = document.getElementsByClassName('minute')
  var cardHour = document.getElementsByClassName('hour')
  var buttonStart = document.getElementsByClassName('button-start')
  var buttonStop = document.getElementsByClassName('button-stop')
  var buttonReset = document.getElementsByClassName('button-reset')
  var clockStopwatch, clockCountdown
  var cmd = ['Start', 'Resume']
  var setupTime = false, activeStopwatch = false, activeCountdown = false

    // StopWatch click
  buttonStart[0].onclick = function() {
    activeStopwatch = true
    clearInterval(clockStopwatch)
    clockStopwatch = setInterval(Time_StopWatch, 10)
    buttonStart[0].innerHTML = cmd[0]
  }
  
  buttonStop[0].onclick = function() {
    clearInterval(clockStopwatch)
    buttonStart[0].innerHTML = cmd[1]
  }

  buttonReset[0].onclick = function() {
    clearInterval(clockStopwatch)
    buttonStart[0].innerHTML = cmd[0]
    sw_hour = sw_minute = sw_sec = sw_ten = 0
    activeStopwatch = false
    cardHour[0].innerHTML = cardMinute[0].innerHTML = cardSec[0].innerHTML = cardTen[0].innerHTML = '00'
  }

  // CountDown click
  buttonStart[1].onclick = function() {
    if (setupTime == false) SetupValueTime()
    activeCountdown = true

    clearInterval(clockCountdown)
    clockCountdown = setInterval(Time_CountDown, 10)
  }
  
  buttonStop[1].onclick = function() {
    clearInterval(clockCountdown)
    buttonStart[1].innerHTML = cmd[1]
  }

  buttonReset[1].onclick = function() {
    clearInterval(clockCountdown)
    buttonStart[1].innerHTML = cmd[0]
    setupTime = activeCountdown = false
    sw_hour = sw_minute = sw_sec = sw_ten = 0
    cardHour[1].innerHTML = cardMinute[1].innerHTML = cardSec[1].innerHTML = cardTen[1].innerHTML = '00'

    document.getElementById('input-hour').value = '';
    document.getElementById('input-minute').value = '';
    document.getElementById('input-sec').value = '';
  }

  // Đồng hồ của StopWatch
  function Time_StopWatch() {
    sw_ten += 1
    if (sw_ten == 100) {
      sw_ten = 0
      sw_sec += 1;
      if (sw_sec == 60) {
        sw_sec = 0
        sw_minute += 1
        if (sw_minute == 60) {
          sw_hour += 1
        }
      }
    }
    ShowNumer()
  }

  // Đồng hồ của CountDown
  function Time_CountDown() {
    // Nếu thời gian hết
    if (cd_hour == 0 && cd_minute == 0 && cd_sec == 0 && cd_ten == 0) {
      PlayVoice()
      return
    }

    cd_ten -= 1
    if (cd_ten == -1) {
      cd_ten = 99
      cd_sec -= 1
      if (cd_sec == -1) {
        cd_sec = 59
        cd_minute -= 1
        if (cd_minute == -1) {
          cd_minute = 59
          cd_hour -= 1
        }
      }
    }
    ShowNumer()
  }

  // Tính toán giá trị
  function SetupValueTime() {
    cd_hour = $('#input-hour').val()
    cd_minute = $('#input-minute').val()
    cd_sec = $('#input-sec').val()
    
    if (cd_hour.length == 0) cd_hour = 0
    if (cd_minute.length == 0) cd_minute = 5
    if (cd_sec.length == 0) cd_sec = 0

    if (cd_sec >= 60) {
      cd_minute += Math.floor(cd_sec / 60)
      cd_sec = cd_sec % 60
    }

    if (cd_minute >= 60) {
      cd_hour += Math.floor(cd_minute / 60)
      cd_minute = cd_minute % 60
    }

    if (cd_sec > 0) cd_sec -= 1
    else {
      if (cd_minute > 0) {
        cd_minute -= 1
        cd_sec = 59
      }
      else {
        if (cd_hour > 0) {
          cd_hour -= 1
          cd_minute = 59
          cd_sec = 59
        }
        else {
          cd_ten = 0
        }
      }
    }
    setupTime = true
  }

  // Hiển thị ra thời gian đẹp
  function ShowNumer() {
    // stopwatch
    if (activeStopwatch) {
      if (sw_ten < 10) cardTen[0].innerHTML = '0' + sw_ten
      else cardTen[0].innerHTML = sw_ten
      
      if (sw_sec < 10) cardSec[0].innerHTML = '0' + sw_sec
      else cardSec[0].innerHTML = sw_sec
      
      if (sw_minute < 10) cardMinute[0].innerHTML = '0' + sw_minute
      else cardMinute[0].innerHTML = sw_minute
      
      if (sw_hour < 10) cardHour[0].innerHTML = '0' + sw_hour
      else cardHour[0].innerHTML = sw_hour
    }

    // countdown
    if (activeCountdown) {
      if (cd_ten < 10) cardTen[1].innerHTML = '0' + cd_ten
      else cardTen[1].innerHTML = cd_ten
      
      if (cd_sec < 10) cardSec[1].innerHTML = '0' + cd_sec
      else cardSec[1].innerHTML = cd_sec
      
      if (cd_minute < 10) cardMinute[1].innerHTML = '0' + cd_minute
      else cardMinute[1].innerHTML = cd_minute
      
      if (cd_hour < 10) cardHour[1].innerHTML = '0' + cd_hour
      else cardHour[1].innerHTML = cd_hour
    }
  }
}