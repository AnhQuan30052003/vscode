import os

os.system("cls")

char = 'Y'
k = 3

maChar = (ord(char) - 65 + k) % 26 + 65
char = chr(maChar)

print(char)
