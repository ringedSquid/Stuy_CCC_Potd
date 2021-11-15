t = int(input())
for x in range(t):
    n = int(input())
    a = str(input())
    a = a.split(' ')
    ol = []
    el = []
    for y in range(len(a)): 
        a[y] = int(a[y])
    for y in range(len(a)):
        if a[y] % 2 == 0:
            el.append(a[y])
        else:
            ol.append(a[y])
        
    print(' '.join(str(y) for y in (ol + el)))
