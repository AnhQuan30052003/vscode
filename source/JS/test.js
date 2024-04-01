
console.clear();

function hienThi1(text) {
  console.log(text + " của hiển thị 1");
}

const hienThi2 = function(text) {
  console.log(text + " của hiển thị 2");
}

const hienThi3 = (text) => {
  console.log(text + " của hiển thị 3");
}

let text = "Nguyễn Anh Quân";
hienThi3(text);