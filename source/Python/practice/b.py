import os
import c as hi

os.system("cls" if os.name == "nt" else "clear")

def main():
  myName = "Nguyễn Anh Quân"
  myAge = 21

  print(hi.helloUser(name=myName, age=myAge))

main()