import os
import tkinter as tkt

os.system("cls")

root = tkt.Tk()
root.title("RSA")

window_width = 900
window_height = 500
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

root.geometry(f"{window_width}x{window_height}+{x}+{y}")

root.mainloop()