import tkinter as tk
from tkinter import filedialog
from PIL import Image, ImageTk

def open_image():
    # Mở hộp thoại chọn file
    filepath = filedialog.askopenfilename(
        filetypes=[("Image Files", "*.png")]
    )
    
    if filepath:
        # Mở ảnh đã chọn và chuyển đổi nó để hiển thị trong tkinter
        img = Image.open(filepath)
        img = img.resize((250, 250))  # Resize ảnh để vừa với giao diện
        img_tk = ImageTk.PhotoImage(img)
        
        # Hiển thị ảnh trên giao diện
        label.config(image=img_tk)
        label.image = img_tk  # Lưu trữ ảnh để tránh bị xóa

# Tạo cửa sổ chính
root = tk.Tk()
root.title("Image Viewer")

# Tạo một button để chọn ảnh
button = tk.Button(root, text="Chọn Ảnh", command=open_image)
button.pack(pady=20)

# Tạo label để hiển thị ảnh
label = tk.Label(root)
label.pack()

# Chạy vòng lặp chính của tkinter
root.mainloop()
