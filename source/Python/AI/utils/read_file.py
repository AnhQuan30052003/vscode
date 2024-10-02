import os
from utils.get_path import *

def readMatrix(fileName: str, weight: bool=False):
  path = getPath(fileName)
  if not os.path.exists(path):
    print("Không tìm thấy file đọc ma trận. Hãy kiểm tra lại tên file !")
    return
  
  with open(path, "r") as file:
    listWeight = []
    namePeaks = []
    matrix = []

    getNamePeaks = False
    getWeight = False

    for line in file:
      if not getNamePeaks:
        namePeaks = list(line.strip().split())
        getNamePeaks = True

      elif weight and not getWeight: 
        listWeight = list(map(int, line.strip().split()))
        getWeight = True

      else:
        line = list(map(int, line.strip().split()))
        matrix.append(line)

    return matrix, namePeaks, listWeight