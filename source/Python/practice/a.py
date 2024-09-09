import os
import array as arr

# Lệnh xoá màn hình khi thông dịch chương trình
os.system("cls" if os.name == "nt" else "clear")

a = [1, 3, 2]
b = (1, 3, 2)

a.sort()

print(a[0])
print(b[0])