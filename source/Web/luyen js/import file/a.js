

const a_var = {
  ten: "Anh Quân",
}

const a_fun = {
  cls() {
    console.clear();
  },
  
  chao(ten = "") {
    console.log("Xin chào " + ten);
  }
};

module.exports = {
  a_var,
  a_fun
};

console.log("Run file a.js");