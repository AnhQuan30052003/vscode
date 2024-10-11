import os

os.system("cls")

fileName = "md5.jpg"
path = os.path.join(os.path.abspath(os.path.dirname(__file__)), fileName)

data = []

with open(path, "rb") as file:
  for line in file:
    data.append(line)

print(data)

path = os.path.join(os.path.abspath(os.path.dirname(__file__)), "a.txt")
with open(path, "w") as file:
  # for content in data:
  file.write("anh quan")

print("Xong")