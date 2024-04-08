console.clear();
// localStorage.clear();

const link = {
  login: "./login.html",
  register: "./register.html",
  home: "./home.html",
};

var accounts = [];
var getAccounts = localStorage.getItem("accounts");
if (getAccounts != null) accounts = JSON.parse(getAccounts);

function saveDatabase(acc) {
  accounts.push(acc);
  localStorage.setItem("accounts", JSON.stringify(accounts));
}

function updateDatabase(acc) {
  accounts = accounts.map((a) => {
    if (a.user == acc.user) {
      return acc;
    }
    return a;
  });
  localStorage.setItem("accounts", JSON.stringify(accounts));
}

function register() {
  let name, user, password;
  name = document.querySelector("#name");
  user = document.querySelector("#user");
  password = document.querySelector("#password");

  var acc = {
    user: user.value,
    password: password.value,
    name: name.value,
  };

  saveDatabase(acc);
  alert("Đăng ký thành công");
  window.location.href = link.login;
}

function login() {
  let user, password, pError;
  user = document.querySelector("#user");
  password = document.querySelector("#password");
  pError = document.querySelector("#p-error");

  var _accounts = JSON.parse(localStorage.getItem("accounts"));

  _accounts.forEach((acc) => {
    if (acc.user == user.value && acc.password == password.value) {
      localStorage.setItem("userLogin", JSON.stringify(acc));
      window.location.href = link.home;
    }
  });
  if (isLogin == false) {
    pError.innerHTML = "Tài khoản hoặc mật khẩu không chính xác !";
  }
}

function logout() {
  if(confirm("Xác nhận đăng xuất ?")) {
    localStorage.removeItem("userLogin");
    window.location.href = link.login;
  }
}

function showChangePassword() {
  var changePass = document.querySelector(".change-password");
  changePass.classList.remove("hidden");
}

function changePassword() {
  var passOld, passNew, pError;
  passOld = document.querySelector("#pass-old").value;
  passNew = document.querySelector("#pass-new").value;
  pError = document.querySelector("#p-error");
  pError.innerHTML = "";

  if (passOld != user.password) {
    pError.innerHTML = "Mật khẩu cũ không đúng !";
    return;
  }

  user.password = passNew;
  updateDatabase(user);

  alert("Đổi mật khẩu thành công");
  // window.location.href = link.home;
}

function xoaDoiTuongTrongDataBase() {
  var list = JSON.parse(localStorage.getItem("accounts"));
  list.pop();
  localStorage.setItem("accounts", JSON.stringify(list));
}