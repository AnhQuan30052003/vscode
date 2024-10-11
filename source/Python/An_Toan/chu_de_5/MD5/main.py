import os
import tkinter as tkt
from tkinter import filedialog as fd, messagebox
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP



# setup UI
root = tkt.Tk()
root.title("File MD5")

window_width = 600
window_height = 200
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

root.geometry(f"{window_width}x{window_height}+{x}+{y}")


# run
os.system("cls")
print("Run successfully")
root.mainloop()
print("End run")