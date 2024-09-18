import tkinter as tk

root = tk.Tk()
root.geometry("500x300")
root.title("Multiple Frames Example")

# Frame 1
frame1 = tk.Frame(root, borderwidth=2, relief="groove")
frame1.pack(side="left", anchor="n", padx=10, pady=10)

label1 = tk.Label(frame1, text="Frame 1", font=(30))
label1.pack(padx=5, pady=5)

# Frame 2
frame2 = tk.Frame(root, borderwidth=2, relief="groove")
frame2.pack(side="right", anchor="n", padx=10, pady=10)

label2 = tk.Label(frame2, text="Frame 2")
label2.grid(row=0, column=0, padx=5, pady=5)

# Frame 3 (nested inside Frame 2)
frame3 = tk.Frame(frame2, borderwidth=2, relief="groove")
frame3.grid(row=0, column=1, padx=10, pady=10)

label3 = tk.Label(frame3, text="Nested Frame in Frame 2")
label3.grid(row=0, column=0, padx=5, pady=5)

root.mainloop()
