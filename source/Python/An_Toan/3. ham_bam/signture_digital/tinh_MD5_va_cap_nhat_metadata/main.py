import os, hashlib
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
import fitz

def get_path(files: list):
  pathCur = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(pathCur, *files)

def calculate_md5(path: str):
  md5_hash = hashlib.md5()

  with open(path, "rb") as f:
    for block in iter(lambda: f.read(4096), b""):
      md5_hash.update(block)

  return md5_hash.hexdigest().upper()

def update_metadata(fileInput: str, fileOutput: str, text: str="" , remove: bool=False):
  keyPDF = "author"
  doc = fitz.open(fileInput)

  meta = doc.metadata

  if remove:
    if keyPDF in meta:
      del meta[keyPDF]
  else:
    meta[keyPDF] = text

  doc.set_metadata(meta)
  doc.saveIncr()
  doc.close()

def read_metadata(file: str):
  doc = fitz.open(file)
  for key, value in doc.metadata.items():
    print(f"{key}: {value}")
  doc.close() 

def main():
  os.system("cls")
  a = get_path(["a.pdf"])
  b = get_path(["b.pdf"])

  # update_metadata(b, b, text="Anh Quân")
  # read_metadata(b)
  # print(f"MD5 của b.pdf: {calculate_md5(b)}")
  a = get_path(["a.txt"])
  print(f"MD5 của a.txt: {calculate_md5(a)}")

  print("Build done.")
main()