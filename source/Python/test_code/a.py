import os

os.system("cls")

def main():
  char = "F"
  X = 21
  Y = 55
  X= 60

def tinyA5_1():

  pass

def rotate(id_bin, ):
  return id_bin

def charToBin(char, length=8):
  char = ord(char)
  id_bin = bin(char)[2:]
  distance = length - len(id_bin)

  text = ""
  if distance > 0:
    for i in range(distance):
      text += "0"
    text += id_bin

  else:
    text = id_bin

  return text

main()