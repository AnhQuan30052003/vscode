import os, hashlib
import tkinter as tkt
from tkinter import filedialog as fd, messagebox
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP



# setup UI
root = tkt.Tk()
root.title("File MD5")

window_width = 600
window_height = 150
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

root.geometry(f"{window_width}x{window_height}+{x}+{y}")
root.resizable(False, False)


# Functions
def openFile():
  path = fd.askopenfilename()
  if len(path) == 0:
    return
  
  md5 = calculate_md5(path).upper()
  
  loadText(inputText, path)
  loadText(outputText, md5, clock=True)

# Thêm nôi dung text vào input
def loadText(input: tkt.Text, text: str, clock: bool=False):
  if clock:
    input.config(state="normal")

  input.delete(1.0, tkt.END)
  input.insert(tkt.END, text)

  if clock:
    input.config(state="disabled")

def calculate_md5(file_path):
  md5_hash = hashlib.md5()

  with open(file_path, "rb") as f:
    for block in iter(lambda: f.read(4096), b""):
      md5_hash.update(block)

  return md5_hash.hexdigest()


# UI
styleText = {
  "width": 50,
  "wrap": "none",
}

styleTextPack = {
  "side": "left",
  "padx": 10,
}

styleLabel = {
  "font": ("Arial", 12),
  "width": 8,
  "anchor": "w",
}

styleFrame = {
  "padx": 30,
}

distanceY = 30

# tren
frameinput = tkt.Frame(root, width=window_width, height=30)
frameinput.pack_propagate(False)
frameinput.pack(**styleFrame, pady=(distanceY, 5))

tkt.Label(frameinput, text="Chọn file", **styleLabel).pack(side="left")
inputText = tkt.Text(frameinput, **styleText)
inputText.pack(**styleTextPack)
buttonChoose = tkt.Button(frameinput, text="...", padx=3, width=4, command=openFile)
buttonChoose.pack(side="left")

# duoi
frameOutput = tkt.Frame(root, width=window_width, height=30)
frameOutput.pack_propagate(False)
frameOutput.pack(**styleFrame, pady=(5, distanceY))

tkt.Label(frameOutput, text="MD5", **styleLabel).pack(side="left")
outputText = tkt.Text(frameOutput, **styleText, state="disabled", bg="snow2")
outputText.pack(**styleTextPack)


# run
os.system("cls")
print("Run successfully")
root.mainloop()
print("End run")