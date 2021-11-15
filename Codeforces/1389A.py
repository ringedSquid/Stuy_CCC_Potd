
CASES = int(input(''))
for x in range(CASES):
    RANGES = input('').split()
    LW, HR = int(RANGES[0]), int(RANGES[1])
    LCM = LW*2
    if LCM > HR: 
        print('-1 -1')
    else: 
        print(LW, LW*2)
