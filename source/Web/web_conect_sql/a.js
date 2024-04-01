$(document).ready(function(){
  $.ajax({
    url: 'a.php',
    method: 'GET',
    dataType: 'json',
    success: function(data){
      if(data.length > 0){
        var table_html = '';
        $.each(data, function(index, item){
          table_html += '<tr>';
          table_html += '<td>' + item.CCCD + '</td>';
          table_html += '<td>' + item['Họ và tên'] + '</td>';
          table_html += '<td>' + item.Tuổi + '</td>';
          table_html += '</tr>';
        });
        $('#nguoiTable').append(table_html);
      }
      else{
        $('#nguoiTable').append('<tr><td colspan="3">Không có dữ liệu</td></tr>');
      }
    },
    error: function(xhr, status, error){
      console.error(error);
    }
  });
});
