from utils.print_road import *
from utils.check_exists import *

def BFS(matrix: list, namePeaks: list, weight: list, start: int, goal: int):
  print("Giải thuật: Best First Search")  

  father = [-1] * len(namePeaks)
  W = []
  open = []
  close = []

  open.append(start)
  W.append(weight[start])


  while len(open) > 0:
    cur = open.pop(0)
    W.pop(0)

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
        W.append(weight[i])
        father[i] = cur

    listS = list(zip(open, W))
    listS.sort(key=lambda x : x[1])

    open = [x[0] for x in listS]
    W = [x[1] for x in listS]

  print("Không tìm thấy đường đi !")