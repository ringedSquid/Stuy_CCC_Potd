TEST_CASES = int(input())
for x in range(TEST_CASES):
    SIZE = int(input())
    NUMBER = str(input())[::-1]
    OPRS = 0
    for y in range(len(NUMBER)):
        if int(NUMBER[y]) != 0:
            if y == 0:
                OPRS += int(NUMBER[y])
            else:
                OPRS += 1 + int(NUMBER[y])

    print(OPRS)
    

