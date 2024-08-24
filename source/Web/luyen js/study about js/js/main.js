

var body = document.querySelector("#body");
body.classList.add("w-100vw", "h-100vh", "flex", "justify-content-center", "align-items-center");

var root = document.querySelector("#root");
root.classList.add("m-20");

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
    div.style.scale = 1.5;
  });

  div.addEventListener("mouseout", function() {
    div.style.scale = 1;
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

var listColor = ["text-red", "text-blue", "text-black", "text-orange", "text-green"];

var box = getBox();

for (let i = 0; i < listColor.length; i++) {
  let p = getP(listColor[i], i+1);
  let item = getItem(p);
  box.append(item);
}

root.append(box);

console.log("Đã chạy file");