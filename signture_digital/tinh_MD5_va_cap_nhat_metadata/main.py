import os, hashlib
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
import fitz

def get_path(files: list):
  pathCur = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(pathCur, *files)

def calculate_md5(file_path: list):
  md5_hash = hashlib.md5()
  path = get_path(file_path)

  with open(path, "rb") as f:
    for block in iter(lambda: f.read(4096), b""):
      md5_hash.update(block)

  return md5_hash.hexdigest().upper()

def update_metadata(fileInput: list, fileOutput: list, text: str="" , remove: bool=False):
  path = get_path(fileInput)
  keyPDF = "title"
  doc = fitz.open(path)

  if remove:
    if keyPDF in doc.metadata:
      del doc.metadata[keyPDF]
  else:
    doc.metadata[keyPDF] = text

  path = get_path(fileOutput)
  doc.save(path)
  doc.close()

def main():
  os.system("cls")
  a = ["a.pdf"]
  print(f"MD5 ban đầu: {calculate_md5(a)}")

  update_metadata(["a.pdf"], ["b.pdf"])
  b = ["b.pdf"]
  print(f"MD5 sau khi thêm: {calculate_md5(b)}")

main()