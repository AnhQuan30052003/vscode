import os

def choose_option():
  path_cur = os.path.abspath(os.path.dirname(__file__))

  input_false = False
  text_show = ["Enter file name: ", "Enter file name again: "]
  text_i = 0

  while True:
    os.system("cls")

    if input_false:
      print("Invalid path !")
      input_false = False

    file_name = input(text_show[text_i])
    path = os.path.join(path_cur, file_name)

    if len(file_name) > 0 and os.path.exists(path):
      break
    input_false = True
    text_i = 1

  while True:
    os.system("cls")
    print(f"Path file name: {path}")
    print("Choose option ?")
    print("1 = Enctypt or 2 = Decrypt:")

    try:
      choose = input("Answer: ")
      choose = int(choose)
      if choose == 1 or choose == 2:
        break
    
    except:
      pass

  return path, choose

def main():
  path, choose = choose_option()

  data = []
  with open(path, "r") as file:
    for line in file:
      line = line.encode().hex() if choose == 1 else bytes.fromhex(line).decode()
      data.append(line)

  with open(path, "w") as file:
    for char in data:
      file.write(char)

  print(f"\nStatus: {'Encryption' if choose == 1 else 'Decryption'} successfully")
  
main()