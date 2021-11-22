def unbeatable(n, vals, out):
    print(n)
    print(vals)
    print(out)
    pass
        
# Do not modify below this line
line1 = input()
testCases = int(line1.split()[0])
for i in range(0, testCases):
    n = int(input())
    vals = []
    out = [0] * n
    for i in range(n):
        inp = input().split()
        vals.append([int(inp[0]), int(inp[1])])
    for i in range(n):
        inp = input().split()
        u = i
        v = int(inp[0])
        out[u] = v
    print(unbeatable(n, vals, out))
