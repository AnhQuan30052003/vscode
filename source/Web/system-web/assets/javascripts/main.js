const account = {
  user: "anhquan300503",
  password: "@Tienthien10"
};

const web = [
  "https://docs.google.com/spreadsheets/d/13Cx5vn3o0gWC_L-ZM2kiiMO7dA9kx41L/edit?pli=1#gid=2004933685",
  "https://drive.google.com/drive/folders/1-dSzCz5FPYqCL3aP8jHnDPwomMOv3Iy2?usp=sharing"
];

function actionLogin() {
  var getUser = document.getElementById("user");
  var getPassword = document.getElementById("password");
  var pError = document.getElementById("p-error");
  var type = document.getElementById("type");

  pError.innerHTML = "";
  if (getUser.value == account.user && getPassword.value == account.password) {
    window.location.href = web[type.value];
  }
  else {
    pError.innerHTML = "User or Password incorrect !";
  }
}