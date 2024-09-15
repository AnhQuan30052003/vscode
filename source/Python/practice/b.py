import os

os.system("cls")

a = [1, 2, 3, 3]

b = set(a)

c = list(b)

print(a)
print(c)

if a == c:
  print("2 list giống nhau")
else:
  print("Khác !")