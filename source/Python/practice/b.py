import os

os.system("cls")

a = [2, 4, 3, 1]
b = ['b', 'd', 'c', 'a']

c = list(zip(a, b))
print(c)

c[0], c[1] = c[1], c[0]
print(c)

a, b = zip(*c)

print(a)
print(b)