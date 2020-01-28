time = [int(x) for x in input().split()]

if time[1] - 45 < 0:
  if time[0] == 0:
    print("23 ")
  else:
    print(time[0] - 1, end=" ")
  print(60 - (45 - time[1]))
else:
  print(time[0], end=" ")
  print(time[1] - 45)
