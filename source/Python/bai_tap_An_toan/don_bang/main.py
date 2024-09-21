# import os, tkinter as tkt
# from tkinter import ttk

# # variables
# root = tkt.Tk()
# window_width = 1220
# window_height = 700
# screen_width = root.winfo_screenwidth()
# screen_height = root.winfo_screenheight()

# #--------------------------------------
# # Hàm UI
# # Thiết lập màn hình
# def setupUI():
#   x = (screen_width // 2) - (window_width // 2)
#   y = (screen_height // 2) - (window_height // 2)
#   root.geometry(f"{window_width}x{window_height}+{x}+{y}")
#   root.title("Phá mã Mã hoá đơn bảng")

# def buildFrame():
#   obj = tkt.Frame(
#     root,
#     width=window_width * 6/10,
#     height=window_height,
#   )
#   return obj

# def buildFrameText(frame: tkt.Tk):
#   obj = tkt.Frame(
#     frame,
#     width=window_width * 6/10 + 100,
#   )
#   return obj

# def buildButton(frBtn: tkt.Frame, text: str, cmd):
#   obj = tkt.Button(
#     frBtn,
#     text = text,
#     width=10,
#     relief="ridge",
#     font=("bold", 12),
#     command=cmd
#   )
#   return obj

# def buildTextbox(frame: tkt.Tk, edit: bool):
#   obj = tkt.Text(
#     frame,
#     state= ("normal" if edit else "disabled"),
#     height=20,
#     relief="groove"
#   )
#   return obj

# def buildTreeView(frame: tkt.Tk, widthcol: int):
#   tree = ttk.Treeview(frame, columns=("chu", "tanSo", "thay"), show="headings")

#   tree.heading("chu", text="Chữ")
#   tree.heading("tanSo", text="Tần số")
#   tree.heading("thay", text="Thay")

#   tree.column("chu", anchor="center", width=widthcol)
#   tree.column("tanSo", anchor="center", width=widthcol)
#   tree.column("thay", anchor="center", width=widthcol)

#   return tree





# #-------------------------------------
# # Hàm xử lý chương trình khi tương tác
# # Bôi màu cùng nhau
# def boiMau(event=None):
#   textboxInput.tag_remove("highlight", "1.0", "end")

#   try:
#     start = textboxOutput.index("sel.first")
#     end = textboxOutput.index("sel.last")

#     start_line, start_char = map(int, start.split("."))
#     end_line, end_char = map(int, end.split("."))

#     textboxInput.tag_add("highlight", f"{start_line}.{start_char}", f"{end_line}.{end_char}")
#   except tkinter.TclError:
#     pass

# # Quét 1 ký tự
# def quetMotKyTu(text: str):
#   dictSave = {}
#   setText = set(text)
#   for t in setText:
#     if t != ' ':
#       count = text.count(t)
#       dictSave[t] = count

#   return dictSave

# # Quét 2 ký tự
# def quetHaiKyTu(text: str):
#   text = text.replace(' ', '')
#   dictSave = {}

#   for i in range(len(text)-1):
#     char = text[i] + text[i+1]
#     count = text.count(char)
#     dictSave[char] = count

#   return dictSave

# # Quét 3 ký tự
# def quetBaKyTu(text: str):
#   text = text.replace(' ', '')
#   dictSave = {}

#   for i in range(len(text)-2):
#     char = text[i] + text[i+1] + text[i+2]
#     count = text.count(char)
#     dictSave[char] = count

#   return dictSave

# def showData(dictSave: dict, treeData: ttk.Treeview):
#   dictSave = dict(sorted(dictSave.items(), key= lambda item: item[1], reverse=True))
#   char = list(dictSave.keys())
#   number = list(dictSave.values())

#   for row in treeData.get_children():
#     treeData.delete(row)

#   for i in range(len(char)):
#     treeData.insert("", "end", values=(char[i], number[i], ""))

# # Thống kê ký tự trong input
# def thongKe():
#   # Lấy và hiện nội dung giải mã ra output
#   content = textboxInput.get("1.0", "end-1c")
#   textboxOutput.delete("1.0", "end")
#   textboxOutput.insert("1.0", content)

#   dictTemp = quetMotKyTu(content)
#   showData(dictSave=dictTemp, treeData=table1KyTu)

#   dictTemp = quetHaiKyTu(content)
#   showData(dictSave=dictTemp, treeData=table2KyTu)

#   dictTemp = quetBaKyTu(content)
#   showData(dictSave=dictTemp, treeData=table3KyTu)

