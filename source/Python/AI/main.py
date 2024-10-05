import os
from utils.read_file import *
from utils.draw_graph import *
from algorithms.bfs_dfs import *
from algorithms.hcs import *
from algorithms.bfs import *
from algorithms.at import *
from algorithms.cms import *

def main():
  # Đọc file lấy dữ liệu
  fileName = "bfs_hcs.adj"
  matrix, namePeaks, weight = readMatrix(getPath(fileName), weight=True, weightIsMatrix=False)

  if len(matrix) == 0:
    print("Dữ liệu trong ma trận rỗng !")
    return

  # Chạy với thuật toán #
  # BFS_DFS(matrix, namePeaks, 'A', 'J', DFS=True) # Breath First Search | Depth First Search

  # HCS(matrix, namePeaks, weight, 'A', 'L') # Hill Climbing Search
  BFS(matrix, namePeaks, weight, 'A', 'N') # Best First Search

  # AT(matrix, namePeaks, weight, 'S', 'R') # Algorithm for Tree
  # CMS(matrix, namePeaks, weight, 'A', 'J') # Cost Minimazation Search

  # drawGraph(matrix) # Vẽ đồ hoạ các đỉnh

if __name__ == "__main__":
  os.system("cls")
  main()