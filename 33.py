n = int(input())
rev = int(str(n)[::-1])

if n == rev:
    print("Palindrome")
else:
    print(n - rev)
