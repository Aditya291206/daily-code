n = int(input())

while n > 1:
    if n % 2 != 0:
        print("Not power of 2")
        break
    n = n // 2
else:
    print("Power of 2")
