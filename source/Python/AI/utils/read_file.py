import os
from utils.get_path import *

def readMatrix(fileName: str):
  path = getPath(fileName)
  if not os.path.exists(path):
    print("Không tìm thấy file đọc ma trận. Hãy kiểm tra lại tên file !")
    return
  
  with open(path, "r") as file:
    matrix = []
    for line in file:
      line = list(map(int, line.strip().split()))
      matrix.append(line)

    return matrix
  
def readWeight(fileName: str):
  path = getPath(fileName)
  if not os.path.exists(path):
    print("Không tìm thấy file đọc ma trận. Hãy kiểm tra lại tên file !")
    return
  
  with open(path, "r") as file:
    for line in file:
      line = list(map(int, line.strip().split()))
      return line