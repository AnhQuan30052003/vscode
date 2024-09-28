import os

os.system("cls")

dinh = [1, 2, 3]
trongSo = [20, 30, 10]

dinhTiemNang = [4, 5]
trongSoTiemNang = [5, 28]

dinh += dinhTiemNang
trongSo += trongSoTiemNang

a = list(zip(dinh, trongSo))
a.sort(key=lambda x : x[1])

dinh, trongSo = zip(*a)

print(dinh)
print(trongSo)