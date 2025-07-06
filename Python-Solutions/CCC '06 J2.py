n1 = int(input())
n2 = int(input())

totalways = 0

for i in range(n1):
  for j in range(n2):
    if (i+1)+(j+1) == 10:
      totalways += 1



if totalways == 0 or totalways > 1:
  print(f'There are {totalways} ways to get the sum 10.')
elif totalways == 1:
  print('There is 1 way to get the sum 10.')
