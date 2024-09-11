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

  localPath = "\source\Python\practice\BFS_DFS"
  path = os.getcwd() + localPath
  nameFile = "\matrix.txt"

  if not os.path.exists(path + nameFile):
    print("Lỗi: Không tìm thấy file đọc ma trận !")
    return

  with open(path + nameFile, "r") as file:
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

  i = 0
  while i < diemKetThuc:
    if matrix[i][diemKetThuc] == 1:
      listResult.insert(0, i)
      if i == diemBatDau:
        break

      diemKetThuc = i
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
    for i in range(0, len(matrix[n])):
      if matrix[n][i] == 1:
        dinhTiemNang.append(i)

    # Loại bỏ các đỉnh tiềm năng đã có hoặc đã duyệt
    dinhDaLoc = []
    for i in dinhTiemNang:
      if i not in _open and i not in _close:
        dinhDaLoc.append(i)

    # Thêm đỉnh tiềm năng vào _open
    _open += dinhDaLoc

  print("Không có đường đi !")

if __name__ == "__main__":
  main()