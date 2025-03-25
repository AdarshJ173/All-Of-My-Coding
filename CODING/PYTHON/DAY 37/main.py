'''Finally Clause'''

#Explanation
'''
In Python, the finally clause is used in exception handling to specify a block of code that will be executed regardless of whether an exception is raised or not. It is typically used to ensure that certain cleanup operations are performed, such as closing files or releasing resources, even if an exception occurs.

The finally clause follows the try and except clauses and is used to define a block of code that will be executed regardless of whether an exception is raised or not. It is typically used to perform cleanup operations or release resources.

Here's an example to illustrate the use of the finally clause:
'''

try:
    # Code that may raise an exception
    l = [1,5,4,6,4,9,]
    i = int(input("Enter the index:"))
    print(l[i])

except Exception as e:
    # Exception handling code
    print("some error occurred ")

finally:
    # Code that will be executed regardless of whether an exception is raised or not
    print("I am always executed ")

# whats the difference between writing finally directly or just using print function without using finally...?

'''
In this example, the code inside the try block may raise an exception. If an exception is raised, the code inside the except block will be executed to handle the exception. After the exception handling is complete, the code inside the finally block will be executed, regardless of whether an exception was raised or not.

The purpose of the finally clause is to ensure that certain operations, such as closing files or releasing resources, are performed consistently, regardless of whether an exception is raised or not.
'''

















