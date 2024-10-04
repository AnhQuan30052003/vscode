import os
from utils.read_file import *
from utils.draw_graph import *
from algorithms.bfs_dfs import *
from algorithms.hcs import *
from algorithms.bfs import *
from algorithms.at import *

def main():
  # Đọc file lấy dữ liệu
  fileName = "at.adj"
  matrix, namePeaks, weight = readMatrix(getPath(fileName), weight=True)

  if len(matrix) == 0:
    print("Dữ liệu trong ma trận rỗng !")
    return
  
  # Chạy với thuật toán #
  # BFS_DFS(matrix, namePeaks, 0, 9, DFS=True) # Breath First Search | Depth First Search
  # HCS(matrix, namePeaks, weight, 0, 13) # Hill Climbing Search
  # BFS(matrix, namePeaks, weight, 0, 13) # Best First Search
  # AT(matrix, namePeaks, weight, 0, 19) # Algorithm for Tree
  
  # drawGraph(matrix) # Vẽ đồ hoạ các đỉnh

if __name__ == "__main__":
  os.system("cls")
  main()