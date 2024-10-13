from utils.print_road import *
from utils.check_exists import *
from utils.setup_start_and_goal import *

def AT(matrix: list, namePeaks: list, weight: list, start: chr, goal: chr):
  print("Giải thuật: Algorithm for Tree")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  G = [0] * len(namePeaks)
  open = []
  close = []

  open.append(start)

  while len(open) > 0:
    cur = open.pop(0)
    print(f"Xét đỉnh: {namePeaks[cur]}_({G[cur]}), ", end="")

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
        G[i] = weight[cur] + weight[i]
        father[i] = cur

    open.sort(key=lambda x : G[x])
    
    print(f"Open: ", end="")
    for o in open:
      print(f"{namePeaks[o]}_({G[o]}) ", end="")
    print()

  print("Không tìm thấy đường đi !")