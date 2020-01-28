# https://open.kattis.com/problems/detaileddifferences

cases = int(input())

for n in range(0, cases):
  str1_unparsed = str(input())
  str2_unparsed = str(input())
  str1 = list(str1_unparsed)
  str2 = list(str2_unparsed)

  print(str1_unparsed)
  print(str2_unparsed)

  for c in range(0, len(str1)):
    if(str1[c] != str2[c]):
      print("*", end="")
    else:
      print(".", end="")
  print("\n")
