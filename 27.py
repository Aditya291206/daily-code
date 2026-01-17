import random

secret_number = random.randint(1, 10)
guess = 0

print("Guess a number between 1 and 10")

while guess != secret_number:
    guess = int(input("Your guess: "))

    if guess < secret_number:
        print("Too low")
    elif guess > secret_number:
        print("Too high")
    else:
        print("Correct!")
