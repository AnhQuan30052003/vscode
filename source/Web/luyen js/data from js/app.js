var list = ["Anh Quân", "Bích Dân",  "Văn Định", "Thanh Phượng"];

window.onload = function() {
  addElement();
}

const addElement = () => {
  let _list = document.querySelector("#list");
  _list.innerHTML = "";
  
  list.forEach((str) => {
    let _li = document.createElement("li");
    _li.classList.add("fs-30");
    _li.textContent = str;
    _list.appendChild(_li);
  });
};

const clickAdd = function() {
  let _getTxtNhap = document.querySelector("#txtNhap");
  let _txtNhap = _getTxtNhap.value;

  if (_txtNhap) {
    list.push(_txtNhap);
    _getTxtNhap.value = "";
    addElement();
  }
  else {
    alert("Hãy nhập dữ liệu !");
  }
};

console.log("Đã load file app.js");

