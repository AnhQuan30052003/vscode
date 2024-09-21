import os

os.system("cls")

def main():
  dictOneText = {}
  dictTwoText = {}
  text = "toi dang hoc tai truong dai hoc nha trang"

  print(text)
  quetMotKyTu(text=text, dictSave=dictOneText)

  print()
  print(list(dictOneText))

def quetHaiKyTu(text: str, dictSave: dict):
  text = text.replace(' ', '')

  for i in range(len(text)-1):
    char = text[i] + text[i+1]
    count = text.count(char)
    dictSave[char] = count

  printResult(dictSave)

def quetMotKyTu(text: str, dictSave: dict):
  setText = set(text)
  for t in setText:
    if t != ' ':
      count = text.count(t)
      dictSave[t] = count

  printResult(dictSave)

def printResult(dictSave: dict):
  dictSave = dict(sorted(dictSave.items(), key= lambda item: item[1], reverse=True))

  char = list(dictSave.keys())
  number = list(dictSave.values())

  for i in range(len(number)):
    print(f"{number[i]}: {char[i]}", end="; ")

main()