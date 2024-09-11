# BFS and DFS
import os

os.system("cls")

# Khởi tạo
listDinh = {}
reverseListDinh = {}

_open = []
_close = []

# Ma trận đồ thị
matrix = []

def setUpMatrix():
  global matrix

  localPath = "\\source\\Python\\practice\\BFS_DFS\\matrix.txt"
  path = os.getcwd() + localPath

  if not os.path.exists(path):
    print("Không tìm thấy file đọc ma trận !")
    return

  with open(path, "r") as file:
    for line in file:
      listTemp = []
      for t in line.strip():
        if t != ' ':
          listTemp.append(int(t))
      matrix.append(listTemp)

def setUpDict():
  global listDinh, reverseListDinh

  key = 1
  for char in range(65, 65 + 26):
    if chr(char) != listDinh[0]:
      listDinh[key] = chr(char)
      key += 1

  reverseListDinh = dict(map(reversed, listDinh.items()))

def printRoadmap(diemBatDau: int, diemKetThuc: int):
  listResult = [diemKetThuc]
  dinhXet = diemKetThuc

  i = 0
  while i < diemKetThuc:
    if matrix[i][dinhXet] == 1:
      listResult.insert(0, i)
      if i == diemBatDau:
        break

      dinhXet = diemKetThuc = i
      i = 0
    else:
      i += 1

  print(listDinh[0], end="")
  for i in range(1, len(listResult)):
    print(f" -> {listDinh[listResult[i]]}", end="")


def main():
  global _open, _close

  setUpMatrix()

  # Nhập đỉnh đầu và cuối
  diemBatDau = input("Điểm bắt đầu: ").upper()
  diemKetThuc = input("Điểm kết thúc: ").upper()

  listDinh[0] = diemBatDau
  setUpDict()
  
  keyDiemBatDau = reverseListDinh[diemBatDau]
  keyDiemKetThuc = reverseListDinh[diemKetThuc]

  _open.append(keyDiemBatDau)

  # Bắt đầu duyệt
  while len(_open) > 0:
    n = _open.pop(0)

    if n == keyDiemKetThuc:
      # Xử lý in ra
      printRoadmap(diemBatDau=keyDiemBatDau, diemKetThuc=keyDiemKetThuc)
      return

    # Đánh dấu đỉnh này đã xét
    _close.append(n)

    # Tìm đỉnh tiềm năng từ đỉnh n
    dinhTiemNang = []
    for i in range(1, len(matrix[n])):
      if matrix[n][i] == 1:
        dinhTiemNang.append(i)

    # Loại bỏ các đỉnh tiềm năng đã có hoặc đã duyệt
    for i in dinhTiemNang:
      if i in _open or i in _close:
        dinhTiemNang.remove(i)

    # Thêm đỉnh tiềm năng vào _open
    _open += dinhTiemNang

  print("Không có đường đi !")

main()