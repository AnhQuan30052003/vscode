import tkinter as tk
from tkinter import ttk

root = tk.Tk()
tree = ttk.Treeview(root, columns=("ID", "Name", "Age"), show="headings")
tree.heading("ID", text="ID")
tree.heading("Name", text="Name")
tree.heading("Age", text="Age")

# Canh giữa
tree.column("ID", anchor="center")
tree.column("Age", anchor="center")

# Thêm dữ liệu vào Treeview
tree.insert("", "end", values=(1, "John Doe", 25))
tree.insert("", "end", values=(2, "Jane Smith", 30))

tree.pack()
root.mainloop()

a = 0