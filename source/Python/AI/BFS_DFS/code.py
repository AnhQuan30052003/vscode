# BFS and DFS
import os

os.system("cls")

# Khởi tạo
listPeak = {}
reverseListPeak = {}
_open = []
_close = []

# Ma trận đồ thị
matrix = []

def setUpMatrix():
  global matrix

  pathFileRun = os.path.abspath(__file__)
  currentDir = os.path.dirname(pathFileRun)
  nameFile = "matrix.txt"
  path = os.path.join(currentDir, nameFile)

  if not os.path.exists(path):
    print("Lỗi: Không tìm thấy file đọc ma trận !")
    return

  with open(path, "r") as file:
    for line in file:
      listTemp = []
      for t in line.strip():
        if t != ' ':
          listTemp.append(int(t))
      matrix.append(listTemp)

def setUpDict():
  global listPeak, reverseListPeak

  key = 1
  for char in range(65, 65 + 26):
    if chr(char) != listPeak[0]:
      listPeak[key] = chr(char)
      key += 1

  reverseListPeak = dict(map(reversed, listPeak.items()))

def printRoadmap(startPoint: int, endPoint: int):
  listResult = [endPoint]

  i = 0
  while i < endPoint:
    if matrix[i][endPoint] == 1:
      listResult.insert(0, i)
      if i == startPoint:
        break

      endPoint = i
      i = 0
    else:
      i += 1

  print(listPeak[0], end="")
  for i in range(1, len(listResult)):
    print(f" -> {listPeak[listResult[i]]}", end="")

def main():
  global _open, _close

  setUpMatrix()

  # Nhập đỉnh đầu và cuối
  startPoint = input("Điểm bắt đầu: ").upper()
  endPoint = input("Điểm kết thúc: ").upper()

  listPeak[0] = startPoint
  setUpDict()
  
  keyStartPoint = reverseListPeak[startPoint]
  keyEndPoint = reverseListPeak[endPoint]

  _open.append(keyStartPoint)

  # Bắt đầu duyệt
  while len(_open) > 0:
    n = _open.pop(0)

    # Khi đã tìm thấy
    if n == keyEndPoint:
      # Xử lý in ra
      printRoadmap(startPoint=keyStartPoint, endPoint=keyEndPoint)
      return

    # Đánh dấu đỉnh này đã xét
    _close.append(n)

    # Tìm đỉnh tiềm năng từ đỉnh n
    peakPotential = []
    for i in range(0, len(matrix[n])):
      if matrix[n][i] == 1:
        peakPotential.append(i)

    # Loại bỏ các đỉnh tiềm năng đã có hoặc đã duyệt
    peakFiltered = []
    for i in peakPotential:
      if i not in _open and i not in _close:
        peakFiltered.append(i)

    # Thêm đỉnh tiềm năng vào _open
    _open = _open + peakFiltered # BFS
    # _open = peakFiltered + _open # DFS

  print("Không có đường đi !")

if __name__ == "__main__":
  main()