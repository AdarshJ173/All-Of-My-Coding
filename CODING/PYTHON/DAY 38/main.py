'''RAISING CUSTOM ERRORS IN PYTHON'''

# in python we can raise custom error by using the function raise keywords.

'''
In Python, raising custom errors allows you to create and raise your own custom exceptions that can be caught and handled by your code. Custom errors provide a way to communicate specific error conditions and provide more context to the user or developer.

To raise a custom error in Python, you can create a new class that inherits from the built-in Exception class. This new class represents your custom error. Here's an example:

Copy
Insert
class CustomError(Exception):
    pass

# Raising the custom error
raise CustomError("This is a custom error")
In this example, CustomError is a new class that inherits from Exception. You can customize the behavior of your custom error by adding methods and attributes to the class.

When you raise the custom error using raise CustomError("This is a custom error"), it will raise an instance of CustomError with the specified error message.

You can catch and handle custom errors using try-except blocks:

Copy
Insert
try:
    raise CustomError("This is a custom error")
except CustomError as e:
    print("Caught a custom error:", str(e))
In this example, the try block contains the code that might raise the custom error. The except block catches the custom error and prints the error message.

Raising custom errors allows you to provide more specific and meaningful error messages that are relevant to your application's needs. This helps in debugging and improving the overall error handling and reporting in your code.

'''

a = int(input("Enter a number between 1 and 10 : "))
# if i input and string in the input section then it will throw an error - this is known as pythons inbuilt exception/error.

# if (a<1 or a>10):
#     raise ValueError("Enter a number between 1 and 10")

if a == "quit":
    print("The Program is ended")
elif a < 1 or a > 10:
    raise ValueError("Enter a number between 1 and 10")
else:
    print("The number is", a)


# Defining Custom Exceptions
# In python , we can define custom exceptions by creating a new class that is derived from the built in exception class.

'''

class customerror(Exception):
    #code...
    pass

try:
    #code...

except customerror:
    #code...

'''

# this is useful sometimes we might want to do something when a particular exception is raised. For example, sending an error report to the admin, calling an api, etc.








