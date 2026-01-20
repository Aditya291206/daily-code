s = input()

maxc = 1
c = 1
ch = s[0]

for i in range(1, len(s)):
    if s[i] == s[i-1]:
        c += 1
        if c > maxc:
            maxc = c
            ch = s[i]
    else:
        c = 1

print(ch, maxc)
