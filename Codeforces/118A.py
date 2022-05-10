string = input()
vowels = ['A', 'O', 'Y', 'E', 'U', 'I']
result = ""
for c in string:
    if c.upper() not in vowels:
        result += '.' + c.lower()

print(result)
