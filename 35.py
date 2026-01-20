lst = list(map(int, input().split()))

for i in lst:
    if i % 3 == 0 and i % 5 == 0:
        print("Both:", i)
    elif i % 3 == 0:
        print("Div3:", i)
    elif i % 5 == 0:
        print("Div5:", i)
    else:
        print("Neither:", i)
