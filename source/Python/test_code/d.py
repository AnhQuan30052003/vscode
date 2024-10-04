import os

os.system("cls")

a = [1, 2, 3, 4, 5, 6]
b = []

n = 3
for i in range(n):
  b.append(a.pop(0))

print(f"a: {a}")
print(f"b {b}")