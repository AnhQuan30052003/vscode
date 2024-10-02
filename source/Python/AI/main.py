import os
from utils.read_file import *
from utils.draw_graph import *
from algorithms.bfs_dfs import *
from algorithms.hcs import *
from algorithms.bfs import *

def main():
  os.system("cls")
  
  # File cần đọc
  matrix, namePeaks, weight = readMatrix(getPath("bfs_dfs.adj"), weight=False)

  if matrix == None:
    return
  
  # Chạy với thuật toán
  BFS_DFS(matrix, namePeaks, 0, 9, DFS=True)
  # HCS(matrix, namePeaks, weight, 0, 13)
  # BFS(matrix, namePeaks, weight, 0, 13)

  # Vẽ đồ hoạ các đỉnh
  # drawGraph(matrix)

if __name__ == "__main__":
  main()