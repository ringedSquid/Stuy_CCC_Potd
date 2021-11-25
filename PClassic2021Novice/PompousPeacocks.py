def unbeatable(peacocks):
    w = len(peacocks)
    for x in range(len(peacocks)):
        for y in range(len(peacocks)):
            if peacocks[x][0] < peacocks[y][0] and peacocks[x][1] < peacocks[y][1]:
                w -= 1
                peacocks[x] = [0, 0]
                break

    return w


# do not modify below
total = int(input().strip())
for i in range(total):
    sumos = []
    while True:
        s = input().strip()
        if s == '':
            break
        sumo = s.split(" ")
        sumo[0] = int(sumo[0])
        sumo[1] = int(sumo[1])
        sumos.append(sumo)
    print(unbeatable(sumos))
