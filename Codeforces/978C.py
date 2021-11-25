#Link to problem: https://codeforces.com/contest/978/problem/C

nm = [int(x) for x in input().split()]
dor = [int(x) for x in input().split()]
roo = [int(x) for x in input().split()]

rodo = []
highr = dor[0]
offset = 0
rn = 1

for x in range(len(roo)):
    if roo[x] <= highr:
        rodo.append([rn, roo[x]-offset])
    else:
        while roo[x] > highr:
            offset += dor[rn-1]
            rn += 1
            highr += dor[rn-1]

        rodo.append([rn, roo[x]-offset])

for x in range(len(rodo)):
    print(rodo[x][0], rodo[x][1])

    

    


