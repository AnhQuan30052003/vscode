# Đếm xem những ký tự trong text xuất hiện bao nhiêu lần ?
import os

os.system("cls" if os.name == "nt" else "clear")

text = """UZQSOVUOHXMOPVGPOZPEVSGZWSZOPFPESXUDBMETSXAIZ VUEPHZHMDZSHZOWSFPAPPDTSVPQUZWYMXUZUHSX EPYEPOPDZSZUFPOMBZWPPDPTGUDTMOHMQ """

for t in text:
  if t < 'A' or t > 'Z':
    if t == '\n':
      print('_')
    else:
      print(f"-", end="")
  else:
    print(t, end="")