import os
from random import randint as rand

os.system("cls" if os.name == "nt" else "clear")

numbers = []

for number in range(10):
  number = rand(0, 9)
  numbers.append(number)

def isFirstEven():
  for even in numbers:
    if even % 2 == 0:
      return even

print(numbers)

print(f"\nSố chẵn đầu tiên: {isFirstEven()}")