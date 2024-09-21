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
frame1 = Frame(root, width=300, height=300, bg="red")
frame1.pack(side="left", anchor="nw")

frame2 = Frame(root, width=300, height=300, bd=1, relief="solid")
frame2.pack_propagate(False)
frame2.pack(side="left", anchor="n")

col1 = Label(frame2, text="col1")
col1.pack(side="left", anchor="nw")

col2 = Label(frame2, text="col2")
col2.pack(anchor="w")

# textbox = Text(frame2, width=290//8)
# textbox.pack(side="left")


# Chạy
print("Run build")
root.mainloop()