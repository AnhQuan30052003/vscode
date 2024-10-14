from utils.print_road import *
from utils.check_exists import *
from utils.setup_start_and_goal import *

def A_Star(matrix: list, namePeaks: list, weight: list, listH: list, start: chr, goal: chr):
  print("Giải thuật: A Star\n---")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  G = [0] * len(namePeaks)
  F = [0] * len(namePeaks)
  open = []
  close = []

  open.append(start)
  F[start] = listH[start]

  while len(open) > 0:
    cur = open.pop(0)
    print(f"[+] Xét đỉnh: {namePeaks[cur] + str([G[cur]]) + str([F[cur]])}")

    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
      return
    
    close.append(cur)

    Tn = []
    listCur = matrix[cur]
    for i in range(len(listCur)):
      peak = listCur[i]

      if peak == 1:
        if not checkExists(open, i) and not checkExists(close, i):
          Tn.append(i)

          G[i] = G[cur] + weight[cur][i]
          F[i] = G[i] + listH[i]
          father[i] = cur

        else:
          G_new_i = G[cur] + weight[cur][i]
          F_new_i = G_new_i + listH[i]
          
          if F_new_i <= F[i]:
            G[i] = G_new_i
            F[i] = F_new_i
            father[i] = cur

    open += Tn
    open.sort(key=lambda x : F[x])

    print(f"Tn: {[namePeaks[tn] + str([G[tn]]) + str([F[tn]]) for tn in Tn]}")
    print(f"Open: {[namePeaks[o] + str([G[o]]) + str([F[o]]) for o in open]}")
    print()

  print("[!] Không tìm thấy đường đi !")