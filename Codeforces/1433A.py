CASES = int(input(''))
for x in range(CASES):
    BS = int(input(''))
    BS = [int(i) for i in str(BS)]
    DP = 0
    DP += (BS[0]-1)*10
    if len(BS) == 1: DP += 1
    if len(BS) == 2: DP += 3
    if len(BS) == 3: DP += 6
    if len(BS) == 4: DP += 10
    
    print(DP)