# # Sửa dữ liệu của ô trong bảng treeview
# def edit_cell(event):
#   item_id = tree.selection()[0]
#   column = tree.identify_column(event.x)

#   if column == '#3':  # Chỉ cho phép chỉnh sửa cột c
#       # Lấy giá trị hiện tại của ô
#       current_value = tree.item(item_id, 'values')[2]
      
#       # Xóa tất cả các ô nhập hiện tại nếu có
#       for widget in tree.winfo_children():
#           if isinstance(widget, tk.Entry):
#               widget.destroy()

#       # Lấy vị trí của ô cần chỉnh sửa
#       x, y, width, height = tree.bbox(item_id, column)
      
#       # Tạo một ô nhập liệu mới và đặt tại vị trí của ô
#       entry_edit = tk.Entry(tree)
#       entry_edit.place(x=x, y=y, width=width, height=height)
#       entry_edit.insert(0, current_value)
#       entry_edit.focus()

#       # Xử lý khi nhấn Enter để lưu giá trị mới
#       def on_enter(event):
#           new_value = entry_edit.get()
#           tree.item(item_id, values=(tree.item(item_id, 'values')[0], tree.item(item_id, 'values')[1], new_value))
#           entry_edit.destroy()

#       # Gán sự kiện Enter cho ô nhập
#       entry_edit.bind('<Return>', on_enter)


# # Giải mã
# def giaiMa():
#   # Lấy nội dung cần giải
#   content = textboxInput.get("1.0", "end-1c")

#   # Xử lý 1 ký tự
#   for row in table1KyTu.get_children():
#     if row[2] != ' ':
#       content.replace(row[0], row[2])

#   # Xử lý 2 ký tự


#   # Xử lý 3 ký tự

#   # Hiển thị ra chỗ output
#   textboxOutput.delete("1.0", "end")
#   textboxOutput.insert("1.0", content)

# #----------------------
# # Nơi chạy chương trình
# setupUI()

# # frame left
# frameLeft = buildFrame()
# frameLeft.pack_propagate(False)
# frameLeft.pack(side="left")

# # frame textbox nhập liệu
# frameTextInput = buildFrameText(frameLeft)
# frameTextInput.pack(padx=10, pady=10, anchor="nw", fill="x")

# # tạo textbox để nhập
# textboxInput = buildTextbox(frame=frameTextInput, edit=True)
# textboxInput.pack(fill="x")

# # frame button
# frameButton = tkt.Frame(
#   frameLeft,
#   width=window_width * 6/10,
#   height=50,
# )
# frameButton.pack(padx=(10, 10), anchor="w", fill="x")

# btn_thongKe = buildButton(frBtn=frameButton, text="Thống kê", cmd=thongKe)
# btn_thongKe.pack(side="left", padx=(100, 0))

# btn_giaiMa = buildButton(frBtn=frameButton, text="Phá mã", cmd=giaiMa)
# btn_giaiMa.pack(side="right", padx=(0, 100))

# # frame textbox xuất
# frameTextOutput = buildFrameText(frameLeft)
# frameTextOutput.pack(padx=10, pady=10, anchor="w", fill="x")

# # tạo textbox để nhập
# textboxOutput = buildTextbox(frame=frameTextOutput, edit=True)
# textboxOutput.pack(fill="x")

# #----
# # frame right
# frameRight = buildFrame()
# frameRight.pack_propagate(False)
# frameRight.pack(side="left")

# # Bảng 26 ký tự
# table1KyTu = buildTreeView(frame=frameRight, widthcol=50)
# table1KyTu.pack(side="left", anchor="nw", pady=10, padx=(10, 0), fill="y")

# # Bảng tìm 2 ký tự trở lên
# table2KyTu = buildTreeView(frame=frameRight, widthcol=50)
# table2KyTu.pack(side="left", anchor="nw", pady=10, padx=(5, 0), fill="y")

# # Bảng tìm 3 ký tự trở lên
# table3KyTu = buildTreeView(frame=frameRight, widthcol=50)
# table3KyTu.pack(side="left", anchor="nw", pady=10, padx=(5, 10), fill="y")


# #-----------------
# textboxInput.tag_configure("highlight", background="cornflowerblue")
# textboxOutput.bind("<<Selection>>", boiMau)

# dictOneText = {}
# dictTwoText = {}
# dictThreeText = {}

# thongKe()

# os.system("cls")
# print("Build done")
# root.mainloop()