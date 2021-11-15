INPUT = input().split()
n = int(INPUT[0])
k = int(INPUT[1])

if (n//k)%2 == 1:
    print("YES")
else:
    print("NO")


