import re

def letter_count(data: str):
    print(data.count("abcdefghijklmnoqrstuvwxyz"))
    
    letters = 0
    for i in data:
        if i.isalpha():
            letters += 1
    return letters


def check_word(data: str):
    return len(data.split(" "))

def check_sentences(data: str) -> int:
    return (data.count('?') + data.count('!') + data.count('.'))

# print(letter_count(input("Text: ")))
print(check_sentences(input("Text: ")))


print(round(23.235))
