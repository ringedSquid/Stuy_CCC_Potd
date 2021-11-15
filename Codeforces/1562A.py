TEST_CASES = int(input(''))
for x in range(TEST_CASES):
    RANGE = input('').split(' ')
    LR = int(RANGE[0])
    HR = int(RANGE[1])
    if LR > HR/2:
        print(int(HR % LR))
    elif LR <= HR/2:
        print(HR % int(HR/2 + 1))
