import os
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP

def main():
  os.system("cls")
  fileName = "a.txt"
  path = os.path.join(os.path.abspath(os.path.dirname(__file__)), fileName)

  privateKey, publicKey = getKey("text.txt")
  crypto(path, privateKey, publicKey, decryto=True)

  print("Build")

def crypto(path: str, privateKey: bytes, publicKey: bytes, decryto: bool=False):
  content = []
  with open(path, "r") as file:
    for line in file:
      content.append(line)

  with open(path, "w") as file:
    for text in content:
      if decryto:
        text = bytes.fromhex(text)
        data = RSA_crypto(privateKey, publicKey, text, decrytion=True).decode()
        file.write(data)
      
      else:
        text = text.encode()
        data = RSA_crypto(privateKey, publicKey, text).hex()
        file.write(data)
        file.write("\n")

def RSA_crypto(privateKey: bytes, publicKey: bytes, message: bytes, decrytion: bool=False):
  if decrytion:
    cipher_rsa = PKCS1_OAEP.new(RSA.import_key(privateKey))
    text = cipher_rsa.decrypt(message)

  else:
    cipher_rsa = PKCS1_OAEP.new(RSA.import_key(publicKey))
    text = cipher_rsa.encrypt(message)

  return text

def writeKey(fileName: str, privateKey: bytes, publicKey: bytes):
  getPathCur = os.path.abspath(os.path.dirname(__file__))
  path = os.path.join(getPathCur, fileName)
  
  with open(path, "w") as file:
    file.write(privateKey.decode())
    file.write("\n\n")
    file.write(publicKey.decode())

def getKey(fileName: str):
  getPathCur = os.path.abspath(os.path.dirname(__file__))
  path = os.path.join(getPathCur, fileName)

  with open(path, "r") as file:
    key = file.read().split("\n\n")
    privateKey = key[0].encode()
    publicKey = key[1].encode()

  return privateKey, publicKey

main()