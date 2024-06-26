var _body = document.querySelector("body");
var _div = document.createElement("div");
var _input = document.createElement("input");

_div.textContent = "Như bị khùng";
_body.appendChild(_div);
_div.appendChild(_input)

var h = 100;

_div.style.height = `${h}px`;
_div.style.padding = "10px"
_div.style.border = "solid 1px";
// _div.style.color = "white";
// _div.style.backgroundColor = "red";