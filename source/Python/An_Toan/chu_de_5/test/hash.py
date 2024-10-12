import os

import hashlib

def calculate_md5(file_path):
  md5_hash = hashlib.md5()

  with open(file_path, "rb") as f:
    for block in iter(lambda: f.read(4096), b""):
      md5_hash.update(block)

  return md5_hash.hexdigest()

file_path = "hash.py"
file_path = os.path.join(os.path.abspath(os.path.dirname(__file__)), file_path)

md5_value = calculate_md5(file_path)

os.system("cls")
print(f"MD5: {md5_value}")
print(f"len: {len(md5_value)}")