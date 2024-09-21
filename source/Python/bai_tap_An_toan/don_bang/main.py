import os, tkinter as tkt
from tkinter import ttk

#--------------------------------------
# Hàm UI
# Thiết lập màn hình
def setupUI():
  x = (screen_width // 2) - (window_width // 2)
  y = (screen_height // 2) - (window_height // 2)
  root.geometry(f"{window_width}x{window_height}+{x}+{y}")
  root.title("Phá mã Mã hoá đơn bảng")

def buildFrame():
  obj = tkt.Frame(
    root,
    width=window_width * 6/10,
    height=window_height,
  )
  return obj

def buildFrameText(frame: tkt.Tk):
  obj = tkt.Frame(
    frame,
    width=window_width * 6/10 + 100,
  )
  return obj

def buildButton(frBtn: tkt.Frame, text: str, cmd):
  obj = tkt.Button(
    frBtn,
    text = text,
    width=10,
    relief="ridge",
    font=("bold", 12),
    command=cmd
  )
  return obj

def buildTextbox(frame: tkt.Tk):
  obj = tkt.Text(
    frame,
    height=20,
    relief="groove"
  )
  return obj

def buildTreeView(frame: tkt.Tk, widthcol: int):
  tree = ttk.Treeview(frame, columns=("chu", "tanSo", "thay"), show="headings")

  tree.heading("chu", text="Chữ")
  tree.heading("tanSo", text="Tần số")
  tree.heading("thay", text="Thay")

  tree.column("chu", anchor="center", width=widthcol)
  tree.column("tanSo", anchor="center", width=widthcol)
  tree.column("thay", anchor="center", width=widthcol)

  return tree





#-------------------------------------
# Hàm xử lý chương trình khi tương tác
# Bôi màu cùng nhau
def boiMau(event=None):
  textboxInput.tag_remove("highlight", "1.0", "end")

  try:
    start = textboxOutput.index("sel.first")
    end = textboxOutput.index("sel.last")

    start_line, start_char = map(int, start.split("."))
    end_line, end_char = map(int, end.split("."))

    textboxInput.tag_add("highlight", f"{start_line}.{start_char}", f"{end_line}.{end_char}")
  except tkinter.TclError:
    pass

# Quét 1 ký tự
def quetMotKyTu(text: str):
  dictSave = {}
  setText = set(text)
  for t in setText:
    if t != ' ':
      count = text.count(t)
      dictSave[t] = count

  return dictSave

# Quét 2 ký tự
def quetHaiKyTu(text: str):
  text = text.replace(' ', '')
  dictSave = {}

  for i in range(len(text)-1):
    char = text[i] + text[i+1]
    count = text.count(char)
    dictSave[char] = count

  return dictSave

# Quét 3 ký tự
def quetBaKyTu(text: str):
  text = text.replace(' ', '')
  dictSave = {}

  for i in range(len(text)-2):
    char = text[i] + text[i+1] + text[i+2]
    count = text.count(char)
    dictSave[char] = count

  return dictSave

def showData(dictSave: dict, treeData: ttk.Treeview):
  dictSave = dict(sorted(dictSave.items(), key= lambda item: item[1], reverse=True))
  char = list(dictSave.keys())
  number = list(dictSave.values())

  for row in treeData.get_children():
    treeData.delete(row)

  for i in range(len(char)):
    treeData.insert("", "end", values=(char[i], number[i], ""))

# Thống kê ký tự trong input
def thongKe():
  # Lấy và hiện nội dung giải mã ra output
  content = textboxInput.get("1.0", "end-1c")

  dictTemp = quetMotKyTu(content)
  showData(dictSave=dictTemp, treeData=table1KyTu)

  dictTemp = quetHaiKyTu(content)
  showData(dictSave=dictTemp, treeData=table2KyTu)

  dictTemp = quetBaKyTu(content)
  showData(dictSave=dictTemp, treeData=table3KyTu)

# Sửa dữ liệu của ô trong bảng treeview
def edit_cell(event, treeData: ttk.Treeview):
  global entryEdit

  itemID = treeData.selection()[0]
  column = treeData.identify_column(event.x)

  if column == '#3':
    current_value = treeData.item(itemID, 'values')[2]
    
    # Lấy vị trí của ô cần chỉnh sửa
    x, y, width, height = treeData.bbox(itemID, column)
    
    # Tạo một ô nhập liệu mới và đặt tại vị trí của ô
    entryEdit = tkt.Entry(treeData)
    entryEdit.place(x=x, y=y, width=width, height=height)
    entryEdit.insert(0, current_value)
    entryEdit.focus()

    # Xử lý khi nhấn Enter để lưu giá trị mới
    def on_esc(event):
      entryEdit.destroy()

    def on_enter(event):
      newValue = entryEdit.get()
      treeData.item(itemID, values=(treeData.item(itemID, 'values')[0], treeData.item(itemID, 'values')[1], newValue))
      entryEdit.destroy()

    # Gán sự kiện Enter cho ô nhập
    entryEdit.bind('<Escape>', on_esc)
    entryEdit.bind('<Return>', on_enter)

# Gọi sự kiện thay đổi table1kytu
def editTable1(event):
  edit_cell(event, treeData=table1KyTu)

# Gọi sự kiện thay đổi table2kytu
def editTable2(event):
  edit_cell(event, treeData=table2KyTu)

# Gọi sự kiện thay đổi table3kytu
def editTable3(event):
  edit_cell(event, treeData=table3KyTu)

# Xử lý thay đổi/chỉnh sửa
def xuLyThayDoi(text: str, treeData: ttk.Treeview):
  for row in treeData.get_children():
    a = list(treeData.item(row, "values"))
    if len(a[2]) > 0:
      text = text.replace(a[0], a[2])

  return text

# Giải mã
def phaMa():
  # Lấy nội dung cần giải
  content = textboxInput.get("1.0", "end-1c")

  # Xử lý thay thế 3 ký tự
  content = xuLyThayDoi(text=content, treeData=table3KyTu)

  # Xử lý thay thế 2 ký tự
  content = xuLyThayDoi(text=content, treeData=table2KyTu)

  # Xử lý thay thế 1 ký tự
  content = xuLyThayDoi(text=content, treeData=table1KyTu)

  # Xử lý in ra khoảng cách - ký tự chưa đuọc thay
  pass

  # Hiển thị ra chỗ output
  textboxOutput.delete("1.0", "end")
  textboxOutput.insert("1.0", content)





#----------------------
# Nơi chạy chương trình
root = tkt.Tk()
window_width = 1220
window_height = 700
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

setupUI()

# frame left
frameLeft = buildFrame()
frameLeft.pack_propagate(False)
frameLeft.pack(side="left")

# frame textbox nhập liệu
frameTextInput = buildFrameText(frameLeft)
frameTextInput.pack(padx=10, pady=10, anchor="nw", fill="x")

# tạo textbox để nhập
textboxInput = buildTextbox(frame=frameTextInput)
textboxInput.pack(fill="x")

# frame button
frameButton = tkt.Frame(
  frameLeft,
  width=window_width * 6/10,
  height=50,
)
frameButton.pack(padx=(10, 10), anchor="w", fill="x")

btn_thongKe = buildButton(frBtn=frameButton, text="Thống kê", cmd=thongKe)
btn_thongKe.pack(side="left", padx=(100, 0))

btn_phaMa = buildButton(frBtn=frameButton, text="Phá mã", cmd=phaMa)
btn_phaMa.pack(side="right", padx=(0, 100))

# frame textbox xuất
frameTextOutput = buildFrameText(frameLeft)
frameTextOutput.pack(padx=10, pady=10, anchor="w", fill="x")

# tạo textbox để nhập
textboxOutput = buildTextbox(frame=frameTextOutput)
textboxOutput.pack(fill="x")

#----
# frame right
frameRight = buildFrame()
frameRight.pack_propagate(False)
frameRight.pack(side="left")

# Bảng 26 ký tự
table1KyTu = buildTreeView(frame=frameRight, widthcol=50)
table1KyTu.pack(side="left", anchor="nw", pady=10, padx=(10, 0), fill="y")

# Bảng tìm 2 ký tự trở lên
table2KyTu = buildTreeView(frame=frameRight, widthcol=50)
table2KyTu.pack(side="left", anchor="nw", pady=10, padx=(5, 0), fill="y")

# Bảng tìm 3 ký tự trở lên
table3KyTu = buildTreeView(frame=frameRight, widthcol=50)
table3KyTu.pack(side="left", anchor="nw", pady=10, padx=(5, 10), fill="y")


#-----------------
textboxInput.tag_configure("highlight", background="cornflowerblue")
textboxOutput.bind("<<Selection>>", boiMau)

table1KyTu.bind("<Double-1>", editTable1)
table2KyTu.bind("<Double-1>", editTable2)
table3KyTu.bind("<Double-1>", editTable3)

dictOneText = {}
dictTwoText = {}
dictThreeText = {}

os.system("cls")
print("Build done")
root.mainloop()