import os

os.system("cls")

path = os.path.dirname(__file__)

if os.path.exists(path + "/a.txt"):
  with open(path + "/a.txt", "r", encoding="utf-8") as file:
    for line in file:
      print(line, end="")
else:
  print("File không tồn tại !")