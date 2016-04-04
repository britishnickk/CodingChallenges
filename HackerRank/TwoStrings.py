line = input()
T = line.split()[0]
for case in range(int(T)):
    a = str(input())
    b = str(input())
    letters = {}
    for c in a:
        letters[c] = True
    ans = "NO"
    for c in b:
        if c in letters:
            ans = "YES"
    print (ans)
