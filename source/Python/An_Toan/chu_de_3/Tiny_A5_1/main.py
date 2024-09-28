# Viết chương trình mã hóa và giải mã file bằng thuật toán A5/1, khóa là X, Y, Z nhập từ bàn phím.

import os, sys

def main():
  if len(sys.argv) > 6:
    # Lấy đường dẫn file và thư mục của file đang chạy
    pathFileRun = os.path.abspath(__file__)
    currentdir = os.path.dirname(pathFileRun)

    type = sys.argv[1]
    X = sys.argv[2]
    Y = sys.argv[3]
    Z = sys.argv[4]
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


    # Ghi dữ liệu ra destination
    path = os.path.join(currentdir, destination)
    with open (path, "w") as file:
      for data in listData:
        pass

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

main()