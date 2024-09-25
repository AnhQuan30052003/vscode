import networkx as nx
import matplotlib.pyplot as plt

def drawGraph(matrix: list, direct=False):
  G = nx.Graph()
  n = len(matrix)

  labels = {i: chr(65 + i) for i in range(n)}  # 65 = ASCII 'A'

  # Them cac canh vao do thi cua ma tran ke
  for i in range(n):
    for j in range(i, n):
      if matrix[i][j] == 1:
        G.add_edge(labels[i], labels[j])

  pos = nx.spring_layout(G)
  nx.draw(G, pos, with_labels=True, node_color='skyblue', node_size=1000, edge_color='gray', arrows=direct)

  plt.show()