# 3. Viết chương trình mã hóa và giải mã một file văn bản ASCII trên máy tính bằng phương pháp mã hóa Vigenere.

import os, sys

# Hàm main
def main():
  if len(sys.argv) > 4:
    # Lấy đường dẫn file và thư mục của file đang chạy
    pathFileRun = os.path.abspath(__file__)
    currentdir = os.path.dirname(pathFileRun)

    type = sys.argv[1]
    key = sys.argv[2]
    source = sys.argv[3]
    destination = sys.argv[4]

    # Đọc dữ liệu
    path = os.path.join(currentdir, source)
    if not os.path.exists(path):
      print(f"Error: Can't find the file '{source}' needed to read !")
      return

    # Tạo bản Vigenere
    table = createTableVigenere()

    # Xử lý
    listData = getDataFromFile(pathRead=path)

    path = os.path.join(currentdir, destination)
    writeDataTofile(pathWirte=path, table=table, listSave=listData, key=key, type=type)

    os.system("cls")
    typeText = "Encryption" if type == "e" else "Decryption"

    # for row in table:
      # for col in row:
        # print(col, end=" ")
      # print()

    # Hiển thị kế quả
    print(f"Type: {typeText}")
    print(f"Key: {key}")
    print(f"Source: {source}")
    print(f"Destination: {destination}")
    print(f"\nStatus: {typeText} successfully")

  else:
    print("Error: Parameter !")

def createTableVigenere():
  table = []
  for i in range(ord('A'), ord('Z') + 1):
    row = []
    for j in range(i, i + 26):
      j = j - 26 if j > ord('Z') else j
      row.append(chr(j))
    table.append(row)

  return table

def vigenere(table: list, text: str, key:str, type: chr):
  text = text.upper()
  key = key.upper()
  result = ""

  i_key = 0
  for t in text:
    i_key = 0 if i_key >= len(key) else i_key
    
    typeChar = 0
    if t >= 'A' and t < 'Z':
      typeChar = 65

    if typeChar == 0:
      result += t
      i_key += 1
      continue

    col = ord(key[i_key]) - typeChar
    if type == 'e':
      row = ord(t) - typeChar
      char = table[row][col]
      result += char

    else:
      for row in table:
        if row[col] == t:
          char = row[0].lower()
          result += char
          break
        
    i_key += 1

  return result

def getDataFromFile(pathRead: str):
  listSave = []
  with open(pathRead, "r") as file:
    for line in file:
      text = line.strip()
      listSave.append(text)

  return listSave

def writeDataTofile(pathWirte: str, table: list, listSave: list, key: str, type: chr):
  with open(pathWirte, "w") as file:
    for text in listSave:
      content = vigenere(table=table, text=text, key=key, type=type)
      file.write(content)
      file.write('\n')

main()