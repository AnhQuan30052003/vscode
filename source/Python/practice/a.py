# Đếm xem những ký tự trong text xuất hiện bao nhiêu lần ?
import os

os.system("cls" if os.name == "nt" else "clear")

text = input("Text: ")

for t in set(text):
  count = text.count(t)
  if t != ' ':
    print(f"{count} {t}")