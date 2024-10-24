import os
import tkinter as tkt
from tkinter import filedialog as fd, messagebox
from stegano import lsb
from PIL import Image, ImageTk



# setup
root = tkt.Tk()
root.title("Message In Photo")
window_width = 900
window_height = 600
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

root.geometry(f"{window_width}x{window_height}+{x}+{y}")
root.resizable(False, False)

pathImgLeft = ""
pathImgRight = ""



# Hàm xử lý
# Thông báo
def messageBox(title: str, message: str, info: bool=False, warning: bool=False):
  if info:
    messagebox.showinfo(title=title, message=message)

  if warning:
    messagebox.showwarning(title=title, message=message)

def encrypt():
  message = textAreaLeft.get("1.0", "end-1c")
  if len(message) == 0:
    messageBox("Cảnh báo", "Thông điệp gửi không được rỗng !", warning=True)
    return
  
  if len(pathImgLeft) == 0:
    messageBox("Cảnh báo", "Chưa chọn ảnh !", warning=True)
    return
  
  encrypt_message_in_photo(pathImgLeft, message)

def decrypt():
  if len(pathImgRight) == 0:
    messageBox("Cảnh báo", "Chưa chọn ảnh !", warning=True)
    return
  
  decrypt_message_in_photo(pathImgRight)

# Mở file và load ảnh vào khung
def open_file_left():
  global pathImgLeft
  pathTemp = open_file(imageLeft)
  if len(pathTemp) > 0:
    pathImgLeft = pathTemp

def open_file_right():
  global pathImgRight
  pathTemp = open_file(imageRight)
  if len(pathTemp) > 0:
    pathImgRight = pathTemp

# Load ảnh
def open_file(label: tkt.Label):
  path = fd.askopenfilename(filetypes=[("Image Files", "*.png")])
  if len(path) > 0:
    img = Image.open(path)
    img.thumbnail((window_width, window_height))
    imgTk = ImageTk.PhotoImage(img)
    label.config(image=imgTk)
    label.image = imgTk
    return path
  return ""
  
# Mã hoá tin nhắn vào trong ảnh
def encrypt_message_in_photo(file: str, message: str):
  message = message.encode("utf-8")
  secret = lsb.hide(file, message.decode("latin1"))
  fileImageOuput = fd.asksaveasfilename(defaultextension=".png")
  secret.save(fileImageOuput)
  messageBox("Thông báo", "Đã ẩn thông điệp.", info=True)

def decrypt_message_in_photo(file: str):
  try:
    message = lsb.reveal(file).encode("latin1").decode("utf-8")
  except:
    message = "File không có thông tin mã hoá !"
  finally:
    textAreaRight.config(state="normal")
    textAreaRight.delete("1.0", "end-1c")
    textAreaRight.insert(tkt.END, message)
    textAreaRight.config(state="disabled")

# Giao diện
styleFrame = {
  "width": window_width // 2,
  "height": window_height,
  "padx": 10,
  "pady": 10,
}

styleButton = {
  "padx": 5,
  "pady": 5,
  "width": 12,
}

# left
frameLeft = tkt.Frame(root, **styleFrame)
frameLeft.pack_propagate(False)
frameLeft.pack(side="left")

frameImage = tkt.Frame(frameLeft, width=window_width, height=window_height * 2 // 3, relief="solid", bd=1)
frameImage.pack_propagate(False)
frameImage.pack()

imageLeft = tkt.Label(frameImage, width=window_width, height=window_height)
imageLeft.pack()

frameButtonLeft = tkt.Frame(frameLeft, width=window_width, height=50)
frameButtonLeft.pack_propagate(False)
frameButtonLeft.pack(pady=5)

buttonChooseLeft = tkt.Button(frameButtonLeft, text="Chọn", **styleButton, command=open_file_left)
buttonChooseLeft.pack(side="left", padx=(120, 5))

buttonEncryptLeft = tkt.Button(frameButtonLeft, text="Ẩn thông điệp", **styleButton, command=encrypt)
buttonEncryptLeft.pack(side="left", padx=5)

frameText = tkt.Frame(frameLeft, width=window_width, height=120)
frameText.pack_propagate(False)
frameText.pack()

textAreaLeft = tkt.Text(frameText)
textAreaLeft.pack()

# right
frameRight = tkt.Frame(root, **styleFrame)
frameRight.pack_propagate(False)
frameRight.pack(side="left")

frameImage = tkt.Frame(frameRight, width=window_width, height=window_height * 2 // 3, relief="solid", bd=1)
frameImage.pack_propagate(False)
frameImage.pack()

imageRight = tkt.Label(frameImage, width=window_width, height=window_height)
imageRight.pack()

frameButtonRight = tkt.Frame(frameRight, width=window_width, height=50)
frameButtonRight.pack_propagate(False)
frameButtonRight.pack(pady=5)

buttonChooseRight = tkt.Button(frameButtonRight, text="Chọn", **styleButton, command=open_file_right)
buttonChooseRight.pack(side="left", padx=(120, 5))

buttonEncryptRight = tkt.Button(frameButtonRight, text="Hiện thông điệp", **styleButton, command=decrypt)
buttonEncryptRight.pack(side="left", padx=5)

frameText = tkt.Frame(frameRight, width=window_width, height=120)
frameText.pack_propagate(False)
frameText.pack()

textAreaRight = tkt.Text(frameText, state="disabled", bg="snow2")
textAreaRight.pack()



os.system("cls")
print("Build successfully")
root.mainloop()
print("End run.")