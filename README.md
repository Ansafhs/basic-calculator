This C program is a simple command-line calculator that performs four basic arithmetic operations: addition, subtraction, multiplication, and division. It allows users to select an operation, input two numbers, and receive the calculated result.
Key Features:

  User Interaction:
        The program prompts the user to choose an arithmetic operation by entering a corresponding number (1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division).

    Input Handling:
        After selecting an operation, the user is prompted to input two floating-point numbers.
        The program checks for division by zero and prompts the user to enter a new denominator if necessary.

    Arithmetic Operations:
        Depending on the user's choice, the program performs the selected arithmetic operation:
            Addition: Adds the two numbers.
            Subtraction: Subtracts the second number from the first.
            Multiplication: Multiplies the two numbers.
            Division: Divides the first number by the second (with error handling for zero).

    Output Formatting:
        The results are displayed with two decimal places for clarity.

    Error Handling:
        If the user inputs an invalid operation (not between 1 and 4), the program provides an appropriate error message.i
        Asks for changing the second input when the choice is division if the second input is 0 as no number can be divided with 0

        
Conclusion

This basic calculator program serves as an introductory example for learning C programming, demonstrating fundamental concepts such as user input, conditional statements, and arithmetic operations. It can be easily expanded or modified to include more features, such as additional operations or a user interface.
