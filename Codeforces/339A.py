sequence = input().split('+')
sequence = sorted(sequence)
output = ""
for i in range(len(sequence)-1):
    output += str(sequence[i]) + '+'
output += sequence[len(sequence)-1]
print(output)
