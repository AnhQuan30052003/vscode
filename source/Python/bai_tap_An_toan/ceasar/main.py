# 1. Viết chương trình mã hóa và giải mã một file văn bản ASCII trên máy tính bằng phương pháp mã hóa Ceasar.

import os, sys

# Các biến chính
type = key = source = destination = None

# Hàm main
def main():
  if len(sys.argv) > 4:
    os.system("cls")
    global type, key, source, destination

    type = sys.argv[1]
    key = sys.argv[2]
    key =  -int(key) if type == "d" else key
    source = sys.argv[3]
    destination = sys.argv[4]

    print(f"Nhận được: {type}, {key}, {source}, {destination}")

  else:
    print("Có lỗi !")

def ceasar(text: str, key: int):
  


  return text

main()