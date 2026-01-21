def add_student(students, name, marks):
    students[name] = marks
    print(f"Student '{name}' added successfully.")

def calculate_average(students):
    if not students:
        return 0
    return sum(students.values()) / len(students)

def display_students(students):
    if not students:
        print("No student records found.")
        return
    print("\nStudent Records:")
    for name, marks in students.items():
        print(f"{name}: {marks}")

def main():
    students = {}

    while True:
        print("\n1. Add Student")
        print("2. Display Students")
        print("3. Calculate Average Marks")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            name = input("Enter student name: ")
            marks = float(input("Enter marks: "))
            add_student(students, name, marks)

        elif choice == "2":
            display_students(students)

        elif choice == "3":
            avg = calculate_average(students)
            print(f"Average Marks: {avg:.2f}")

        elif choice == "4":
            print("Exiting program... 👋")
            break

        else:
            print("Invalid choice. Try again.")

if __name__ == "__main__":
    main()
