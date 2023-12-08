import os

os.system('cls')

n = int(input('Nhap kich thuoc: '))

a = [[int(input(f'Pha tu a[{i}][{j}]: ')) for j in range(n)] for i in range(n)]

print(a)