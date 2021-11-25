def checkMessages(s, t):
    if len(s) > len(t):
        s, t = t, s
    adict = {}
    for x in range(len(s)):
        if adict.get(t[x]) == None:
            adict[t[x]] = s[x]
        else:
            if adict[t[x]] != s[x]:
                return False

    return True




# Do not modify below this line
tests = int(input().strip())
for tests in range(tests):
    s = input().strip()
    t = input().strip()
    if checkMessages(s, t):
        print("yes")
    else:
        print("no")
