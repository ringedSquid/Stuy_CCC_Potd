def netTemperature(n, temperatures):
    p_data = []
    nuetral = 0
    for x in range(n):
        p_data.append(0)

    for x in range(len(temperatures)):
        p_data[temperatures[x][1]] += temperatures[x][2]

    for x in p_data:
        if x == 0:
            nuetral += 1

    return nuetral

line1 = input()
t = int(line1.split()[0])
for case in range(t):
    line = input()
    args = line.split()
    n = int(args[0])
    k = int(args[1])
    
    temperatures = []
    for i in range(0, k):
        triple = input()
        tripleargs = triple.split()
        ballThrown = [int(tripleargs[0]), int(tripleargs[1]), int(tripleargs[2])]
        temperatures.append(ballThrown)
    
    res = netTemperature(n, temperatures)
    print(res)

