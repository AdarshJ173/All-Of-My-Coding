'''LOCAL AND GLOBAL VARIABLES IN PYTHON'''

'''
In programming, local variables and global variables are two different types of variables that can be used within a program.

Local variables are variables that are defined within a specific scope or block of code. They are only accessible within that particular scope and cannot be accessed outside of it. Local variables are typically used to store temporary values or variables that are only needed within a certain function or code block.

Global variables, on the other hand, are variables that are defined outside of any specific scope or block of code. They are accessible from anywhere within the program and can be accessed and modified by any part of the code. Global variables are often used to store values that need to be shared or accessed across different parts of the program.

In summary, local variables are variables that are defined within a specific scope and can only be accessed within that scope, while global variables are variables that are defined outside of any specific scope and can be accessed from anywhere within the program.
'''

x = 13
print(x)

def hello():
    x = 1
    print(f"The Local x is {x}")
    print("Hello Adarsh")

print(f"The global x is { x}")
hello()
print(f"The global x is {x}")

# This code defines a function named hello that assigns the value 1 to a local variable x, then prints the value of x along with the text "Hello Adarsh". The variable x is local to the hello function, meaning it's only accessible within the function.

x = 10 # global variable

def my_function():
    y = 5 # local variable 
    print(y)
    print(x)


x = 10 # global variable

def my_fun():
    global x
    y = 5 # local variable
    print(y)
my_fun()
print(x)
# print(y) this will throw and error because y is a local variable  which is not accessible outside of the function 

