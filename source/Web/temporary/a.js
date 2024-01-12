$(function() {
  $('.btn').click(function() {
    var input = $('#input-number').val();
    if (input.length == 0) input = 0
    var ket_qua = document.getElementById('ket-qua')
    ket_qua.innerHTML = input
  })
})