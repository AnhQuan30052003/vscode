import os

os.system("cls")

def main():
  dictOneText = {}
  dictTwoText = {}
  text = "toi dang hoc tai truong dai hoc nha trang"

  quetMotKyTu(text=text, dictSave=dictOneText)

  text = text.replace('a', 'w')
  print()
  print(text)
  # print()
  # quetHaiKyTu(text=text, dictSave=dictTwoText)

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
    # if number[i] > 1:
    print(f"{number[i]}: {char[i]}", end="; ")

main()