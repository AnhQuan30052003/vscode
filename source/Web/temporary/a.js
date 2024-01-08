// (function($) {
//   $('.box').click(function() {
//     alert('Bạn đã click')
//   })
// })(jquery)

$(function() {
  $('.box').on('click', function() {
    if ($(this).hasClass('bg-red')) {
      alert('Chuyển sang màu xanh')
      $(this).removeClass('bg-red')
      $(this).addClass('bg-green')
    }
    else {
      alert('Chuyển sang màu đỏ')
      $(this).addClass('bg-red')
      $(this).removeClass('bg-green')
    }
  })
})

