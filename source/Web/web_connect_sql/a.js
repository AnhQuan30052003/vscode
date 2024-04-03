// $(document).ready(function(){
//   $.ajax({
//     url: 'php/a.php',
//     method: 'GET',
//     dataType: 'json',
//     success: function(data){
//       if(data.length > 0){
//         var table_html = '';
//         $.each(data, function(index, item){
//           table_html += '<tr>';
//           table_html += '<td>' + item.CCCD + '</td>';
//           table_html += '<td>' + item['Họ và tên'] + '</td>';
//           table_html += '<td>' + item.Tuổi + '</td>';
//           table_html += '</tr>';
//         });
//         $('#nguoiTable').append(table_html);
//       }
//       else{
//         $('#nguoiTable').append('<tr><td colspan="3">Không có dữ liệu</td></tr>');
//       }
//     },
//     error: function(xhr, status, error){
//       console.error(error);
//     }
//   });
// });

// Cài đặt thư viện mysql2
const mysql = require('mssql');

// Tạo kết nối với cơ sở dữ liệu
const connection = mysql.createConnection({
  host: "ADMIN\SQLEXPRESS",
  database: 'test',
  // password: "",
  // database: ""
});

// Thực thi câu lệnh SQL
connection.query('select * from Nguoi', (err, results) => {
  if (err) {
    console.error(err);
    return;
  }

  // Lấy dữ liệu từ kết quả
  const data = results;

  // Hiển thị dữ liệu ra HTML
  const html = `
    <table>
      <thead>
        <tr>
          <th>CCCD</th>
          <th>Họ và tên</th>
          <th>Tuổi</th>
        </tr>
      </thead>
      <tbody>
        ${data.map(row => `
          <tr>
            <td>${row.cmt}</td>
            <td>${row.ten}</td>
            <td>${row.tuoi}</td>
          </tr>
        `).join('')}
      </tbody>
    </table>
  `;

  document.getElementById('nguoiTable').innerHTML = html;
});

// Đóng kết nối với cơ sở dữ liệu
connection.end();