notes = list(input())
y = 0
MAY = 0
MIY = 0
for i in notes:
    if i == '+':
        y += 1
        MAY = max(MAY, y)
    else: 
        y -= 1
        MIY = min(MIY, y)
print(MAY-MIY)

