import os

getPathCur = os.path.abspath(os.path.dirname(__file__))
pathRead = os.path.join(getPathCur, "a.py")
pathWrite = os.path.join(getPathCur, "b.py")

with open(pathWrite, "w") as file:
  file.writelines("# conent 1\n")
  file.writelines("# conent 2")

os.system("cls")
print("Write file successfully")