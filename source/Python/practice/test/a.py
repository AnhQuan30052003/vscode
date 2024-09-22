import os

os.system("cls")

def createTableVigenere():
  table = []
  for i in range(ord('A'), ord('Z') + 1):
    row = []
    for j in range(i, i + 26):
      j = j - 26 if j > ord('Z') else j
      row.append(chr(j))
    table.append(row)

  return table

def vigenere(table: list, text: str, key:str, type: chr):
  text = text.upper()
  key = key.upper()
  result = ""

  i_key = 0
  for t in text:
    i_key = 0 if i_key >= len(key) else i_key

    # print(f"Xét t = {t}, ", end="")
    typeChar = 0
    if t >= 'A' and t <= 'Z':
      typeChar = 65

    if typeChar == 0:
      result += t
      i_key += 1
      # print("Bỏ qua")
      continue

    col = ord(key[i_key]) - typeChar
    if type == 'e':
      row = ord(t) - typeChar
      char = table[row][col]
      result += char

    else:
      for row in table:
        if row[col] == t:
          char = row[0].lower()
          # print(f"khoá {chr(col + 65)} tìm được ký tự: {char}")
          result += char
          break
        
    i_key += 1

  return result

table = createTableVigenere()

# for row in table:
#   for col in row:
#     print(col, end=" ")
#   print()

text = "@# nguyen anh quan"
textEn = "@# CZIAVL TBJ OJTB"
key = "CRYPTO"

result = vigenere(table, text, key, 'e')
print(result)

result = vigenere(table, textEn, key, 'd')
print(result)