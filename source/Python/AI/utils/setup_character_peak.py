def setUpCharacterPeak(start: chr):
  start = start.upper()
  listChar = []
  
  for char in range(65, 65 + 25 + 1):
    char = chr(char)
    listChar.append(char)

  listChar.remove(start)
  listChar.insert(0, start)

  return listChar    