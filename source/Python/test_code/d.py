import os

os.system("cls")

text = "tên tôi là Nguyễn Anh Quân, sinh viên IT"

def change(text: str, size: int):
  textNew = ""
  index = 0
  length = size

  while index < len(text):
    textNew += text[index: length].upper()
    index += size
    length += size

  return textNew

print(change(text, 4))