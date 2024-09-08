import os
import array

# Lệnh xoá màn hình khi thông dịch chương trình
os.system("cls")

arr = array.array("i", [1, 2, 3])

arr.append(4)
arr.insert(0, 0)

arr2 = arr[0: len(arr) - 2]

for i in arr2:
  print(i, end=" ")