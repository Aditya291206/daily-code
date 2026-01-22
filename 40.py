height = 7

for i in range(height):
    for j in range(height):
        if j == 0 or (i == 0 and j < height - 1) or (i == height - 1 and j < height - 1) or (j == height - 2 and i != 0 and i != height - 1):
            print("*", end="")
        else:
            print(" ", end="")
    print()
