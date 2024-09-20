import tkinter as tkt
from tkinter import ttk

# variables
root = tkt.Tk()
window_width = 1300
window_height = 700
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

def setupUI():
  x = (screen_width // 2) - (window_width // 2)
  y = (screen_height // 2) - (window_height // 2)
  root.geometry(f"{window_width}x{window_height}+{x}+{y}")
  root.title("Phá mã Mã hoá đơn bảng")

def buildFrame():
  obj = tkt.Frame(
    root,
    width=window_width * 1/2,
    height=window_height,
  )
  return obj

def buildFrameText(frame: tkt.Tk):
  obj = tkt.Frame(
    frame,
    width=window_width * 1 / 2,
  )
  return obj

def buildButton(frBtn: tkt.Frame, text: str):
  obj = tkt.Button(
    frBtn,
    text = text,
    width=10,
    relief="ridge",
    font=("bold", 12)
  )
  return obj

def buildTextbox(frame: tkt.Tk, edit: bool):
  obj = tkt.Text(
    frame,
    state= ("normal" if edit else "disabled"),
    height=20
  )
  return obj

def buildTreeView(frame: tkt.Tk):
  tree = ttk.Treeview(frame, columns=("chu", "tanSo", "thay"), show="headings")

  tree.heading("chu", text="Chữ")
  tree.heading("tanSo", text="Tần số")
  tree.heading("thay", text="Thay")

  minWidth = 5
  tree.column("chu", anchor="center", width=minWidth)
  tree.column("tanSo", anchor="center", width=minWidth)
  tree.column("thay", anchor="center", width=minWidth)

  return tree