import os
from utils.get_path import *

def readMatrix(fileName: str):
  path = getPath(fileName)
  if not os.path.exists(path):
    print("Không tìm thấy file đọc ma trận. Hãy kiểm tra lại tên file !")
    return
  
  with open(path, "r") as file:
    matrix = []
    for i in range(10):
      line = list(map(int, file.readline().strip().split()))
      matrix.append(line)

    return matrix