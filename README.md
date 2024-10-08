Description:
This C program takes a string input from the user, representing a mathematical statement, and checks if the statement contains an equal sign (=). If the statement has an equal sign, the program concludes that the statement is "solvable," otherwise, it considers the statement "not solvable."

Key Features:
Input Handling:

The program prompts the user to enter a mathematical statement as a string and stores it in the statement array.
It uses the gets() function to read the entire line. However, gets() is unsafe and should be replaced with fgets() to avoid potential buffer overflow.
Checking for Solvability:

The program uses the strchr() function from the string.h library to check if the input string contains an equal sign (=).
If the equal sign is present, the program considers the statement "solvable." Otherwise, it outputs that the statement is "not solvable."
Output:

If the statement contains an equal sign, the output will be:
"This Statement is solvable."
If the statement does not contain an equal sign, the output will be:
"This Statement not solvable."
Example Output:
Input: 2 + 2 = 4
Output: This Statement is solvable.
Input: 2 + 2
Output: This Statement not solvable.
