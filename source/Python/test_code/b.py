import os

os.system("cls")

text_extensions = ['.txt', '.csv', '.json', '.xml', '.html']

file = "C:/quan/a.txt"
nameFile, extensionFile = os.path.splitext(file)

print(f"Name file: {nameFile}")
print(f"Extension file: {extensionFile}")