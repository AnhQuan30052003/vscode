import tkinter as tk
from tkinter import ttk

root = tk.Tk()

# Tạo Treeview với các cột
style = ttk.Style()
style.configure("Treeview", rowheight=25)  # Tăng chiều cao của hàng để tạo khoảng cách

tree = ttk.Treeview(root, columns=("ID", "Name", "Age"), show="headings")
tree.pack(fill="both", expand=True)

# Định nghĩa tiêu đề và căn giữa nội dung cho từng cột
tree.heading("ID", text="ID")
tree.heading("Name", text="Name")
tree.heading("Age", text="Age")

# Định nghĩa cột với padding để tạo không gian giữa các hàng
tree.column("ID", anchor=tk.CENTER, width=50, minwidth=50)
tree.column("Name", anchor=tk.CENTER, width=150, minwidth=100)
tree.column("Age", anchor=tk.CENTER, width=50, minwidth=50)

# Thêm dữ liệu vào Treeview
tree.insert("", "end", values=(1, "John Doe", 25))
tree.insert("", "end", values=(1, "John Doe", 25))
tree.insert("", "end", values=(1, "John Doe", 25))
tree.insert("", "end", values=(1, "John Doe", 25))
tree.insert("", "end", values=(1, "John Doe", 25))
tree.insert("", "end", values=(1, "John Doe", 25))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))
tree.insert("", "end", values=(2, "Jane Smith", 30))

# Thay đổi kiểu hiển thị cho Treeview để tạo khoảng cách giữa các cột
# style.layout("Treeview", [
#     ('Treeview.treearea', {'sticky': 'nswe'})  # Tạo không gian cho khu vực Treeview
# ])

root.mainloop()
