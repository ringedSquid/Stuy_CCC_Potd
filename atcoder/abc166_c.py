N, M = [int(i) for i in input().split()]
ELEV = [int(i) for i in input().split()]
ELEV.insert(0, 0)
ROAD = {}
gr = 0
for i in range(M):
    d = [int(x) for x in input().split()]
    if d[0] in ROAD: 
        ROAD[d[0]].append(ELEV[d[1]])
    else:
        ROAD[d[0]] = [ELEV[d[1]]]
    if d[1] in ROAD:
        ROAD[d[1]].append(ELEV[d[0]])
    else:
        ROAD[d[1]] = [ELEV[d[0]]]

for p in ROAD:
    if ELEV[p] > max(ROAD[p]):
        gr += 1

gr += (N - len(ROAD))
print(gr)


    



