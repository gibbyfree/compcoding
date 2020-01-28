# https://open.kattis.com/problems/heartrate

cases = int(input())

for c in range(0, cases):
  floats = [float(x) for x in input().split()]
  calculated = 60.0 * (floats[0] / floats[1])
  error = 60.0 / floats[1]
  print(calculated - error, end=" ")
  print(calculated, end=" ")
  print(calculated + error, end=" ")
