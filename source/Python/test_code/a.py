import os

os.system("cls")

def main():
  X = 11
  Y = 33
  Z = 47
  text = "G"
  key = generateRandomKey(X, Y, Z)
  text = tinyA5_1(text, key)
  print(text)

def tinyA5_1(data: str, key: int):
  print(f"key: {key}, bin: {decToBin(key)}")
  result = ""
  for char in data:
    typeChar = 0
    if char >= 'A' and char <= 'Z':
      typeChar = 65

    if char >= 'a' and char <= 'z':
      typeChar = 97

    assci = ord(char) - typeChar
    assci = (assci ^ key) % 26 + typeChar
    result += chr(assci)

  return result

def generateRandomKey(X, Y, Z):
  key = ""
  X = decToBin(X, 6)
  Y = decToBin(Y, 8)
  Z = decToBin(Z, 9)

  for round in range(5):
    type = maj(X[1], Y[3], Z[3])
    if X[1] == type:
      X = rotate(X, 3)

    if Y[3] == type:
      Y = rotate(Y)

    if Z[3] == type:
      Z = rotate(Z, 3)

    s = int(X[len(X)-1]) ^ int(Y[len(Y)-1]) ^ int(Z[len(Z)-1])
    key = key + str(s)

  return binToDec(key)

def maj(x: str, y: str, z: str):
  sum = int(x) + int(y) + int(z)
  return str(1 if sum > 1 else 0)

def rotate(id_bin: str, number=2):
  size = len(id_bin)
  charFist = str(int(id_bin[size-2]) ^ int(id_bin[size-1]))
  if number == 3:
    charFist = str(int(id_bin[2]) ^ int(id_bin[size-2]) ^ int(id_bin[size-1]))

  return charFist + id_bin[0 : size-1]

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

main()