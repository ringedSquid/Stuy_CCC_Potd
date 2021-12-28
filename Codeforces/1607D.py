def determine(sequence):
    for i in range(len(sequence)):
        if sequence[i][0] == 'B' and sequence[i][1] < i+1:
            return 'NO'
        if sequence[i][0] == 'R' and sequence[i][1] > i+1:
            return 'NO'
    return 'YES'

test_cases = int(input())
for i in range(test_cases):
    n = int(input())
    sequence = [int(x) for x in input().split()]
    colors = list(input())
    ntos = map(sequence, colors)
    sequence = sorted(zip(colors, sequence))
    print(determine(sequence))


