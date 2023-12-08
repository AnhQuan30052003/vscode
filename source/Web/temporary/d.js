// Mo / dong menu
function Mo_DongMenu() {
  var list = document.getElementById('list');
  var anhMenu = document.getElementById('anh-menu');

  if (list.style.display == 'none') {
    list.style.display = 'flex';
    anhMenu.src = "../../01_photo/icon-x.svg";
    console.log('Hien thi menu');
  }
  else {
    list.style.display = 'none';
    anhMenu.src = "../../01_photo/icon-menu.svg";
    console.log('An menu');
  }
}