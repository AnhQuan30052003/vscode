from utils.print_road import *
from utils.check_exists import *
from utils.setup_start_and_goal import *

def HCS(matrix: list, namePeaks: list, weight: list, start: chr, goal: chr):
  print("Giải thuật: Hill Climbing Search")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  open = []
  close = []

  open.append(start)

  while len(open) > 0:
    cur = open.pop(0)

    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
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
        father[i] = cur

    listS = list(zip(Tn, W))
    listS.sort(key=lambda x : x[1])

    Tn = [x[0] for x in listS]
    open = Tn + open

  print("Không tìm thấy đường đi !")