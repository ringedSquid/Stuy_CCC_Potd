n = int(input())
mx = 0
sm = 0
times = {}
for i in range(n):
    a = [int(x) for x in input().split()]
    times[a[0]] = 1
    times[a[1]] = -1

simes = sorted(times)
for i in range(len(simes)):
    sm += times[simes[i]]
    if sm > mx:
        mx = sm

print(mx)


    


