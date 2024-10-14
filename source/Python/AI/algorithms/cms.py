from utils.print_road import *
from utils.check_exists import *
from utils.setup_start_and_goal import *

def CMS(matrix: list, namePeaks: list, weight: list, start: chr, goal: chr):
  print("Giải thuật: Cost Minimazation Search\n---")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  G = [0] * len(namePeaks)
  open = []
  close = []

  open.append(start)

  while len(open) > 0:
    cur = open.pop(0)
    print(f"[+] Xét đỉnh: {namePeaks[cur] + str([G[cur]])}")

    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
      return
    
    close.append(cur)

    Tn = []
    listCur = matrix[cur]
    for i in range(len(listCur)):
      peak = listCur[i]

      if peak == 1 and not checkExists(close, i):
        if not checkExists(open, i):
          Tn.append(i)
          G[i] = G[cur] + weight[cur][i]
          print(f"father[{namePeaks[i]}] = {namePeaks[cur]}")

        else:
          G_new = G[cur] + weight[cur][i]
          if G_new <= G[i]:
            G[i] = G_new
            print(f"Cập nhật G[{namePeaks[i]}], father[{namePeaks[i]}] = {namePeaks[cur]}")

        father[i] = cur

    open += Tn
    open.sort(key=lambda x : G[x])

    print(f"Tn: {[namePeaks[tn] + str([G[tn]]) for tn in Tn]}")
    print(f"Open: {[namePeaks[o] + str([G[o]]) for o in open]}")
    print()

  print("[!] Không tìm thấy đường đi !")