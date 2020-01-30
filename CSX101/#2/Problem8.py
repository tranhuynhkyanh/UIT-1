import  math
q = int(input())
for _ in range(q):
  n = int(input())
  total = sum(map(int,input().split()))
  print(math.ceil(total/n))