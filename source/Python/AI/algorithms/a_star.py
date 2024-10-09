from utils.print_road import *
from utils.check_exists import *
from utils.setup_start_and_goal import *

def A_Star(matrix: list, namePeaks: list, weight: list, listH: list, start: chr, goal: chr):
  print("Giải thuật: Cost Minimazation Search")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  G = [0] * len(namePeaks)
  F = [0] * len(namePeaks)
  open = []
  close = []

  open.append(start)

  while len(open) > 0:
    cur = open.pop(0)
    print(f"Xét đỉnh: {namePeaks[cur]}, g({namePeaks[cur]})")

    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
      return
    
    close.append(cur)

    listCur = matrix[cur]
    for i in range(len(listCur)):
      peak = listCur[i]

      if peak == 1 and not checkExists(close, i):
        if not checkExists(open, i):
          open.append(i)
          G[i] = G[cur] + weight[cur][i]

        else:
          G_new = G[cur] + weight[cur][i]
          if G_new <= G[i]:
            G[i] = G_new

        father[i] = cur

    G_temp = [G[i] for i in open]
    listS = list(zip(open, G_temp))
    listS.sort(key=lambda x : x[1])

    open = [x[0] for x in listS]

  print("Không tìm thấy đường đi !")