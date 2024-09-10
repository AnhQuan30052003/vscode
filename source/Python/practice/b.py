import os
from random import randint as rand

os.system("cls" if os.name == "nt" else "clear")

def helloUser(name: str, age: int):
  text = f"Xin chào {name}, {age} tuổi 😃"
  return text

def main():
  myName = "Nguyễn Anh Quân"
  myAge = 21

  print(helloUser(name=myName, age=myAge))

main()