var body = document.querySelector("#body");
body.classList.add("w-100vw", "h-100vh", "flex", "justify-content-center", "align-items-center");

var root = document.querySelector("#root");
root.className = "h-full flex flex-col justify-content-around";

var select = document.createElement("select");
select.className = "py-5 px-3 outline-none w-150";

var option1 = document.createElement("option");
option1.value = option1.innerText = "buble";

var option2 = document.createElement("option");
option2.value =option2.innerText = "dump";

select.append(option1, option2)

var box = getBox();

root.append(select);
root.append(box);


var listColor = ["text-red", "text-blue", "text-black", "text-orange", "text-green"];

for (let i = 0; i < listColor.length; i++) {
  let p = getP(listColor[i], i+1);
  let item = getItem(p);
  box.append(item);
}

function buble(div, status) {
  if (status == "mouseover") {
    div.style.scale = 1.5;
  }
  else {
    div.style.scale = 1;
  }
}

function dump(div, status) {
  if (status == "mouseover") {
    div.classList.add("transY");
  }
  else {
    div.classList.remove("transY");
  }
}

function getBox() {
  var box = document.createElement("div");
  box.classList.add(
    "box", "w-1500", "h-300",
    "flex", "gap-10", "justify-content-around",
  );

  return box;
}

function getItem(p) {
  var div = document.createElement("div");
  div.style.transition = "0.4s";
  div.classList.add(
    "item", "w-300", "h-full", "border",
    "flex", "justify-content-center", "align-items-center",
    "rounder-80p", "cursor-pointer"
  );
  
  div.addEventListener("mouseover", function() {
    if (select.value == "buble") {
      buble(div, "mouseover");
    }
    else {
      dump(div, "mouseover");
    }
  });

  div.addEventListener("mouseout", function() {
    if (select.value == "buble") {
      buble(div, "mouseout");
    }
    else {
      dump(div, "mouseout");
    }
  });

  div.append(p);
  return div;
}

function getP(color, text) {
  var p = document.createElement("p");
  p.classList.add("fw-700", "fs-60", color);
  p.innerText = `${text}`;

  return p;
}

console.log("Đã chạy file");