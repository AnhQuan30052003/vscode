def printRoad(father: list, namePeaks: list, result: list):
  index = result[0]
  while index != 0:
    peak = father[index]
    result.append(peak)
    index = peak

  result.reverse()
  print("[*] Tìm thấy đường đi:")

  for i in range(len(result)):
    print(f"{namePeaks[result[i]]} {'-> ' if i < len(result)-1 else ''}", end="")
