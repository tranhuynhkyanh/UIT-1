import random
def fermat_theorem(n, k):  
    for i in range(k):
        a = random.randint(1, n-1)
        if pow(a, n-1, n) != 1:
            return False
    return True

n = int(input())
cnt = 0 
for c in range(n, 0, -1):
    if fermat_theorem(c, 4): 
        cnt += 1 
    if cnt == 2: 
        print(c)
        break