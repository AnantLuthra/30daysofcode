--------
## Using sqlite3
#### commands:
  
**SQL supports many commands to access data, including:**
```
  AVG
  COUNT
  DISTINCT
  LOWER
  MAX
  MIN
  UPPER
```
- `.mode csv` - when we wanna import existing data from a csv file.
- `.import data.csv data`  - importing data from that csv file and saving that in a table.
---
## Select commands: 
- `select * from table;` - For selecting stuff from table.
- #### supported commands of sqlite3
- count() - It works like len() function in python.
- ![[Pasted image 20230421231015.png]]
- distinct() - it returns the values a time that are in a column.
- ![[Pasted image 20230421231243.png]]
- Using different functions together. 👇![[Pasted image 20230421232203.png]]
- Fetching data of another column on the basis of another column. 👇![[Pasted image 20230421233900.png]]
- `select language, count(*) from data group by language;` - fetching language and count of that from the table, also group by language(_means that we are printing one language once but calculating their occurance each time_)
- Now also changing their order as per the most occured item.![[Pasted image 20230421235721.png]]
- `select language, count(*) from data group by language order by count(*) desc limit 1;` - Getting only one top most output from the table.
---
##  Insert command: 
- INSERT INTO table (column1, column2) VALUES(..., ...);
- ---
## Update command:
- `UPDATE table SET column value WHERE condition;` 
  *Example-
	- `update data set language = "javascript" where language = "SQL";` - Updating name of language.
---
## Delete command:
- `DELETE FROM table where CONDITION`
*Example*-
- `delete from data where problem = "flying_jat";` - Deleting all those rows of data in which problem is 'flying_jat'
---
***If we don't take care of our filter while deleting our updating data in our database then we will have to pay high cost of that, so we should have create backup of our data and also be very attentive while using sql-queries.***