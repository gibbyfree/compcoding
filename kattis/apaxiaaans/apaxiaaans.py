name = str(input())
letters = list(name)

print(letters[0], end="")

for c in range(1, len(letters)):
  if(letters[c - 1] != letters[c]):
    print(letters[c], end="")
