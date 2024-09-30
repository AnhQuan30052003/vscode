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

def binToDec(id_bin: str):
  return int(id_bin, 2)

print(decToBin(ord('P') - 65))
print(binToDec("01000110") % 26)