// $(function() {
//   $('.box').on({
//     click: function() {
//       if ($(this).hasClass('bg-red')) {
//         alert('Chuyển sang màu xanh')
//         $(this).removeClass('bg-red')
//         $(this).addClass('bg-green')
//       }
//       else {
//         alert('Chuyển sang màu đỏ')
//         $(this).addClass('bg-red')
//         $(this).removeClass('bg-green')
//       }
//     }, 
//     mouseenter: function() {
//       if ($(this).hasClass('bg-red')) {
//         $(this).removeClass('bg-red')
//         $(this).addClass('bg-green')
//       }
//       else {
//         $(this).addClass('bg-red')
//         $(this).removeClass('bg-green')
//       }
//     },
//     mouseleave: function() {
//       if ($(this).hasClass('bg-red')) {
//         $(this).removeClass('bg-red')
//         $(this).addClass('bg-green')
//       }
//       else {
//         $(this).addClass('bg-red')
//         $(this).removeClass('bg-green')
//       }
//     }
//   })
// })

$(function() {
  // if ($('.banner-page').length) {
    $('.slider').slick({
      infinite: true,
      arrows: true,
      dots: true,
      
      dotsClass: 'slick-dots',
      prevArrow: `<button type='button' class='slick-prev slick-arrow'><i class="fa-solid fa-arrow-left"></i></button>`,
      nextArrow: `<button type='button' class='slick-next slick-arrow'><i class="fa-solid fa-arrow-right"></i></button>`,
      
      mobileFirst: true,
      slidesToShow: 3,
      slidesToScroll: 1,
    });
  // }
})