import os
import tkinter as tkt

# variables
root = tkt.Tk()
window_width = 1300
window_height = 700
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

def main():
  os.system("cls")
  print("Build done")

  setup()

  # frame left
  frameLeft = buildFrame()
  frameLeft.pack(side="left")

  # frame textbox nhập liệu
  frameTextInput = buildFrameText(frameLeft)
  frameTextInput.pack(padx=10, pady=10, anchor="nw")

  # tạo textbox để nhập
  textboxInput = buildTextbox(frame=frameTextInput, edit=True)
  textboxInput.pack()
  
  # frame button
  frameButton = tkt.Frame(
    frameLeft,
    width=window_width * 1 / 2,
    height=50,
  )
  frameButton.pack(padx=(10, 10), anchor="w", fill="x")

  btn_thongKe = buildButton(frBtn=frameButton, text="Thống kê")
  btn_thongKe.pack(side="left", padx=(100, 0))

  btn_giaiMa = buildButton(frBtn=frameButton, text="Phá mã")
  btn_giaiMa.pack(side="right", padx=(0, 100))

  # frame textbox xuất
  frameTextOutput = buildFrameText(frameLeft)
  frameTextOutput.pack(padx=10, pady=10, anchor="w")

  # tạo textbox để nhập
  textboxOutput = buildTextbox(frame=frameTextOutput, edit=False)
  textboxOutput.pack(fill="both")

  #----
  # frame right
  frameRight = buildFrame()
  frameRight.pack(side="right")

  root.mainloop()

def setup():
  x = (screen_width // 2) - (window_width // 2)
  y = (screen_height // 2) - (window_height // 2)
  root.geometry(f"{window_width}x{window_height}+{x}+{y}")
  root.title("Phá mã Mã hoá đơn bảng")

def buildFrame():
  obj = tkt.Frame(
    root,
    width=window_width * 1/2,
    # height=window_height,
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

main()