import os

os.system("cls")

dictText = {
  'a': 1,
  'b': 2,
  'c': 1,
  'd': 4,
}

for k, v in dictText.items():
  if v == 1:
    del dictText[k]

key = list(dictText.values())
value = list(dictText.keys())

for i in range(len(key)):
  print(f"{key[i]}: {value[i]}")