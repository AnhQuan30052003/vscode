# HƯỚNG DẪN DÙNG:
# "double-click" vào ô trong cột "thay" cho việc nhập ký tự cần thay
# Enter (để xác nhận) và Esc (để huỷ nhập)
# Để dể phá mã hơn thì có thể bỏ comment dòng 227 và comment lại dòng 226


import os, tkinter as tkt
from tkinter import ttk, messagebox

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
    height=14,
    relief="groove",
    font=('times new romain', 15, 'normal')
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
  except tkt.TclError:
    pass

# Quét 1 ký tự
def quetMotKyTu(text: str):
  dictSave = {}
  text = text.replace(' ', '')
  setText = set(text)
  setText.remove('\n') if '\n' in setText else None

  for t in setText:
    count = text.count(t)
    dictSave[t] = count

  return dictSave

# Quét 2-3 ký tự
def quetHaiDenBaKyTu(text: str, soKytu: int):
  text = text.replace(' ', '')
  dictSave = {}

  for i in range(len(text)-(soKytu-1)):
    char = text[i:i+soKytu]
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

  dictTemp = quetMotKyTu(text=content)
  showData(dictSave=dictTemp, treeData=table1KyTu)

  dictTemp = quetHaiDenBaKyTu(text=content, soKytu=2)
  showData(dictSave=dictTemp, treeData=table2KyTu)

  dictTemp = quetHaiDenBaKyTu(text=content, soKytu=3)
  showData(dictSave=dictTemp, treeData=table3KyTu)

# Sửa dữ liệu của ô trong bảng treeview
def edit_cell(event, treeData: ttk.Treeview):
  # Xử lý khi nhấn Enter để lưu giá trị mới
  def on_esc(event):
    entryEdit.destroy()

  # Xử lý huỷ nhập khi nhân Esc
  def on_enter(event):
    newValue = entryEdit.get()
    chu = treeData.item(itemID, 'values')[0]
    tanSo = treeData.item(itemID, 'values')[1]
    thayThe = newValue
    
    sizeChu = len(chu)
    sizeThayThe = len(thayThe)

    if sizeThayThe != sizeChu and sizeThayThe > 0:
      messagebox.showerror(title="Lỗi !", message=f"Chiều dài chuỗi nhập phải là {sizeChu} ký tự")
      entryEdit.focus()
      return

    treeData.item(itemID, values=(chu, tanSo, thayThe))
    entryEdit.destroy()


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
def xuLyThayDoi(textInput: str, textOutput: str, treeData: ttk.Treeview):
  for row in treeData.get_children():
    a = list(treeData.item(row, "values"))
    text = a[2]
    size = len(text)
    if size > 0:
      listViTri = []
      chuoiCon = a[0]
      viTriHienTai = textInput.find(chuoiCon)

      while viTriHienTai != -1:
        listViTri.append(viTriHienTai)
        viTriHienTai = textInput.find(chuoiCon, viTriHienTai + 1)
      
      if len(listViTri) > 0:
        for vt in listViTri:
            textOutput = textOutput[:vt] + text + textOutput[vt + size:]

  return textOutput

# Giải mã
def phaMa():
  # Lấy nội dung cần giải
  content = textboxInput.get("1.0", "end-1c")
  text = ""
  for t in content:
    if (t < 'A' or t > 'Z') and t == '\n':
      text += "\n"
    elif t == ' ':
      text += t
    else:
      text += ' ' 
      # text += '_' # thay bằng ký tự '_' cho dễ đọc :v


  # Xử lý thay thế 3 ký tự
  text = xuLyThayDoi(textInput=content, textOutput=text, treeData=table3KyTu)

  # Xử lý thay thế 2 ký tự
  text = xuLyThayDoi(textInput=content, textOutput=text, treeData=table2KyTu)

  # Xử lý thay thế 1 ký tự
  text = xuLyThayDoi(textInput=content, textOutput=text, treeData=table1KyTu)

  # Hiển thị ra chỗ output
  textboxOutput.delete("1.0", "end")
  textboxOutput.insert("1.0", text)





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