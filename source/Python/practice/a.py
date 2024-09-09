import os
import array as arr

# Lệnh xoá màn hình khi thông dịch chương trình
os.system("cls" if os.name == "nt" else "clear")

myDict = {
  "ten": "Anh Quân",
  "tuoi": 21
}

myDict["ngheNghiep"] = "Sinh viên"

for k, v in myDict.items():
  print(f"{k} => {v}")