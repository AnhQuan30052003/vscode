import os
from ui import *

os.system("cls")
print("Build done")

setupUI()

# frame left
frameLeft = buildFrame()
frameLeft.pack_propagate(False)
frameLeft.pack(side="left")
frameLeft.config(relief="solid", bd=1)

# frame textbox nhập liệu
frameTextInput = buildFrameText(frameLeft)
frameTextInput.pack(padx=10, pady=10, anchor="nw")
frameTextInput.config(relief="solid", bd=1)

# tạo textbox để nhập
textboxInput = buildTextbox(frame=frameTextInput, edit=True)
textboxInput.config(relief="solid", bd=1)
textboxInput.pack(fill="x", expand=True)

# frame button
frameButton = tkt.Frame(
  frameLeft,
  width=window_width * 6/10,
  height=50,
)
frameButton.config(relief="solid", bd=1)
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

root.mainloop()