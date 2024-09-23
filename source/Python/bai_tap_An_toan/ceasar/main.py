# 1. Viết chương trình mã hóa và giải mã một file văn bản ASCII trên máy tính bằng phương pháp mã hóa Ceasar.

import os, sys

# Hàm main
def main():
  if len(sys.argv) > 4:
    # Lấy đường dẫn file và thư mục của file đang chạy
    pathFileRun = os.path.abspath(__file__)
    currentdir = os.path.dirname(pathFileRun)

    type = sys.argv[1]
    key = sys.argv[2]
    key = -int(key) if type == "d" else int(key)
    source = sys.argv[3]
    destination = sys.argv[4]

    # Đọc dữ liệu
    path = os.path.join(currentdir, source)
    if not os.path.exists(path):
      print(f"Error: Can't find the file '{source}' needed to read !")
      return
    
    # Xử lý
    listData = getDataFromFile(pathRead=path)

    path = os.path.join(currentdir, destination)
    writeDataTofile(pathWirte=path, listSave=listData, key=key)

    os.system("cls")
    typeText = "Encryption" if type == "e" else "Decryption"
    keyText = key if key > 0 else -key

    # Hiển thị kết quả
    print(f"Type: {typeText}")
    print(f"Key: {keyText}")
    print(f"Source: {source}")
    print(f"Destination: {destination}")
    print(f"\nStatus: {typeText} successfully")

  else:
    print("Error: Parameter !")

def ceasar(text: str, key: int):
  resutlt = ""

  for t in text:
    typeChar = 0
    if t >= 'A' and t <= 'Z':
      typeChar = 65

    elif t >= 'a' and t <= 'z':
      typeChar = 97

    if typeChar == 0:
      resutlt += t
      continue

    t = (ord(t) - typeChar + key) % 26 + typeChar
    resutlt += chr(t)

  return resutlt

def getDataFromFile(pathRead: str):
  listSave = []
  with open(pathRead, "r") as file:
    for line in file:
      text = line.strip()
      listSave.append(text)

  return listSave

def writeDataTofile(pathWirte: str, listSave: list, key: int):
  with open(pathWirte, "w") as file:
    for text in listSave:
      content = ceasar(text=text, key=key)
      file.write(content)
      file.write('\n')

main()