import os

os.system("cls")

key = int("00111100", 2) % 26

char = ord('A') - 65

xor = char ^ key

print(chr(xor + 65))