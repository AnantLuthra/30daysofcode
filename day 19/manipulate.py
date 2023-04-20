import csv
from rich import print


def us_reader():
    with open("data.csv", "r") as file:
        reader = csv.reader(file)
        for _ in reader:
            print(_)
            # print(_[1])
        print("----------------------------")


def dic_reader():
    with open("data.csv", "r") as file:
        reader = csv.DictReader(file)
        scratch, c, python = 0, 0, 0
        for row in reader:
            choise = (row["language"])
            if choise.lower() == "python": python += 1
            elif choise.lower() == "scratch": scratch += 1
            elif choise.lower() == "c": c += 1
            

        print(f"Scratch: {scratch}\nPython: {python}\nC: {c}")


def rnd_w_dict(search):
    """
    Reading data from csv file and doing some analytics on
    the fetched data.
    """
    with open("data.csv", "r") as file:

        # Reading csv file's data into a dictionary
        reader = csv.DictReader(file)  
        counts = {}
        for row in reader:
            if search not in row:   # If search isn't in our data
                print("Error: Search is out of data")
                return
            
            # Calculating occourance of all items in searched field.
            choise = (row[search]) 
            if choise in counts:
                counts[choise] += 1
            else:
                counts[choise] = 1
        
        # Printing the searched results of items in searched field.
        for value in sorted(counts, key=lambda
                        option: counts[option],
                          reverse=True):
            print(f"{value}: {counts[value]}")
        

rnd_w_dict(input("What you wanna search about? "))
# dic_reader()