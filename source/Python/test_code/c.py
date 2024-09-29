import os

os.system("cls")

typeChar = 65

for i in range(26):
  for j in range(26):
    print(f"{chr(i + typeChar)} XOR {chr(j + typeChar)} = {chr(((i ^ j) % 26) + typeChar)}")