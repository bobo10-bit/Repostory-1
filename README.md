This project is used to calculate the user's year-end balance. It requires the user to input the initial investment amount, monthly deposit amount, annual interest, and the number of years.  
Using this information it makes two tables. One of the tables shows the balance by the end of the year and the interest gained by the end of the year without a monthly deposit. The other 
table shows the balance by the end of the year and the interest gained by the end of the year with monthly deposits. 

For this project, I especially did well on error checking. If the user didn't enter a proper number such as a negative number or inputted a letter or word instead it outputs an error. I 
have also done a good job at making sure that the table lines up properly. This means that each of the values always lines up and doesn't have extra spaces.

One part of the code I could enhance is the error outputting. If a user enters a word then it outputs multiple of the same error message. This is because it outputs an error message every
time there is a character. One way I can solve this is by using a getline() to get the full line and then changing the string to an int to calculate the values. This can allow the output 
for the user to look more clean because there is just one error message instead of multiple.

The most challenging part of the project is lining up the values for the table. This was challenging because I had to try multiple things to try to line up the values no matter the length 
of the values. The way I have solved this is by using a setprecision() and subtracting the next value so that they line up.

One skill that is transferable is error checking. This can be used in many other projects which can help prevent the program from crashing and just allow the user to enter a proper value. 
Another skill that is transferable is the use of files. This project uses many files to run the project. This can help in other projects because the larger the project the more files are 
going to be useful.

This project was made readable and maintainable by making each part modular. I did this by making each function do one specific thing in the program. This makes the program a lot more 
readable and adaptable by making it easier to make changes and make it easier to find that each function does.
