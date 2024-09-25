import os
from utils.read_file import *
from algorithms.bfs import *
from utils.draw_graph import *

def main():
  os.system("cls")
  
  # File cần đọc
  fileName = "bfs.adj"
  matrix = readMatrix(getPath(fileName))

  if matrix == None:
    return

  # Chạy với thuật toán
  BFS_DFS(matrix, 'A', 'J', DFS=True)

  # Vẽ đồ hoạ các đỉnh
  drawGraph(matrix)

if __name__ == "__main__":
  main()