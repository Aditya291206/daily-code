import csv

with open("people.csv", "a", newline="") as file:
    writer = csv.writer(file)
    writer.writerow(["Frank", 40, "Tokyo"])
