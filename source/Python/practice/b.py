import os

os.system("cls")

open = [1, 2, 3]

open.pop(0)

potential  = [4, 5]

open = potential + open

print(open)