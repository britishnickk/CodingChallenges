string = input()
letters = {}
for letter in string:
    if letter not in letters:
        letters[letter]=1
    else:
        letters[letter]+=1
ans = "YES"
num_odd=0
for letter,count in letters.items():
    if (count%2):
        num_odd+=1
if(num_odd>1):
    ans="NO"
print(ans)
