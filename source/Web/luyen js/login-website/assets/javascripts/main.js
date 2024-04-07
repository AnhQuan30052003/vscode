console.clear();
// localStorage.clear();

const link = {
  login: "./login.html",
  register: "./register.html",
  home: "./home.html",
};


function saveDatabase(acc, isFix) {
  var accounts = JSON.parse(localStorage.getItem("accounts"));
  if (accounts == null) accounts = [];

  if (isFix == true) {
    accounts.map((a) => {
      if (a.user == acc.user) {
        a = acc;
        console.log("Đã tìm thấy thấy và xác nhận đổi mậts khẩu");
      }
    });
  } else accounts.push(acc);
  console.log(accounts);
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

function doiMatKhau() {
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
  saveDatabase(user, true);

  alert("Đổi mật khẩu thành công");
  // window.location.href = link.home;
}

function xoaDoiTuongTrongDataBase() {
  var list = JSON.parse(localStorage.getItem("accounts"));
  list.pop();
  localStorage.setItem("accounts", JSON.stringify(list));
}