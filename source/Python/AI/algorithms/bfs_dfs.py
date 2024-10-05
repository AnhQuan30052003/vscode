from utils.check_exists import *
from utils.print_road import *
from utils.setup_start_and_goal import *

def BFS_DFS(matrix: list, namePeaks: list, start: chr, goal: chr, DFS: bool=False):
  name = "Depth First Search" if DFS else "Breath First Search"
  print(f"Giải thuật: {name}")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  open = []
  close = []

  open.append(start)

  while len(open) > 0:
    cur = open.pop(0)

    # Tìm thấy đỉnh cần đến
    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
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
        father[i] = cur


    if not DFS:
      open += Tn
    else:
      open = Tn + open

  print("Không tìm thấy đường đi !")
  