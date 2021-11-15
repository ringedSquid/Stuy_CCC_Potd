INPUT = input().split()
ARRAY = []
for x in INPUT:
    ARRAY.append(int(x))
count = 1
num = ARRAY[0]
for x in range(len(ARRAY)-1):
    if ARRAY[x] == num:
        count += 1
    else:
        count -= 1

    if count == 0:
        num = ARRAY[x]
        count = 1

freq = 0
for x in range(len(ARRAY)):
    if ARRAY[x] == num:
        freq += 1
    if freq > len(ARRAY)/2:
        print(True, num)
        break


