import os
from utils.read_file import *
from utils.draw_graph import *
from algorithms.bfs_dfs import *
from algorithms.hcs import *
from algorithms.bfs import *

def main():
  os.system("cls")
  
  # File cần đọc
  matrix = readMatrix(getPath("hcs.adj"))
  listWeight = readWeight("hcs_weight.adj")

  if matrix == None:
    return

  # Chạy với thuật toán
  # BFS_DFS(matrix, 'A', 'J', DFS=True)

  # Vẽ đồ hoạ các đỉnh
  # drawGraph(matrix)

  # HCS(matrix, listWeight, 0, 9)
  namePeaks = ['A', 'B', 'C', 'D', 'E', 'G', 'I', 'K', 'Y', 'M']
  BFS(matrix, listWeight, namePeaks, 0, 9)

if __name__ == "__main__":
  main()