# https://open.kattis.com/problems/conundrum

cipher_raw = str(input())
cipher = list(cipher_raw)
total = 0

# do this for each name chunk
for i in range(0, len(cipher), 3):
 if(cipher[i] != 'P'):
   total += 1
 
 if(cipher[i + 1] != 'E'):
   total += 1
 
 if(cipher[i + 2] != 'R'):
   total += 1

print(total)
