const a = {
  // variable
  ten: "Anh Quân",


  // function
  cls() {
    console.clear();
  },
  
  chao(ten = "") {
    console.log("Xin chào " + ten);
  }
};

a.ten = "Quân";

module.exports = a;

console.log("Run file a.js");