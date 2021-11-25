def decode(s, k):
    letters = "abcdefghijklmnopqrstuvwxyz"
    s_list = []
    new_s = ""
    for x in range(len(s)):
        if s[x] in letters:
            for y in range(len(letters)):
                if s[x] == letters[y]:
                    s_list.append(y)
        else:
            s_list.append("P")

    for x in range(len(s)):
        if s_list[x] == "P":
            new_s += s[x]
        else:
            e = abs(((s_list[x]+1) - k) % 26)
            if e == 0:
                e = 26

            new_s += letters[e-1]

    return new_s

tests = int(input().strip())
for _ in range(tests):
    s = input()
    k = int(input())
    print(decode(s, k))
