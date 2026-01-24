import csv

with open("output.csv", "w", newline="") as file:
    writer = csv.writer(file)
    writer.writerow(["name", "age", "city"])
    writer.writerow(["Charlie", 28, "Berlin"])
