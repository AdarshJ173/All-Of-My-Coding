# Prompt user to enter the value of a
a = int(input("Enter the value of a: "))
# Prompt user to enter the value of b
b = int(input("Enter the value of b: "))
try:
    # Attempt to divide a by b
    c = a/b
    # Print the result of the division
    print("Divide a / b:", c)
except ZeroDivisionError:
    # Handle the case where division by zero occurs 
    print("\nOutput: \nFound Divide by Zero Error!")