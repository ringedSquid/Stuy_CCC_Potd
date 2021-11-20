INPUT = [int(i) for i in input().split()]
n = INPUT[0]
x = INPUT[1]
y = INPUT[2]
op = 0
INPUT = [int(i) for i in list(input())]
for i in range(n):
    if INPUT[i] != 0 and i > n-(x+1) and i < n-(y+1):
        INPUT[i] = 0
        op += 1
    elif INPUT[i] != 0 and i > n-(y+1):
        INPUT[i] = 0
        op += 1
    if INPUT[i] != 1 and i == n-(y+1):
        INPUT[i] = 1
        op += 1

print(op)

