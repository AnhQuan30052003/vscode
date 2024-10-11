import os

import hashlib

def calculate_md5(file_path):
  # Khởi tạo đối tượng MD5
  md5_hash = hashlib.md5()

  # Đọc file theo từng block (để tránh tốn bộ nhớ với file lớn)
  with open(file_path, "rb") as f:
    for block in iter(lambda: f.read(4096), b""):
      md5_hash.update(block)

  # Trả về kết quả dưới dạng chuỗi hex
  return md5_hash.hexdigest()

# Sử dụng hàm với file cần tính MD5
file_path = "hash.py"
file_path = os.path.join(os.path.abspath(os.path.dirname(__file__)), file_path)

md5_value = calculate_md5(file_path)

os.system("cls")
print(f"MD5: {md5_value}")

# 577e4ae29a34e5aff74609ca72dc7cbc
