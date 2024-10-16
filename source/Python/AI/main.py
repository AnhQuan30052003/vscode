import os
from utils.read_file import *
from utils.draw_graph import *
from algorithms.bfs_dfs import *
from algorithms.hcs import *
from algorithms.bfs import *
from algorithms.at import *
from algorithms.cms import *
from algorithms.a_star import *
from algorithms.branch_bound import *

def main():
  # Đọc file lấy dữ liệu
  # fileName = "bfs_dfs.adj"
  # fileName = "bfs_hcs.adj"
  # fileName = "at.adj"
  # fileName = "cms.adj"
  # fileName = "a_star.adj"
  fileName = "branch_bound.adj"
  matrix, namePeaks, weight, listH = readMatrix(getPath(fileName), weight=True, weightIsMatrix=True, calculatorH=True)

  # Ma trận rỗng và dừng chương trình
  if len(matrix) == 0:
    print("Dữ liệu trong ma trận rỗng !")
    return
  
  # Chạy với thuật toán #
  # BFS_DFS(matrix, namePeaks, 'A', 'J', DFS=False) # Breath First Search | Depth First Search

  # HCS(matrix, namePeaks, weight, 'A', 'N') # Hill Climbing Search
  # BFS(matrix, namePeaks, weight, 'A', 'N') # Best First Search

  # AT(matrix, namePeaks, weight, 'S', 'R') # Algorithm for Tree
  # CMS(matrix, namePeaks, weight, 'A', 'J') # Cost Minimazation Search

  # A_Star(matrix, namePeaks, weight, listH, 'A', 'J') # A Star
  Branch_Bound(matrix, namePeaks, weight, listH, 'A', 'B') # Branch and Bound

  # drawGraph(matrix) # Vẽ đồ hoạ các đỉnh

if __name__ == "__main__":
  os.system("cls")
  main()