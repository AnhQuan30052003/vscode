import os

from unidecode import unidecode

os.system("cls")

chuoi_co_dau = "Nguyễn Anh Quân"
chuoi_khong_dau = unidecode(chuoi_co_dau.lower())

print(chuoi_khong_dau)
