import os

def get_path(file_name: str):
  path_cur = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(path_cur, file_name)

def read_file(file_name: str):
  path = get_path(file_name)

  with open(path, "r") as file:
    content = file.read().split("\n")

  return content

def main():
  os.system("cls")
  file_name = "info.txt"
  data = read_file(file_name)

  [print(line) for line in data]

main()