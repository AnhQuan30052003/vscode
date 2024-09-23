import os

os.system("cls")

text = "UZQSOVUOHXMOPVGPOZPEVSGZWSZOPFPESXUDBMETS"

def scanOneCharacter(text: str):
  dictSave = {}
  text = text.replace(' ', '')
  setText = set(text)
  setText.remove('\n') if '\n' in setText else None

  for t in setText:
    count = text.count(t)
    dictSave[t] = count

  return dictSave

def scanTwoOrThreeCharacter(text: str, soKytu: int):
  text = text.replace(' ', '')
  dictSave = {}

  for i in range(len(text)-(soKytu-1)):
    char = text[i:i+soKytu]
    count = text.count(char)
    dictSave[char] = count

  return dictSave

def showData(dictSave: dict):
  dictSave = dict(sorted(dictSave.items(), key= lambda item: item[1], reverse=True))
  char = list(dictSave.keys())
  number = list(dictSave.values())

  for i in range(len(number)):
    print(f"{number[i]} ký tự '{char[i]}'")

# resultScan = scanTwoOrThreeCharacter(text, 2)
# showData(resultScan)
# print(f"{len(resultScan)} kết quả")

char = "anh quan"

print(type(char[0]))

if char[0] == 'a':
  print("Bằng")
else:
  print("Không :v")