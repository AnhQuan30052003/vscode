import os

os.system("cls")

text = "aBz"
k = -3

def ceasar(text: str, key: int):
  resutlt = ""
  for t in text:
    typeChar = None
    if t >= 'A' and t <= 'Z':
      typeChar = 65
    elif t >= 'a' and t <= 'z':
      typeChar = 97
    else:
      typeChar = 0

    if typeChar == 0:
      resutlt += t
      continue

    t = (ord(t) - typeChar + key) % 26 + typeChar
    resutlt += chr(t)

  return resutlt

print(ceasar(text, k))