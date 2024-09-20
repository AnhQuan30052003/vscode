import os
from ui import *

os.system("cls")
print("Build done")

setupUI()

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
