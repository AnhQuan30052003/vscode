import os
import tkinter as tkt
from tkinter import filedialog as fd
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP



# setup UI
root = tkt.Tk()
root.title("RSA")

window_width = 800
window_height = 400
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

root.geometry(f"{window_width}x{window_height}+{x}+{y}")

# setup RSA
key = RSA.generate(2048)
privateKey = ""
publicKey = ""




# Funcions
# Thêm nôi dung text vào input
def loadText(input: tkt.Text, text: str):
  input.delete(1.0, tkt.END)
  input.insert(tkt.END, text)

# Tạo khoá ngẫu nhiên
def generateKey():
  global key, privateKey, publicKey
  privateKey = key.export_key()
  publicKey = key.export_key()
  loadText(inputPrivateKey, privateKey.hex())
  loadText(inputPublicKey, publicKey.hex())

# Hàm mã hoá - giả mã
def crypto(path: str, decryto: bool=False):
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

# Chọn mã hoá hay giải mã
def RSA_crypto(message: bytes, decrytion: bool=False):
  if decrytion:
    cipher_rsa = PKCS1_OAEP.new(RSA.import_key(privateKey))
    text = cipher_rsa.decrypt(message)

  else:
    cipher_rsa = PKCS1_OAEP.new(RSA.import_key(publicKey))
    text = cipher_rsa.encrypt(message)

  return text

def writeKey(fileName: str):
  getPathCur = os.path.abspath(os.path.dirname(__file__))
  path = os.path.join(getPathCur, fileName)
  
  with open(path, "w") as file:
    file.write(privateKey.decode())
    file.write("\n\n")
    file.write(publicKey.decode())

# Nạp khoá
def getKey(path: str):
  global privateKey, publicKey
  with open(path, "r") as file:
    key = file.read().split("\n\n")
    privateKey = key[0].encode()
    publicKey = key[1].encode()
  
  loadText(inputPrivateKey, privateKey.hex())
  loadText(inputPublicKey, publicKey.hex())



# UI
# title 
frameLable = tkt.Frame(root, width=window_width, height=30)
frameLable.pack_propagate(False)
frameLable.pack(pady=(20, 20), fill="x")

textTile = tkt.Label(frameLable, text="Thông tin khoá RSA", font=("", 16, "bold"))
textTile.pack(padx=10, side="left")

# style
styleLabel = {
  "font": ("", 13),
  "width": 13,
  "anchor": "w",
}

styleButton = {
  "width": 7,
  "font": 8,
  "relief": "groove",
}

styleButtonDistance = {
  "padx": (10, 0)
}

styleFrame = {
  "fill": "x",
}

# frame text
frameText1 = tkt.Frame(root, width=window_width, height=30)
frameText1.pack_propagate(False)
frameText1.pack(padx=10, pady=5, **styleFrame)

labelPrivateKey = tkt.Label(frameText1, text="Khoá riêng", **styleLabel)
labelPrivateKey.pack(side="left")

inputPrivateKey = tkt.Text(frameText1, width=window_width, wrap="none")
inputPrivateKey.pack(side="left", padx=(10, 0))

frameText2 = tkt.Frame(root, width=window_width, height=30)
frameText2.pack_propagate(False)
frameText2.pack(padx=10, pady=5, **styleFrame)

labelPublicKey = tkt.Label(frameText2, text="Khoá công khai", **styleLabel)
labelPublicKey.pack(side="left", anchor="e")

inputPublicKey = tkt.Text(frameText2, width=window_width, wrap="none")
inputPublicKey.pack(side="left", padx=(10, 0))

# frame button
frameButton = tkt.Frame(root, width=window_width, height=40)
frameButton.pack_propagate(False)
frameButton.pack(padx=10, pady=10, **styleFrame)

btnSinh = tkt.Button(frameButton, text="Sinh", ** styleButton)
btnSinh.pack(side="right", **styleButtonDistance)

btnLuu = tkt.Button(frameButton, text="Lưu", ** styleButton)
btnLuu.pack(side="right", **styleButtonDistance)

btnNap = tkt.Button(frameButton, text="Nạp", ** styleButton)
btnNap.pack(side="right", **styleButtonDistance)

# frame file
frameFile1 = tkt.Frame(root, width=window_width, height=30)
frameFile1.pack_propagate(False)
frameFile1.pack(padx=10, pady=5, **styleFrame)

tkt.Label(frameFile1, text="File ban đầu", **styleLabel).pack(side="left")

inputFleBanDau = tkt.Text(frameFile1, wrap="none", width=0)
inputFleBanDau.pack(side="left", padx=(10, 0), fill="x", expand=True)

btnBanDau = tkt.Button(frameFile1, text="Chọn", **styleButton)
btnBanDau.pack(side="right", **styleButtonDistance)

frameFile2 = tkt.Frame(root, width=window_width, height=30)
frameFile2.pack_propagate(False)
frameFile2.pack(padx=10, pady=5, **styleFrame)

tkt.Label(frameFile2, text="File mã hoá", **styleLabel).pack(side="left")

inputFleMaHoa = tkt.Text(frameFile2, wrap="none", width=0)
inputFleMaHoa.pack(side="left", padx=(10, 0), fill="x", expand=True)

btnMaHoa = tkt.Button(frameFile2, text="Chọn", **styleButton)
btnMaHoa.pack(side="right", **styleButtonDistance)

frameFile3 = tkt.Frame(root, width=window_width, height=30)
frameFile3.pack_propagate(False)
frameFile3.pack(padx=10, pady=5, **styleFrame)

tkt.Label(frameFile3, text="File giải mã", **styleLabel).pack(side="left")

inputFileGiaiMa = tkt.Text(frameFile3, wrap="none", width=0)
inputFileGiaiMa.pack(side="left", padx=(10, 0), fill="x", expand=True)

btnGiaiMa = tkt.Button(frameFile3, text="Chọn", **styleButton)
btnGiaiMa.pack(side="right", **styleButtonDistance)

# button option
frameButtonOption = tkt.Frame(root, width=window_width, height=50)
frameButtonOption.pack_propagate(False)
frameButtonOption.pack(pady=10, **styleFrame)

frameLeft = tkt.Frame(frameButtonOption, width=window_width//2, height=50)
frameLeft.pack_propagate(False)
frameLeft.pack(side="left", **styleFrame, expand=True)

btnOptionMaHoa = tkt.Button(frameLeft, text="Mã hoá", **styleButton)
btnOptionMaHoa.config(width=20)
btnOptionMaHoa.pack(side="right", padx=(0, 10))

frameRight = tkt.Frame(frameButtonOption, width=window_width//2, height=50)
frameRight.pack_propagate(False)
frameRight.pack(side="left", **styleFrame, expand=True)

btnOptionGiaiMa = tkt.Button(frameRight, text="Giải mã", **styleButton)
btnOptionGiaiMa.config(width=20)
btnOptionGiaiMa.pack(side="left", padx=(10, 0))

# def select_file():
#   file_path = fd.askopenfilename()
#   if file_path:
#     print("Đường dẫn file đã chọn:", file_path)

# button = tkt.Button(root, text="Chọn file", command=select_file)
# button.pack(pady=20)

# run
os.system("cls")
root.mainloop()
print("Build done")