import os

os.system("cls")

open = [2, 3, 4, 5]
close = [0, 1]
find = [0, 4, 5, 6]

print(find)

for number in find:
  print(f"Duyệt number = {number}: ", end="")
  if number in open or number in close:
    find.remove(number)
    print("Xoá")
  else:
    print("Không xoá !")

print(f"find sau khi lọc: {find}")
