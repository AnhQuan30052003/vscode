import os

def getPath(fileName: str):
  fileRun = os.path.abspath(__file__)
  currentDir = os.path.dirname(fileRun)
  return os.path.join(currentDir, "..", "inputs", fileName)