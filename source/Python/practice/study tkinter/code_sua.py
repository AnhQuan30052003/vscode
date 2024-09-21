import tkinter as tk
from tkinter import ttk

# Tạo một danh sách các dữ liệu mẫu
data = [
    [1, 'Name 1', 'Editable 1'],
    [2, 'Name 2', 'Editable 2'],
    [3, 'Name 3', 'Editable 3']
]

def edit_cell(text: str, event):
    print(text)
    """Xử lý sự kiện khi nhấp đúp chuột vào ô cột c để chỉnh sửa."""
    item_id = tree.selection()[0]  # Lấy ID của item được chọn
    column = tree.identify_column(event.x)  # Xác định cột

    if column == '#3':  # Chỉ cho phép chỉnh sửa cột c
        # Lấy giá trị hiện tại của ô
        current_value = tree.item(item_id, 'values')[2]
        
        # Xóa tất cả các ô nhập hiện tại nếu có
        for widget in tree.winfo_children():
            if isinstance(widget, tk.Entry):
                widget.destroy()

        # Lấy vị trí của ô cần chỉnh sửa
        x, y, width, height = tree.bbox(item_id, column)
        
        # Tạo một ô nhập liệu mới và đặt tại vị trí của ô
        entry_edit = tk.Entry(tree)
        entry_edit.place(x=x, y=y, width=width, height=height)
        entry_edit.insert(0, current_value)
        entry_edit.focus()

        # Xử lý khi nhấn Enter để lưu giá trị mới
        def on_enter(event):
            new_value = entry_edit.get()
            tree.item(item_id, values=(tree.item(item_id, 'values')[0], tree.item(item_id, 'values')[1], new_value))
            entry_edit.destroy()

        # Gán sự kiện Enter cho ô nhập
        entry_edit.bind('<Return>', on_enter)

# Tạo cửa sổ chính
root = tk.Tk()
root.title("Editable Table")

# Tạo Treeview với 3 cột
tree = ttk.Treeview(root, columns=("a", "b", "c"), show='headings')
tree.heading("a", text="a")
tree.heading("b", text="b")
tree.heading("c", text="c")
tree.pack(fill=tk.BOTH, expand=True)

# Thêm dữ liệu vào bảng
for row in data:
    tree.insert('', tk.END, values=row)

# Gán sự kiện nhấp đúp chuột để chỉnh sửa cột c
tree.bind("<Double-1>", edit_cell("Đang theo dõi..."))

root.mainloop()
