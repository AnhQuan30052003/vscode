$(function() {
  $('#open-close-menu').on('click', function() {
    $('#open-close-menu span').removeClass('active-use');
    
    if ($('.menu').css('display') === 'block') {
      console.log('An');
      $('.menu').slideUp(350);
      $('#close').addClass('active-use');
    }
    else {
      console.log('Hien');
      $('.menu').slideDown(350);
      $('#open').addClass('active-use');
    }
  });
});