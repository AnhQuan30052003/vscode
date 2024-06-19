# Hàm xoá màn hình được code lại
def cls():
  import os
  os.system("cls")
      
# Hiển thị câu hỏi ra ngoài màn hình console
def CauHoi():
  cls()
  print("Lựa chọn câu trả lời bằng cách nhập số:")
  print("0. Thêm sinh viên")
  print("1. Hiển thị danh sách sinh viên")
  print("2. Tìm kiếm sinh viên")

# Lấy câu trả lời
def CauTraLoi():
  while True:
    traLoi = input()
    if traLoi >= "0" and traLoi <= "2" and len(traLoi) > 0:
      break
    CauHoi()

  return int(traLoi)

# Thêm sinh viên
def ThemSinhVien(sinhViens):
  while True:
    cls()
    sinhVien = input("Nhập họ và tên sinh viên mới: ")

    # Đi kiểm tra đô dài tên
    tu = sinhVien.split()
    if len(tu) > 1:
      break

  sinhViens.append(sinhVien.lower().title())

# Hiển thị danh sách sinh viên
def HienThiSinhVien(sinhViens):
  cls()
  i = 1
  for s in sinhViens:
    print(f'{i}. {s}')
    i += 1
  
# Tìm kiếm sinh viên
def TimKiem(sinhViens):
  cls()
  # Lấy tên sinh viên
  tenSinhVien = input("Nhập tên sinh viên: ")

  # Tiến hành tìm
  from unidecode import unidecode
  i = 1
  for s in sinhViens:
    tenTim = tenSinhVien.lower()
    tenLay = s.lower()
    if tenTim in tenLay or tenTim in unidecode(tenLay):
      print(f'{i}. {s}')
      i += 1

def main():
  sinhViens = []

  while True:
    CauHoi()
    traLoi = CauTraLoi()
    match traLoi:
      case 0:
        ThemSinhVien(sinhViens)

      case 1:
        HienThiSinhVien(sinhViens)
        input()

      case 2:
        TimKiem(sinhViens)
        input()
main()