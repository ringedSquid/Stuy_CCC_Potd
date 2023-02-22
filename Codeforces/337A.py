n, m = [int (x) for x in input().split()]
puzzles = sorted([int (x) for x in input().split()])
mindif = 100000
for i in range(m-n+1):
    #print((puzzles[i+n-1]), puzzles[i])
    if ((puzzles[i+n-1]) - (puzzles[i])) < mindif:
        mindif = ((puzzles[i+n-1]) - (puzzles[i]))
print(mindif)
