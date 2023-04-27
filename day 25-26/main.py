from cs50 import SQL
from rich import print


# Download shows.db database file from here - https://github.com/cs50/lectures/blob/2022/fall/7/src7/imdb/shows.db
# I've ignored that file because it is too big in size to upload.

db = SQL("sqlite:///shows.db")

year = input("Which year's data do you want? ")
column = input("What do you want? ")

try:
    rows = db.execute(f"select '{column}' from shows where year = {year} limit 100")
    for row in rows:
        print(row)

except Exception as e:
    print(end="")
