console.clear();

var nguoi1 = {
  mssv: "01",
  ten: "Quân"
};

var nguoi2 = {
  mssv: "02",
  ten: "Đồng"
};

var list = [];
list.push(nguoi1);
list.push(nguoi2);

function fix(list, nguoi) {
  list.forEach((ng) => {
    if (ng.mssv == nguoi.mssv) {
      ng = nguoi;
      return;
    }
  });
}

// nguoi1.ten = "Anh Quân";

// fix(list, nguoi1);


// list.pop();
// console.log(list)

var a = [1, 2, 3, 4];
var n = 3;

a.forEach((_a, i, arr) => {
  if (_a == n) arr[i] = _a * 10;
});

console.log(a)