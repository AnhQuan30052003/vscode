import os
import tkinter as tkt
from tkinter import filedialog as fd

os.system("cls")

# setup
root = tkt.Tk()
root.title("RSA")

window_width = 900
window_height = 500
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

root.geometry(f"{window_width}x{window_height}+{x}+{y}")

# UI

def select_file():
  file_path = fd.askopenfilename()
  if file_path:
    print("Đường dẫn file đã chọn:", file_path)

button = tkt.Button(root, text="Chọn file", command=select_file)
button.pack(pady=20)

# run
root.mainloop()