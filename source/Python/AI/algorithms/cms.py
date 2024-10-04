from utils.print_road import *
from utils.check_exists import *

def CMS(matrix: list, namePeaks: list, weight: list, start: int, goal: int):
  print("Giải thuật: Cost Minimazation Search")

  father = [-1] * len(namePeaks)
  G = []
  open = []
  close = []

  open.append(start)
  G.append(weight[start][0])

  while len(open) > 0:
    cur = open.pop(0)
    print(f"Xét đỉnh: {namePeaks[cur]}")    

    if cur == goal:
      result = [goal]
      printRoad(father, namePeaks, result)
      return
    
    

    listCur = matrix[cur]
    for i in range(len(listCur)):
      peak = listCur[i]
      if peak == 1 and not checkExists(close, i):
        if not checkExists(open, i):
          open.append(i)
          G.append(G[cur] + weight[cur][i])

        else:
          weightNew = weight[cur] + weight[i]
          if weightNew < weight[i]:
            weight[i] = weightNew
            
        father[i] = cur

    close.append(cur)
    G.pop(0)
    
    listS = list(zip(open, G))
    listS.sort(key=lambda x : x[1])

    open = [x[0] for x in listS]
    G = [x[1] for x in listS]

    print(f"Open: ", end="")
    for i in range(len(open)):
      print(f"{namePeaks[open[i]]}({G[i]})", end=" ")
    print()    

  print("Không tìm thấy đường đi !")