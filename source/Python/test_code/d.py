import os

os.system("cls")

def decToBin(dec: int, length=8):
  id_bin = bin(dec)[2:]
  distance = length - len(id_bin)

  text = ""
  if distance > 0:
    for i in range(distance):
      text += "0"
    text += id_bin

  else:
    text = id_bin

  return text

typeChar = 65

K = 20

for ass in range(65, 65 + 26):
  P = ass - typeChar
  xor = (P ^ K) % 26
  print(f"{chr(P + typeChar)} -> {chr(xor + typeChar)}")
