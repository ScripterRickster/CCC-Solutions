A = 0
B = 0
while True:
  currInput = input().split(" ")
  if currInput[0] == "7":
    break

  A = int(A)
  B = int(B)

  if currInput[0] == "1":
    if currInput[1] == "A":
      A = int(currInput[2])
    elif currInput[1] == "B":
      B = int(currInput[2])
      
  elif currInput[0] == "2":
    if currInput[1] == "A":
      print(A)
    elif currInput[1] == "B":
      print(B)

  elif currInput[0] == "3":
    if currInput[1] == "A":
      if currInput[2] == "A":
        A = int(A+A)
      elif currInput[2] == "B":
        A = int(A+B)
    elif currInput[1] == "B":
      if currInput[2] == "A":
        B = int(B+A)
      elif currInput[2] == "B":
        B = int(B+B)
      
  elif currInput[0]  == "4":
    if currInput[1] == "A":
      if currInput[2] == "A":
        A = int(A*A)
      elif currInput[2] == "B":
        A = int(A*B)
    elif currInput[1] == "B":
      if currInput[2] == "A":
        B = int(B*A)
      elif currInput[2] == "B":
        B = int(B*B)

  elif currInput[0] == "5":
    if currInput[1] == "A":
      if currInput[2] == "A":
        A = int(A-A)
      elif currInput[2] == "B":
        A = int(A-B)
    elif currInput[1] == "B":
      if currInput[2] == "A":
        B = int(B-A)
      elif currInput[2] == "B":
        B = int(B-B)

  elif currInput[0] == "6":
    if currInput[1] == "A":
      if currInput[2] == "A":
        A = int(A//A)
      elif currInput[2] == "B":
        A = int(A//B)
    elif currInput[1] == "B":
      if currInput[2] == "A":
        B = int(B//A)
      elif currInput[2] == "B":
        B = int(B//B)
