import os
from tkinter import *

os.system("cls")

# Khởi tạo
root = Tk()

window_width = 1000
window_height = 600

screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

root.geometry(f"{window_width}x{window_height}+{x}+{y}")
root.title("This Is Title")

# build
labelMain = Label(root, text="This is Label Main", bg="gray20", fg="white")
labelMain .pack(fill="x")

frameInfo = Frame(root, bg="red", height=30)
frameInfo.pack(fill="x")

frameInputMain = Frame(root, bg="pink")
frameInputMain.pack(fill="x")

frameInput = Frame(frameInputMain, bg="yellow", width=20, height=30)
frameInput.grid(row=0, column=0, sticky="n")

frameInput1 = Frame(frameInputMain, bg="green", width=60, height=90)
frameInput1.grid(row=0, column=1)

frameInput2 = Frame(frameInputMain, bg="gray")
frameInput2.pack()

# Chạy
print("Run build")
root.mainloop()