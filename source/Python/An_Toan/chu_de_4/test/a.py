import tkinter as tk
from tkinter import filedialog

root = tk.Tk()
root.withdraw()  # Ẩn cửa sổ gốc của tkinter

# Hộp thoại lưu file mới
file_path = filedialog.asksaveasfilename(defaultextension=".txt",
                                         filetypes=[("Text files", "*.txt"), ("All files", "*.*")])

if file_path:
    # Bạn có thể ghi dữ liệu vào file tại đây
    with open(file_path, 'w') as file:
        file.write("Đây là nội dung ghi vào file mới.")

    # Thông báo cho người dùng rằng file đã được lưu thành công
    print(f"Đã lưu file vào: {file_path}")

root.mainloop()
