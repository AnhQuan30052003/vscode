from utils.check_exists import *
from utils.setup_character_peak import *

def BFS_DFS(matrix: list, start: chr, goal: chr, DFS=False):
  open = []
  close = []

  open.append(0)
  goal = ord(goal.upper()) - 65

  while len(open) > 0:
    cur = open.pop(0)

    # Tìm thấy đỉnh cần đến
    if cur == goal:
      result = [goal]
      index = 0

      while index < len(matrix):
        peak = matrix[index][goal]
        if peak == 1:
          result.append(index)
          goal = index
          index = 0

        else:
          index += 1

      result.reverse()
      print(f"Kết quả giải thuật: {'DFS' if DFS else 'BFS'}")
      print("Tìm thấy đường đi: ", end="")

      listChar = setUpCharacterPeak(start)
      size = len(result)
      for i in range(size):
        char = listChar[result[i]]
        print(f"{char} {'->' if i < size-1 else ''}", end=" ")
      return
    
    # Đưa đỉnh đang xét vào close
    close.append(cur)

    # Tìm các đỉnh kề đỉnh hiện tại đang xét (cur)
    Tn = []
    listCur = matrix[cur]

    for i in range(len(listCur)):
      peak = listCur[i]
      if peak == 1 and not checkExists(open, i) and not checkExists(close, i):
        Tn.append(i)


    if not DFS:
      open += Tn
    else:
      open = Tn + open

  print("Không tìm thấy đường đi !")
  