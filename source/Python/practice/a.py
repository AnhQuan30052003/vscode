# Đếm xem những ký tự trong text xuất hiện bao nhiêu lần ?
import os

os.system("cls" if os.name == "nt" else "clear")

a = [1, 2, 3]
ten = "Quân"

print(a)
print(ten)

def change(array: list, name: str):
  number = 0
  array.insert(0, number)

  name = "Anh Quân"
  array.append(name)

change(a, ten)

print(a)
print(ten)