import os
import tkinter as tkt

os.system("cls")

app = tkt.Tk()
window_width = 500
window_height = 300

screen_width = app.winfo_screenwidth()
screen_height = app.winfo_screenheight()

x = (screen_width // 2) - (window_width // 2)
y = (screen_height // 2) - (window_height // 2)

app.title("Test Tkinter")
app.geometry(f"{window_width}x{window_height}+{x}+{y}")

form = tkt.Frame(
  master=app,
  pady=20
)
form.pack()

def createLabel(master, text, x, y):
  obj = tkt.Label(
    master=master,
    text=text,
    anchor="e",
    width=12
  ).grid(row=x, column=y)
  return obj

def createEntry(master, x, y):
  obj = tkt.Entry(
    master=master,
    relief="groove",
    width=40,
  ).grid(row=x, column=y, pady=5)
  return obj

label = tkt.Label(form, text="Input Form", font=("bold", 30)).grid(row=0, column=1)

ten = createLabel(form, "Nhập tên:", 1, 0)
tenEntry = createEntry(form, 1, 1)

tuoi = createLabel(form, "Nhập tuổi:", 2, 0)
tuoiEntry = createEntry(form, 2, 1)

lop = createLabel(form, "Nhập lớp: ", 3, 0)
lopEntry = createEntry(form, 3, 1)

sdt = createLabel(form, "Số điện thoại: ", 4, 0)
sdtEntry = createEntry(form, 4, 1)

def submit():
  from tkinter import messagebox
  text = ""
  text += "Tên: " + tenEntry.get() + "\n"
  text += "Tuổi: " + tuoiEntry.get() + "\n"
  text += "Lớp: " + lopEntry.get() + "\n"
  text += "SĐT: " + sdtEntry.get()

  messagebox.showinfo("Thông tin", text)

btn = tkt.Button(
  master=form,
  text="Submit",
  relief="groove",
  command=submit
).grid(row=5, column=1)

print("Build done")
app.mainloop()
