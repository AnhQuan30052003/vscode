import os

os.system("cls")

text = ""
result = ""
k = 3

pathFileRun = os.path.abspath(__file__)
currentdir = os.path.dirname(pathFileRun)
fileRead = "a.txt"
fileWrite = "b.txt"

path = os.path.join(currentdir, fileRead)
with open(path, "r") as file:
  for line in file:
    text = line.strip()

path = os.path.join(currentdir, fileWrite)
with open(path, "w") as file:
  typeChar = 97
  for t in text:
    maChar = (ord(t) - typeChar + k) % 26 + typeChar
    char = chr(maChar)
    result += char

  file.write(result)
