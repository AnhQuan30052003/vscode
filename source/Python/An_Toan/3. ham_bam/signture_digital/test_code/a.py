import os

os.system("cls")

def get_path(file: list):
  pathCur = os.path.abspath(os.path.dirname(__file__))
  path = os.path.join(pathCur, *file)
  return path

paths = ["a.ttf"]
print(get_path(paths))