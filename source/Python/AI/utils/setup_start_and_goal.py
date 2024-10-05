def setupStartAndGoal(namePeaks: list, start: chr, goal: chr):
  for i in range(len(namePeaks)):
    if start == namePeaks[i]:
      start = i
    if goal == namePeaks[i]:
      goal = i
      break
    
  return start, goal