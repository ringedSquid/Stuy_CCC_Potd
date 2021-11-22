t = int(input())
for x in range(t):
    hl = 0
    lh = 0
    n = int(input())
    ln = []
    for y in range(n):
        ln.append([int(x) for x in input().split()])
    hl = ln[0][0]
    lh = ln[0][1]
    if len(ln) == 1:
        print(0)
    else:
        for y in range(n):
            if ln[y][0] > hl:
                hl = ln[y][0]
            if ln[y][1] < lh:
                lh = ln[y][1]

        if hl - lh < 0:
            print(0)
        else:
            print(abs(lh-hl))

        
        
