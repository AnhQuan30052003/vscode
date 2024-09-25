import os
from utils.readFile import *
from utils.checkExist import *

os.system("cls")

def bfs(graph: list, start: int, goal: int):
  open = []
  close = []
  Tn = []

  open.append(start)

  while len(open) > 0:
    cur = open.pop(0)

    # Tìm thấy đỉnh cần đến
    if cur == goal:
      print("Tìm thấy đường đi: ", end="")

      result = [goal]
      index = 0

      while index < len(graph):
        peak = graph[peak][goal]
        if peak == 1:
          result.append(peak)
          index = 0
          goal = peak
        peak += 1

      result.reverse()
      for e in result:
        print(e, end=" ")
      return
    
    # Đưa đỉnh đang xét vào close
    close.append(cur)

    # Tìm các đỉnh kề cur
    Tn = []
    print(f"Cur: {cur}")
    listCur = graph[cur]
    print(listCur)

    for i in range(len(listCur)):
      peak = listCur[i]
      if peak == 1 and not checkExist(open, peak) and not checkExist(close, peak):
        Tn.append(i)

    open.append(Tn) # BFS
    open = Tn + open # DFS

  print("Không tìm thấy được đi !")

if __name__ == "__main__":
  fileName = "bfs.adj"
  n, adj = readAdj(getPath(fileName))
  bfs(adj, 0, 6)
