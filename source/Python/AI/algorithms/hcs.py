from utils.print_road import *
from utils.check_exists import *
from utils.setup_start_and_goal import *

def HCS(matrix: list, namePeaks: list, weight: list, start: chr, goal: chr):
  print("Giải thuật: Hill Climbing Search\n---")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  open = []
  close = []

  open.append(start)
  weight[start] = 0

  while len(open) > 0:
    cur = open.pop(0)
    close.append(cur)

    print(f"[+] Xét đỉnh {namePeaks[cur]}[{weight[cur]}]")

    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
      return
    
    Tn = []
    listCur = matrix[cur]

    for i in range(len(listCur)):
      peak = listCur[i]
      if peak == 1 and not checkExists(open, i) and not checkExists(close, i):
        Tn.append(i)
        father[i] = cur

    Tn.sort(key=lambda x : weight[x])
    open = Tn + open

    print(f"Tn: {[namePeaks[tn] + str([weight[tn]]) for tn in Tn]}")
    print(f"Open: {[namePeaks[o] + str([weight[o]]) for o in open]}")
    print()

  print("[!] Không tìm thấy đường đi !")