def reversedMessage(message, k):
    new_message = ""
    sub = 0
    for x in range(len(message)):
        if x >= len(message)-k:
            new_message += message[(len(message)-1)-sub]
            sub += 1
        else:
            new_message += message[x]
            

    return new_message

# Do not modify below this line
tests = int(input())
for test in range(tests):
    line = input().split()
    print(reversedMessage(line[0], int(line[1])))
