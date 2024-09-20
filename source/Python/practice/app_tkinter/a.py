import tkinter as tk
from tkinter import ttk

# Tạo cửa sổ chính
root = tk.Tk()
root.title("Bảng dữ liệu trong Tkinter với chỉnh sửa và cập nhật")

# Danh sách để lưu trữ dữ liệu
data = [
    [1, 67, 'v'],
    [2, 61, 't'],
    [3, 38, 'i'],
    [4, 35, 'o'],
    [5, 26, 'n'],
    [6, 20, 'h'],
    # Thêm các dòng dữ liệu khác tại đây
]

# Tạo Treeview
tree = ttk.Treeview(root)

# Định nghĩa các cột
tree['columns'] = ('Chỉ số', 'Tần suất', 'Ký tự')

# Định dạng các cột
tree.column('#0', width=0, stretch=tk.NO)  # Cột đầu tiên ẩn
tree.column('Chỉ số', anchor=tk.CENTER, width=80)
tree.column('Tần suất', anchor=tk.CENTER, width=80)
tree.column('Ký tự', anchor=tk.CENTER, width=80)

# Tạo tiêu đề cho các cột
tree.heading('#0', text='', anchor=tk.CENTER)
tree.heading('Chỉ số', text='Chỉ số', anchor=tk.CENTER)
tree.heading('Tần suất', text='Tần suất', anchor=tk.CENTER)
tree.heading('Ký tự', text='Ký tự', anchor=tk.CENTER)

# Thêm dữ liệu vào treeview
for idx, (chi_so, tan_suat, ky_tu) in enumerate(data):
    tree.insert('', 'end', iid=idx, values=(chi_so, tan_suat, ky_tu))

# Tạo Entry để chỉnh sửa dữ liệu
entry = tk.Entry(root)
entry.place(x=0, y=0, width=0, height=0)  # Đặt entry ở vị trí ban đầu không nhìn thấy


def on_double_click(event):
    # Lấy thông tin dòng và cột đang được nhấp đúp
    item_id = tree.focus()
    column_id = tree.identify_column(event.x)
    
    if column_id == '#3':  # Kiểm tra xem cột "Ký tự" được nhấp đúp
        # Lấy tọa độ hiện tại của item trong Treeview
        x, y, width, height = tree.bbox(item_id, column_id)
        
        # Lấy giá trị hiện tại trong ô đó
        current_value = tree.item(item_id, 'values')[2]
        
        # Đặt Entry tại đúng vị trí của ô muốn chỉnh sửa
        entry.place(x=x + tree.winfo_x(), y=y + tree.winfo_y(), width=width, height=height)
        
        # Hiển thị giá trị hiện tại và chọn toàn bộ text để tiện chỉnh sửa
        entry.delete(0, tk.END)
        entry.insert(0, current_value)
        entry.focus()


def on_entry_focus_out(event):
    # Ẩn Entry sau khi hoàn tất chỉnh sửa
    entry.place(x=0, y=0, width=0, height=0)


def on_entry_key_press(event):
    if event.keysym == 'Return':  # Kiểm tra nếu nhấn phím Enter
        # Lấy giá trị mới từ Entry khi người dùng nhấn Enter
        new_value = entry.get()
        item_id = tree.focus()
        
        # Cập nhật giá trị mới vào Treeview
        tree.set(item_id, 'Ký tự', new_value)
        
        # Cập nhật giá trị trong danh sách `data`
        index = int(item_id)  # Lấy index từ item_id
        data[index][2] = new_value  # Cập nhật cột "Ký tự" trong danh sách
        
        # Ẩn Entry sau khi chỉnh sửa xong
        entry.place(x=0, y=0, width=0, height=0)

        # Hiển thị dữ liệu đã được chỉnh sửa (chỉ để kiểm tra, có thể bỏ đi)
        print("Dữ liệu sau khi chỉnh sửa:", data)


# Gán sự kiện nhấp đúp vào Treeview để chỉnh sửa dữ liệu
tree.bind('<Double-1>', on_double_click)
entry.bind('<FocusOut>', on_entry_focus_out)
entry.bind('<KeyPress>', on_entry_key_press)  # Bắt sự kiện nhấn phím trong Entry

# Hiển thị bảng Treeview
tree.pack()

# Chạy vòng lặp chính
root.mainloop()
