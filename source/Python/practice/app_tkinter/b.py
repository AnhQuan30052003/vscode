# import tkinter as tk

# root = tk.Tk()
# root.geometry("1000x300")
# root.title("Đoạn văn bản")

# frame = tk.Frame(root, width=100, height=10, bd=1, bg="gray")
# frame.pack(anchor="nw")

# text_area = tk.Text(frame, wrap='word', height=3, bg="red")
# text_area.pack(padx=10, pady=10, fill="x")

# # scrollbar = tk.Scrollbar(text_area)
# # scrollbar.pack(side='right', fill='y')
# # text_area.config(yscrollcommand=scrollbar.set)
# # scrollbar.config(command=text_area.yview)

# root.mainloop()



import tkinter as tk

def get_text():
    text = text_area.get("1.0", tk.END)  # Lấy toàn bộ nội dung từ vị trí 1 đến cuối
    print(text)

# Tạo cửa sổ giao diện
root = tk.Tk()
root.geometry("500x300")
root.title("Text Area Example")

# Tạo một text area đơn giản
text_area = tk.Text(root, height=10, width=50)
text_area.pack(padx=10, pady=10, anchor="nw")

# Tạo một nút để lấy nội dung của text area
btn_get_text = tk.Button(root, text="Get Text", command=get_text)
btn_get_text.pack(pady=5)

# Chạy vòng lặp chính của giao diện
root.mainloop()
