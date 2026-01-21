def check_balance(balance):
    print(f"Your current balance is: ₹{balance}")

def deposit(balance):
    amount = float(input("Enter amount to deposit: ₹"))
    if amount <= 0:
        print("Invalid deposit amount.")
        return balance
    balance += amount
    print(f"₹{amount} deposited successfully.")
    return balance

def withdraw(balance):
    amount = float(input("Enter amount to withdraw: ₹"))
    if amount <= 0:
        print("Invalid withdrawal amount.")
    elif amount > balance:
        print("Insufficient balance.")
    else:
        balance -= amount
        print(f"₹{amount} withdrawn successfully.")
    return balance

def atm():
    balance = 1000  # initial balance

    while True:
        print("\n--- ATM Menu ---")
        print("1. Check Balance")
        print("2. Deposit")
        print("3. Withdraw")
        print("4. Exit")

        choice = input("Choose an option: ")

        if choice == "1":
            check_balance(balance)

        elif choice == "2":
            balance = deposit(balance)

        elif choice == "3":
            balance = withdraw(balance)

        elif choice == "4":
            print("Thank you for using the ATM. 💳")
            break

        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    atm()
