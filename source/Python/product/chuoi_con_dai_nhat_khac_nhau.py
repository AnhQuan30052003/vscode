import os

os.system("cls")

def kyTuDeuKhacNhau(text: str):
  setText = set(text)
  return True if len(setText) == len(text) and len(text) > 0 else False

def chuoiConDaiNhatKhongTrungLap(text: str):
  left = 0
  right = left

  lenMax = 0
  start = 0
  end = 0
  result = text

  text = text.lower()
  while (left < len(text) and right < len(text)):
    getText = text[left : right+1]
    if kyTuDeuKhacNhau(getText):
      right += 1
      if len(getText) > lenMax:
        lenMax = len(getText)
        start = left
        end = right

    else:
      left += 1
      right = right + 1 if left == right else right

  return result[start: end+1]

def main():
  text = input("Text: ")
  result = chuoiConDaiNhatKhongTrungLap(text)
  print(f"Chuỗi con dài nhất không trùng lặp đầu tiên: {chuoiConDaiNhatKhongTrungLap(text)}")
  print(f"Chiều dài: {len(result)}")

main()