from utils.check_exists import *
from utils.setup_character_peak import *

def HCS(matrix: list, weight: list, peaks: list, start: int, goal: int):
  open = []
  close = []

  open.append(start)

  while len(open) > 0:
    cur = open.pop(0)

    if cur == goal:
      print("Đã tìm thấy")
      result = [goal]
      index = 0

      while index < len(matrix):
        peak = matrix[index][goal]

        if peak == 1:
          result.append(index)

          goal = index
          index = 0
          if goal == 0:
            break

        else:
          index += 1

      result.reverse()
      print(f"Kết quả giải thuật: HCS")
      print(f"Tìm thấy đường đi: ", end="")
      for i in range(len(result)):
        print(f"{peaks[result[i]]} {'-> ' if i < len(result)-1 else ''}", end="")
      return
    
    close.append(cur)

    Tn = []
    W = []
    listCur = matrix[cur]

    for i in range(len(listCur)):
      peak = listCur[i]
      if peak == 1 and not checkExists(open, i) and not checkExists(close, i):
        Tn.append(i)
        W.append(weight[i])

    listS = list(zip(Tn, W))
    listS.sort(key=lambda x : x[1])

    Tn = [x[0] for x in listS] 
    open = Tn + open

  print("Không tìm thấy đường đi !")