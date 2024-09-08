import os

# Lệnh xoá màn hình khi thông dịch chương trình
os.system('cls')

name = "Anh"
fullName = "Nguyễn Anh Quân"

print(fullName.find(name))

if fullName.find(name):
  print("Có nằm trong")
else:
  print("Không nằm trong full name !")