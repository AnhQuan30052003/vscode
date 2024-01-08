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

$(document).ready(function() {
  if ($('.mod-slider-demo').length) {
    $('.slider').slick({
      infinite: true,
      arrows: true,
      dots: true,
      
      dotsClass: 'slick-dots',
      prevArrow: `<button type='button' class='slick-prev slick-arrow'><i class="fa-solid fa-arrow-left"></i></button>`,
      nextArrow: `<button type='button' class='slick-next slick-arrow'><i class="fa-solid fa-arrow-right"></i></button>`,
      
      mobileFirst: true,
      slidesToShow: 1,
      slidesToScroll: 1,

      responsive: [
        {
          breakpoint: 767,
          settings: {
            slidesToShow: 2,
          }         
        },
        {
          breakpoint: 1279,
          settings: {
            slidesToShow: 3,
          }
        },
      ]
    });
  }
});