# Viết chương trình mã hóa và giải mã file bằng thuật toán A5/1, khóa là X, Y, Z nhập từ bàn phím.

import os, sys

def main():
  if len(sys.argv) > 6:
    # Lấy đường dẫn file và thư mục của file đang chạy
    pathFileRun = os.path.abspath(__file__)
    currentdir = os.path.dirname(pathFileRun)

    type = sys.argv[1]
    X = int(sys.argv[2])
    Y = int(sys.argv[3])
    Z = int(sys.argv[4])
    source = sys.argv[5]
    destination = sys.argv[6]

    # Đọc dữ liệu
    path = os.path.join(currentdir, source)
    if not os.path.exists(path):
      print(f"Error: Can't find the file '{source}' needed to read !")
      return
    
    # Lấy dữ liệu từ source
    listData = []
    with open(path, "r") as file:
      for line in file:
        text = line.strip()
        listData.append(text)

    # Xử lý
    key = generateRandomKey(X, Y, Z)
    listDataResult = []
    for data in listData:
      data = tinyA5_1(data, key)
      listDataResult.append(data)

    # Ghi dữ liệu ra destination
    path = os.path.join(currentdir, destination)
    with open (path, "w") as file:
      for data in listDataResult:
        file.write(data)
        file.write("\n")

    # Hiển thị kết quả ra màn hình console
    os.system("cls")
    typeText = "Encryption" if type == "e" else "Decryption"

    print(f"Type: {typeText}")
    print(f"Key: X = {X}, X = {Y}, Z = {Z} ")
    print(f"Source: {source}")
    print(f"Destination: {destination}")
    print(f"\nStatus: {typeText} successfully")

  else:
    print("Error: Parameter !")

def tinyA5_1(data: str, key: str):
  key = binToDec(key) % 26

  result = ""
  for char in data:
    typeChar = 0
    if char >= 'A' and char <= 'Z':
      typeChar = 65

    if char >= 'a' and char <= 'z':
      typeChar = 97

    if typeChar == 0:
      result += char
      continue

    assci = ord(char) - typeChar
    assci = ((assci ^ key) % 26) + typeChar
    result += chr(assci)

  return result

def generateRandomKey(X, Y, Z):
  key = ""
  X = decToBin(X, 6)
  Y = decToBin(Y, 8)
  Z = decToBin(Z, 9)

  for round in range(8):
    type = maj(X[1], Y[3], Z[3])
    if X[1] == type:
      X = rotate(X, 3)

    if Y[3] == type:
      Y = rotate(Y)

    if Z[3] == type:
      Z = rotate(Z, 3)

    s = int(X[len(X)-1]) ^ int(Y[len(Y)-1]) ^ int(Z[len(Z)-1])
    key = key + str(s)

  return key

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