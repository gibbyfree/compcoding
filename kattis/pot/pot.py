# https://open.kattis.com/problems/pot

n = int(input())
total = 0

for i in range(0, n):
  addends_raw = str(input())
  addends = [int(x) for x in str(addends_raw)]
  exp = int(addends.pop(-1))

  base_to_join = [str(x) for x in addends]
  joined_base = ''.join(base_to_join)
  base = int(joined_base)
  
  total += base ** exp

print(total)
