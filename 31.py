s = input()

u = l = d = sp = 0

for c in s:
    if c.isupper():
        u += 1
    elif c.islower():
        l += 1
    elif c.isdigit():
        d += 1
    else:
        sp += 1

print(u, l, d, sp)
