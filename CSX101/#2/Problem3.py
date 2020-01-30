for row in range(5):
    cols = list(map(int,input().split(' ')))
    for col in range(5):
        if (cols[col] == 1):
            print(abs(row - 2) + abs(col - 2))
            break
    
