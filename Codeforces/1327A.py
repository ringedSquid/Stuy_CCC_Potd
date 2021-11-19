TC = int(input())
for x in range(TC):
    INPUT = input().split()
    n = int(INPUT[0])
    k = int(INPUT[1])
    if k**2 <= n and n % 2 == k % 2:
        print("YES")
    else:
        print("NO")

