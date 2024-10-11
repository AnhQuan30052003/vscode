import os
import tkinter as tkt
from tkinter import filedialog as fd, messagebox
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP

os.system("cls")

# key = RSA.generate(4096)
de = ""
en = ""
privateKey = ""
publicKey = ""

def chooseTypeFileToRead(path: str):
  textExtensions = ['.txt', '.csv', '.json', '.xml', '.html']
  _, extension = os.path.splitext(path)
  return ["r", "w"] if extension in textExtensions else ["rb", "wb"]

def crypto(pathRead: str, pathWrite: str, decryto: bool=False):
  modeR, modeW = chooseTypeFileToRead(pathRead)

  content = []
  with open(pathRead, modeR) as file:
    for line in file:
      content.append(line)

  with open(pathWrite, modeW) as file:
    for text in content:
      if decryto:
        if modeR == "r":
          text = bytes.fromhex(text)
          data = RSA_crypto(text, decrytion=True).decode()
        else:
          data = RSA_crypto(text, decrytion=True)

        file.write(data)
      
      else:
        if modeR == "r":
          text = text.encode()
          data = RSA_crypto(text).hex()
          file.write(data)
          file.write("\n")

        else:
          data = RSA_crypto(text)
          file.write(data)
          file.write("\n".encode())

def RSA_crypto(message: bytes, decrytion: bool=False):
  if decrytion:
    text = de.decrypt(message)

  else:
    text = en.encrypt(message)

  return text

def writeKey(path: str):
  with open(path, "w") as file:
    file.write(privateKey.decode())
    file.write("\n\n")
    file.write(publicKey.decode())

# Nạp khoá
def getKey(path: str):
  global privateKey, publicKey, de, en
  with open(path, "r") as file:
    key = file.read().split("\n\n")
    privateKey = key[0].encode()
    publicKey = key[1].encode()
  
  de = PKCS1_OAEP.new(RSA.import_key(privateKey))
  en = PKCS1_OAEP.new(RSA.import_key(publicKey))

# main
fileName = "key.txt"
pathCurrent = os.path.abspath(os.path.dirname(__file__))
path = os.path.join(pathCurrent, fileName)
getKey(path)

# fileName = "md5.jpg"
fileName = "a.txt"
path = os.path.join(pathCurrent, fileName)

# data = []
# with open(path, "r") as file:
#   for line in file:
#     data.append(line)

# fileName = "a.txt"
# fileName = ""
# path = os.path.join(pathCurrent, fileName)

content = "a"
content = content.encode()
content = RSA_crypto(content).hex()
print(len(content))