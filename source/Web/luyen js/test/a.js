

console.clear()

let i = 0

const a = setInterval(function() {
  console.log(i)
  i += 1

  if (i == 10) clearInterval(a)
}, 1000)