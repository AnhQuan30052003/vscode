import os

os.system("cls")

a = [1, 2, 3]
b = [100, 20, 30]

c = list(zip(a, b))
c.sort(key=lambda x : x[1])

a = [x[0] for x in c]

print(c)
print(a)