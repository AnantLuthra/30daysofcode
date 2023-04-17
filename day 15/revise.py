from sys import argv
from rich import print
from sys import exit

words = set()

def check(word: str):
    if word.lower() in words:
        return True
    else:
        return False
    
def load(dictionary):
    with open(dictionary, "r") as f:
        for i in f:
            i = i.rstrip()
            words.add(i)

def size():
    return len(words)

def loop():
    data = {"hi": 2, "hii": 3, "hiii": 4}
    
    data = {"hi": 2, "hii": 3, "hiii": 4}

    for i in "2000":
        print(f"hii {i}")

    for i, values in data.items():
        print(i, values)

    print("-----------")

    list1 = [1, 2, 3, 4]

    for i in list1, range(5), [40, 50, 60], data:
        print(f"Hi {i}")

    for i in list1:
        print(f"value is {i}")
        list1.append("10" + "20")
        if len(list1) > 10:
            break
    
def permission():
    """This function asks for the permission of the user"""
    answer = input("Do you agree? ").lower()
    if answer in ["yes", "y"]:
        print("Agreed")
    elif answer in ["no", "n"]:
        print("Dinied")

def output():
    """Function for printing n times '?'"""
    print("?" * int(input("Enter the number of times you wanna print out '?'")))

def print_upper(name: str) -> None:
    print(f"After: {name.upper()}")

def prin_args():
    """Function for printing all given arguments except the file name itself"""
    for _ in argv[1:]:
        print(_)


def ex_w_code():
    """Printing arguements,(handling correctly), also exiting with exit code"""
    if len(argv) != 2:
        print("Incomplete command-line argument")
        exit(1)
    else:
        print(f"Hello, {argv[1]}")
        exit(0)


if __name__ == "__main__":
    # load(dictionary="dictionary.txt")
    # print(size())
    loop()

    # permission()
    # output()
    # print_upper(input("What is your name? "))
    # prin_args()

    # print(":100:", ":boy:")
    # ex_w_code()