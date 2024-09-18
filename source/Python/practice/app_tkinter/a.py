import tkinter as tk

# Hàm để tăng giá trị
def increase():
  global count
  count += 1
  label.config(text=str(count))

# Hàm để giảm giá trị
def decrease():
  global count
  count -= 1
  label.config(text=str(count))

# Tạo cửa sổ ứng dụng
window = tk.Tk()
window.geometry("300x200")
window.title("Ứng dụng Tăng Giảm")

# Thiết lập giá trị ban đầu
count = 0

# Tạo nhãn để hiển thị giá trị
label = tk.Label(window, text=str(count), font=("Arial", 30))
label.pack(pady=20)

# Tạo nút tăng
increase_button = tk.Button(window, text="Tăng", command=increase, font=("Arial", 15))
increase_button.pack(side=tk.LEFT, padx=20)

# Tạo nút giảm
decrease_button = tk.Button(window, text="Giảm", command=decrease, font=("Arial", 15))
decrease_button.pack(side=tk.RIGHT, padx=20)

# Chạy ứng dụng
window.mainloop()
