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

text = ""
typeChar = 97
for i in range(typeChar, typeChar + 26):
  text += chr(i)


key = "00111100"
key = int(key, 2) % 26
print(chr(key + 65))
result = ""

for char in text:
  char = ord(char) - typeChar
  xor = char ^ key
  xor = (xor % 26) + typeChar
  result += chr(xor)

print(list(text))
print(list(result))