n = input()
k = len(n)
t = n = int(n)
s = 0
while n:
    s += (n%10)**k
    n //=  10
print('True' if (s==t) else 'False')