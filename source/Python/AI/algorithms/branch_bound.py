import msvcrt
from utils.print_road import *
from utils.check_exists import *
from utils.setup_start_and_goal import *

def Branch_Bound(matrix: list, namePeaks: list, weight: list, listH: list, start: chr, goal: chr):
  print("Giải thuật: Branch and Bound\n---")
  start, goal = setupStartAndGoal(namePeaks, start, goal)

  father = [-1] * len(namePeaks)
  G = [0] * len(namePeaks)
  F = [0] * len(namePeaks)

  findRoad = False
  min = float("inf")

  open = []
  close = []

  open.append(start)
  F[start] = listH[start]

  while len(open) > 0:
    cur = open.pop(0)
    close.append(cur)
    print(f"[+] Xét đỉnh: {namePeaks[cur] + str([G[cur]]) + str([F[cur]])}")

    if cur == goal:
      findRoad = True
      if F[cur] < min:
        min = F[cur]
        print(f"Tìm thấy đỉnh kết thúc, F[{namePeaks[cur]}] < min => Cập nhật lại min = {min}")
        print(f"Open: {[namePeaks[o] + str([G[o]]) + str([F[o]]) for o in open]}")
        print()
      continue
    
    if F[cur] > min:
      print(f"F[{namePeaks[cur]}] > min => Bị cắt bỏ nhánh con")
      print(f"Open: {[namePeaks[o] + str([G[o]]) + str([F[o]]) for o in open]}")
      print()
      continue

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

        elif checkExists(open, i):
          G_new_i = G[cur] + weight[cur][i]
          F_new_i = G_new_i + listH[i]

          if F_new_i <= F[i]:
            G[i] = G_new_i
            F[i] = F_new_i
            father[i] = cur
            print(f"Cập nhật G[{namePeaks[i]}], F[{namePeaks[i]}]. Father[{namePeaks[i]}] = {namePeaks[cur]}")

        elif checkExists(close, i):
          G[i] = G[cur] + weight[cur][i]
          F[i] = G[i] + listH[i]
          father[i] = cur
          print(f"Cập nhật Father[{namePeaks[i]}] = {namePeaks[cur]}")


    Tn.sort(key= lambda x : F[x])
    open = Tn + open

    print(f"Tn: {[namePeaks[tn] + str([G[tn]]) + str([F[tn]]) for tn in Tn]}")
    print(f"Open: {[namePeaks[o] + str([G[o]]) + str([F[o]]) for o in open]}")
    print()

  if findRoad:
    result = [goal]
    printRoad(father, namePeaks, result)

  else:
    print("[!] Không tìm thấy đường đi !")