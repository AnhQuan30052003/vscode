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

app.geometry(f"{window_width}x{window_height}+{x}+{y}")
  
app.title("Test Tkinter")

frame = tkt.Frame(master=app, bg="red")
pading = 10
frame.grid(row=0, column=0, padx=pading, pady=pading)

labelGene = {
  "master": frame,
  "font": (20),
  "width": 15,
  "anchor": "e",
  "padx": "5"
}

entryGene = {
  "master": frame,
  "width": 30,
  "relief": "groove"

}

label_name = tkt.Label(text="Nhập tên:", **labelGene)
label_name.grid(row=0, column=0)
                        
input_name = tkt.Entry(**entryGene)
input_name.grid(row=0, column=1)
input_name.focus()

label_age = tkt.Label(text="Tuổi:", **labelGene)
label_age.grid(row=1, column=0)

input_age = tkt.Entry(**entryGene)
input_age.grid(row=1, column=1)

def btnClick():
  name = input_name.get()
  age = input_age.get()
  print(f"Name: {name}, Age: {age}")

btn_submit = tkt.Button(
  master=frame,
  text="Nhập",  
  relief="groove",
  command=btnClick
)

btn_submit.grid(row=3, column=1)

print("Build done")
app.mainloop()
