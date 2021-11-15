INPUT = input().split()
n = int(INPUT[0])
k = int(INPUT[1])
distinct_chars = 'abcdefghijklmnopqrstuvwxyz'
final_pass = list()
char_list = list()
for x in range(k):
    char_list.append(distinct_chars[x])

for x in range(n):
    final_pass.append(char_list[x%len(char_list)])

print(''.join(final_pass))


