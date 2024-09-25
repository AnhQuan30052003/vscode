import os

def getPath(fileName: str):
  fileRun = os.path.abspath(__file__)
  currentDir = os.path.dirname(fileRun)
  path = currentDir + "\..\inputs\\" + fileName
  print(path)
  return path

def readAdj(fileName: str):
  if not os.path.exists(fileName):
    print("File not found !")
    return
  
  with open(fileName, "r") as file:
    n = int(file.readline())

    adj = []
    for i in range(10):
      line = list(map(int, file.readline().strip().split()))
      adj.append(line)

    return n, adj