'''ERROR/EXCEPTION HANDLING'''
# exception handling is the process of responding to unwanted or unexpected events when a computer program runs. Exception handling deals with these events to avoid the program or system crashing and without this process, exceptions would disrupt th normal operations of a program. 

'''Exceptions in Python'''
# python has many built in exceptions that are raised when your program encounters an error ( something in the program goes wrong)
# when these exceptions occur, the python interpreter stops the current process and passes it to the calling process until it is handled. if not handled, the program will crash. 

a = input("Enter your Number: ")
print(f"Table of Number {a} is : ")

try:
    for i in range (1,11):
        print(f"{int(a) } * {i} = {int(a)*i}")
except Exception as e: #except:
    print("invalid input")

# here in the input section if i input a string lets say AAJ, then i wil throw an error and AAJ is a string not a int value.
# Now if i input any other thing instead of an int value then the program will throw an error and therefore it will not execute the line below   - and so if i want to print the lines below even after the error then i will use try and except function.

print("Some IMP lines of code ")
print("End Of Program")


'''
Certainly! In Python, the try-except statement is used to handle exceptions and errors that may occur during the execution of a program. It allows you to write code that can gracefully handle potential issues and prevent the program from crashing.

Here's a simple explanation of how try-except works:

You enclose the code that might raise an exception inside a try block.
If an exception occurs within the try block, the program immediately jumps to the corresponding except block.
Inside the except block, you specify the type of exception you want to catch and handle. You can also provide a variable name to access the exception object.
If an exception occurs and matches the specified type in the except block, the code inside that block is executed, allowing you to handle the exception gracefully.
If no exception occurs, the except block is skipped, and the program continues with the next line of code after the try-except statement.
Here's a basic example to illustrate the concept:
'''

try:
    # Code that may raise an exception
    result = 10 / 0  # Division by zero (will raise a ZeroDivisionError)
    print(result)
except ZeroDivisionError:
    # Code to handle the ZeroDivisionError exception
    print("Oops! You can't divide by zero.")


'''
In this example, the code inside the try block attempts to divide the number 10 by zero, which will raise a ZeroDivisionError exception. Instead of crashing the program, the exception is caught by the except block that specifically handles ZeroDivisionError. The message "Oops! You can't divide by zero." is printed, and the program continues executing any code that follows the try-except statement.
'''