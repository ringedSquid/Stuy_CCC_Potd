n = input()
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
c = [int(x) for x in input().split()]
n = 0
dictc = {}
for x in range(len(c)):
    c[x] = b[c[x]-1]
 
for x in range(len(c)):
    if dictc.get(c[x]) == None:
        dictc[c[x]] = 1
    else:
        dictc[c[x]] += 1
 
for x in range(len(a)):
    if dictc.get(a[x]) != None:
        n += dictc.get(a[x])
 
print(n)
