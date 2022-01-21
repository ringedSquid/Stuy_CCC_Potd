INPUT = [int(i) for i in input().split()]
N, W = INPUT[0], INPUT[1]
TC = 0
CHEESE = []
for i in range(N):
    INPUT = [int(x) for x in input().split()]
    CHEESE.append([INPUT[0], INPUT[1]])
CHEESE = sorted(CHEESE, reverse=True)
for c in CHEESE:
    TC += c[0] * min(W, c[1])
    W -= min(W, c[1])
    if W <= 0:
        break
print(TC)



