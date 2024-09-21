import os, sys

os.system("cls")

text = "abz"
k = 3

def ceasar(text, key):
  resutlt = ""
  for t in text:
    t = ord(t) + k
    resutlt += chr(t)

  return resutlt

print(ceasar(text, k))