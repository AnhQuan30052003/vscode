import os, msvcrt

os.system("cls")

path = os.path.abspath(os.path.dirname(__file__))
pathRead = os.path.join(path, "a.txt")
pathWrite = os.path.join(path, "b.txt")

content = []
with open(pathRead, "r") as file:
  char = file.read(1)
  while char:
    content.append(char)
    char = file.read(1)

with open(pathWrite, "w") as file:
  for data in content:
    file.write(data)

print(content)