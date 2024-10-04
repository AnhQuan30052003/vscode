from utils.print_road import *
from utils.check_exists import *

def AT(matrix: list, namePeaks: list, weight: list, start: int, goal: int):
  print("Giải thuật: Algorithm for Tree")

  father = [-1] * len(namePeaks)
  G = []
  open = []
  close = []

  open.append(start)
  G.append(weight[start])

  while len(open) > 0:
    cur = open.pop(0)
    G.pop(0)

    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
      return
    
    close.append(cur)

    listCur = matrix[cur]
    for i in range(len(listCur)):
      peak = listCur[i]
      if peak == 1 and not checkExists(open, i) and not checkExists(close, i):
        open.append(i)
        weight[i] = weight[cur] + weight[i]
        G.append(weight[i])
        father[i] = cur

    listS = list(zip(open, G))
    listS.sort(key=lambda x : x[1])

    open = [x[0] for x in listS]
    G = [x[1] for x in listS]

  print("Không tìm thấy đường đi !")