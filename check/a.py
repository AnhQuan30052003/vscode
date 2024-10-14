import os

def getPath(fileName: str):
  pathCurr = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(pathCurr, fileName)

def readFile(fileName: str):
  path = getPath(fileName)

  content = []
  with open(path, "r") as file:
    for line in file:
      line = line.strip()
      content.append(line)
  
  return content

def main():
  os.system("cls")
  fileName = "info.txt"
  data = readFile(fileName)
  
  for line in data:
    print(line)

main()