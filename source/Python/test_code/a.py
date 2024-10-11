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

# content = "nguyen anh quan"
size = 1024
# 9421937eba966a627ed0b3ccd62d96e9f3642790677e706dc8a2eeaf29f71f8c0774257664dd62b5970f2ea6f0c859cf8ba8f6a881bd6c7f890e4337ed3b018cad7c8c99ba614a660c1d7523bc30b9ae7d0609e2fd929b32f725dad386645637996474277359b6e7e70f03ffaf87fee5ce541e3096712d915a7cd4bc41c5fb93f179507982ef06dd07fc1e5aa0cf5284efe18d1849e17d913e86ca4905d47d5b030112bcb6397d5dfda1582fc747697843a3db91794b8981a5422030f505b0420f11eb42ae1d33a3ba79e7c8e258b9ac2e9fe80eb9a63fa6da2df023e66bcec9ae459bb23362d2ee34c73f25ae9c76ab93d62fc4e623df3829eebb39427aa49a8503452a74a556a40b83997ca06a84f2339b1a14fe9da7b591f541e347704a698baad1a181a8e7a2ecdc38b3439416f0c122e04d4ed36289abcf3e1bafa40c690a94518edcdc8b5241d4c474c2e15d321193a9d704a51132a75045e8418bc7101558f204152f1e716c3bdec79cb8df85380caa37c79c1e165a6fb7710921aebac10e46f2b39175e3134958d443c760922342dc32c8e35f3d0b7fed6d3b4a7bf51837dbf141ad43eeac38e2a235d2242a67176a8925d635cb2731cb8759852925ae733bebce9bb975a24308580933364b8cf676518a0d3f8abfc728f375c6aff9cccb44666e6ec2b5eeff4279244e753cfc401994422564d3c27b5ec52429b2a4
content = "9421937eba966a627ed0b3ccd62d96e9f3642790677e706dc8a2eeaf29f71f8c0774257664dd62b5970f2ea6f0c859cf8ba8f6a881bd6c7f890e4337ed3b018cad7c8c99ba614a660c1d7523bc30b9ae7d0609e2fd929b32f725dad386645637996474277359b6e7e70f03ffaf87fee5ce541e3096712d915a7cd4bc41c5fb93f179507982ef06dd07fc1e5aa0cf5284efe18d1849e17d913e86ca4905d47d5b030112bcb6397d5dfda1582fc747697843a3db91794b8981a5422030f505b0420f11eb42ae1d33a3ba79e7c8e258b9ac2e9fe80eb9a63fa6da2df023e66bcec9ae459bb23362d2ee34c73f25ae9c76ab93d62fc4e623df3829eebb39427aa49a8503452a74a556a40b83997ca06a84f2339b1a14fe9da7b591f541e347704a698baad1a181a8e7a2ecdc38b3439416f0c122e04d4ed36289abcf3e1bafa40c690a94518edcdc8b5241d4c474c2e15d321193a9d704a51132a75045e8418bc7101558f204152f1e716c3bdec79cb8df85380caa37c79c1e165a6fb7710921aebac10e46f2b39175e3134958d443c760922342dc32c8e35f3d0b7fed6d3b4a7bf51837dbf141ad43eeac38e2a235d2242a67176a8925d635cb2731cb8759852925ae733bebce9bb975a24308580933364b8cf676518a0d3f8abfc728f375c6aff9cccb44666e6ec2b5eeff4279244e753cfc401994422564d3c27b5ec52429b2a49421937eba966a627ed0b3ccd62d96e9f3642790677e706dc8a2eeaf29f71f8c0774257664dd62b5970f2ea6f0c859cf8ba8f6a881bd6c7f890e4337ed3b018cad7c8c99ba614a660c1d7523bc30b9ae7d0609e2fd929b32f725dad386645637996474277359b6e7e70f03ffaf87fee5ce541e3096712d915a7cd4bc41c5fb93f179507982ef06dd07fc1e5aa0cf5284efe18d1849e17d913e86ca4905d47d5b030112bcb6397d5dfda1582fc747697843a3db91794b8981a5422030f505b0420f11eb42ae1d33a3ba79e7c8e258b9ac2e9fe80eb9a63fa6da2df023e66bcec9ae459bb23362d2ee34c73f25ae9c76ab93d62fc4e623df3829eebb39427aa49a8503452a74a556a40b83997ca06a84f2339b1a14fe9da7b591f541e347704a698baad1a181a8e7a2ecdc38b3439416f0c122e04d4ed36289abcf3e1bafa40c690a94518edcdc8b5241d4c474c2e15d321193a9d704a51132a75045e8418bc7101558f204152f1e716c3bdec79cb8df85380caa37c79c1e165a6fb7710921aebac10e46f2b39175e3134958d443c760922342dc32c8e35f3d0b7fed6d3b4a7bf51837dbf141ad43eeac38e2a235d2242a67176a8925d635cb2731cb8759852925ae733bebce9bb975a24308580933364b8cf676518a0d3f8abfc728f375c6aff9cccb44666e6ec2b5eeff4279244e753cfc401994422564d3c27b5ec52429b2a4"

# content = bytes.fromhex(content)
# content = content.encode()
# content = RSA_crypto(content).hex()
# content = RSA_crypto(content, decrytion=True).decode()
# print(len(content))
# print(content)


print(content[0:size])