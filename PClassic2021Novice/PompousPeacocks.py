def unbeatable(peacocks):
    init_l = len(peacocks)
    unb = 1
    while len(peacocks) > unb:
        winners = []
        for x in range(len(peacocks)-1):
            if peacocks[x][0] >= peacocks[x+1][0] and peacocks[x][1] >= peacocks[x+1][1]:
                if peacocks[x][0] == peacocks [x+1][0] and peacocks[x][1] == peacocks[x+1][1]:
                    unb += 1
                else:
                    winners.append(peacocks[x])
            

            if peacocks[x+1][0] >= peacocks[x][0] and peacocks[x+1][1] >= peacocks[x][1]:
                if peacocks[x+1][0] == peacocks [x][0] and peacocks[x+1][1] == peacocks[x][1]:
                    unb += 1
                else:
                    winners.append(peacocks[x+1])

            else:
                pass

            print(winners)
                

        peacocks = winners
        

    if unb > init_l:
        unb = init_l

    return unb


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
