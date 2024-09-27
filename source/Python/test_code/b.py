import tkinter as tk
from tkinter import ttk

# Tạo cửa sổ chính
root = tk.Tk()
root.title("ComboBox Example")

# Tạo nhãn hướng dẫn
label = ttk.Label(root, text="Chọn một mục:")
label.pack(padx=10, pady=10)

# Tạo một ComboBox
combo_box = ttk.Combobox(root, values=["Lựa chọn 1", "Lựa chọn 2", "Lựa chọn 3", "Lựa chọn 4"])
combo_box.pack(padx=10, pady=10)

# Thiết lập giá trị mặc định
combo_box.set("Lựa chọn 1")  # Hiển thị giá trị mặc định

# Hàm xử lý sự kiện khi chọn một mục trong ComboBox
def on_select(event):
    selected_value = combo_box.get()  # Lấy giá trị đã chọn
    print("Giá trị đã chọn là:", selected_value)

# Gán sự kiện khi có thay đổi giá trị trong ComboBox
combo_box.bind("<<ComboboxSelected>>", on_select)

# Hiển thị giao diện
root.mainloop()
