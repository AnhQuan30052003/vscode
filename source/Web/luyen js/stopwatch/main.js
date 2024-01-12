$(function() {
  var box = '.box'
  $('.stopwatch').click(function() {
    if ($(box).hasClass('an')) {
      $(box).removeClass('an')
    }
  })

  $('.countdown').click(function() {
    if (!$(box).hasClass('an')) {
      $(box).addClass('an')
    }
  })
})

window.onload = function() {
  // Variable
  var sw_hour = 0, sw_minute = 0, sw_sec = 0, sw_ten = 0
  var cd_hour, cd_minute, cd_sec, cd_ten = 99
  var cardTen = document.getElementsByClassName('ten')
  var cardSec = document.getElementsByClassName('sec')
  var cardMinute = document.getElementsByClassName('minute')
  var cardHour = document.getElementsByClassName('hour')
  var buttonStart = document.getElementsByClassName('button-start')
  var buttonStop = document.getElementsByClassName('button-stop')
  var buttonReset = document.getElementsByClassName('button-reset')
  var clock_stopwatch, clock_countdown
  var cmd = ['Start', 'Resume']

  cd_hour = $('#input-hour').val()
  console.log('cd_hour =', cd_hour)
  if (cd_hour.length == 0) cd_hour = 0

  cd_minute = $('#input-minute').val()
  if (cd_minute.length == 0) cd_minute = 5
  if (cd_minute > 0) cd_minute -= 1
  
  cd_sec = $('#input-sec').val()
  if (cd_sec.length == 0) cd_sec = 0
  if (cd_sec > 0) cd_sec -= 1

  // StopWatch click
  buttonStart[0].onclick = function() {
    clearInterval(clock_stopwatch)
    clock_stopwatch = setInterval(Time_StopWatch, 10)
    buttonStart[0].innerHTML = cmd[0]
  }
  
  buttonStop[0].onclick = function() {
    clearInterval(clock_stopwatch)
    buttonStart[0].innerHTML = cmd[1]
  }

  buttonReset[0].onclick = function() {
    clearInterval(clock_stopwatch)
    buttonStart[0].innerHTML = cmd[0]
    sw_hour = sw_minute = sw_sec = sw_ten = 0
    cardHour[0].innerHTML = cardMinute[0].innerHTML = cardSec[0].innerHTML = cardTen[0].innerHTML = '00'
  }

  // CountDown click
  buttonStart[1].onclick = function() {
    clearInterval(clock_countdown)
    clock_countdown = setInterval(Time_CountDown, 10)
    buttonStart[1].innerHTML = cmd[0]
  }
  
  buttonStop[1].onclick = function() {
    clearInterval(clock_countdown)
    buttonStart[1].innerHTML = cmd[1]
  }

  buttonReset[1].onclick = function() {
    clearInterval(clock_countdown)
    buttonStart[1].innerHTML = cmd[0]
    sw_hour = sw_minute = sw_sec = sw_ten = 0
    cardHour[1].innerHTML = cardMinute[1].innerHTML = cardSec[1].innerHTML = cardTen[1].innerHTML = '00'
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

  function Time_CountDown() {
    // Nếu thời gian hết
    // if (cd_hour == 0 && cd_minute == 0 && cd_sec == 0) return

    cd_ten -= 1
    if (cd_ten == -1) {
      cd_ten = 99
      cd_sec -= 1
      if (cd_sec == 0) {
        cd_sec = 59
        cd_minute -= 1
        if (cd_minute == 0) {
          cd_minute = 59
          cd_hour -= 1
        }
      }
    }
    ShowNumer()
  }

  // Hiển thị ra thời gian đẹp
  function ShowNumer() {
    // stopwatch
    if (sw_ten < 10) cardTen[0].innerHTML = '0' + sw_ten
    else cardTen[0].innerHTML = sw_ten
  
    if (sw_sec < 10) cardSec[0].innerHTML = '0' + sw_sec
    else cardSec[0].innerHTML = sw_sec
  
    if (sw_minute < 10) cardMinute[0].innerHTML = '0' + sw_minute
    else cardMinute[0].innerHTML = sw_minute
  
    if (sw_hour < 10) cardHour[0].innerHTML = '0' + sw_hour
    else cardHour[0].innerHTML = sw_hour

    // countdown    
    if (cd_ten < 10) cardTen[1].innerHTML = '0' + cd_ten
    else cardTen[1].innerHTML = cd_ten
  
    if (cd_sec < 10) cardSec[1].innerHTML = '0' + cd_sec
    else cardSec[1].innerHTML = cd_sec
  
    if (cd_minute < 10) cardMinute[1].innerHTML = '0' + cd_minute
    else cardMinute[1].innerHTML = cd_minute
  
    if (cd_hour < 10) cardHour[1].innerHTML = '0' + cd_hour + 'be'
    else cardHour[1].innerHTML = cd_hour + 'lon'
  }
}

