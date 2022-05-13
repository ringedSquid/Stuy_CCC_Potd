t = int(input())
for i in range(t):
    a = [int(x) for x in list(input())]
    if (a[0]+a[1]+a[2]) == (a[3]+a[4]+a[5]):
        print("YES")
    else:
        print("NO")


