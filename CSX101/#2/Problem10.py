import math
n = int(input())
for i in range(n):
  a,b = map(int, input().split())
  ucln = math.gcd(a,b)
  if (a%b == 0):
    print(a // b)
  else:
    print(a // ucln,b // ucln)
