def load(dictionary):
    with open(dictionary, "r") as f:
        data = [{"team":i.split(",")[0], "rating": int(i.rstrip().split(",")[1])} for i in f.readlines()[1:]]
    
    return data

def check():
    a = input("input: ")
    if a.isdigit():
        print("It's an integers")
    if a.isnumeric():
        print("It's an float")


# calling functions

# print(load("data.csv"))
# check()
