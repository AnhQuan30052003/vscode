import os

os.system("cls")

def get_path(files: list):
  pathCur = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(pathCur, *files)

os.replace(get_path(["a.txt"]), get_path(["b.py"]))

print("Build done.")