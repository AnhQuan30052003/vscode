import os

os.system('cls')

n = int(input('Nhap kich thuoc: '))

for i in range(n):
    for j in range(n):
        a = [int(input(f'Phan tu a[{i}][{j}]: '))]

print('Ma tran sau khi nhap:')
print(a)