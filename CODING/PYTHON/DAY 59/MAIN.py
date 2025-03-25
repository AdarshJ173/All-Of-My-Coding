#Decorators in Python
'''
Python decorators are powerful and variable tool that allow you to modify the behaviour of functions and methods. They are a way to extend the functionallity of a function or method without modifying its source code.
A decorator is a function that takes another function as an argument and returns a new function that modifies the behaviour of the original function. The new function is often reffered to as a "decorated" function.The basic syntax for using a decorator is the following:
'''

'''
Decorators in Python are a way to add extra functionality to an existing function or method, without modifying its original source code. They are represented by the @ symbol followed by the decorator name, placed just before the function to be decorated.

A decorator is essentially a function that takes another function as its argument and returns a new function that modifies the behavior of the original function. The new function is often referred to as a "decorated" function.
'''

# A decorator function named 'greet' that takes another function as an argument
def greet(fx):
    # A nested function 'mfx' that accepts any number of arguments and keyword arguments
    def mfx(*args, **kwargs):
        # Prints "Good Morning" before calling the original function
        print("Good Morning")
        # Calls the original function with the provided arguments and keyword arguments
        fx(*args, **kwargs)
        # Prints "Thanks for using this function" after calling the original function
        print("Thanks for using this function")
    # Returns the nested function 'mfx' as the new decorated function
    return mfx

# The 'hello' function is decorated with 'greet', so 'greet' is called first,
# which then calls 'hello'
@greet
def hello():
    # Prints "Hello World"
    print("Hello World")

# A simple function that adds two numbers
def add(a, b):
    # Prints the sum of 'a' and 'b'
    print(a + b)

# Calls the decorated 'hello' function
hello() 
# or
# greet(hello)()

# Applies the 'greet' decorator to the 'add' function and then calls the decorated 'add' function
greet(add)(1, 2)

#Logging
'''
Logging is a built-in module in Python that allows you to track events in your code and report them to a file or the console. It's a powerful tool for debugging, monitoring, and understanding the behavior of your code.

Here's a basic example of how to use logging in Python:
'''
import logging

# Create a logger object
logger = logging.getLogger(__name__)

# Set the logging level
logger.setLevel(logging.DEBUG)

# Create a file handler
handler = logging.FileHandler('example.log')

# Create a logging format
formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
handler.setFormatter(formatter)

# Add the handler to the logger
logger.addHandler(handler)

# Log some messages
logger.debug('This is a debug message')
logger.info('This is an info message')
logger.warning('This is a warning message')
logger.error('This is an error message')
logger.critical('This is a critical message')
'''
In this example, we first import the logging module and create a logger object. We then set the logging level to DEBUG, which means that all messages with a level of DEBUG or higher will be logged.

Next, we create a file handler, which will write the log messages to a file called 'example.log'. We also create a logging format, which specifies how the log messages should be formatted. In this case, we include the timestamp, the name of the logger, the logging level, and the message.

We then add the handler to the logger, which tells the logger to use the file handler to write log messages.

Finally, we log some messages using the logger object. We log a message at each of the five logging levels: DEBUG, INFO, WARNING, ERROR, and CRITICAL.

Logging is a powerful tool that can help you debug your code, monitor its behavior, and understand how it's being used. By using logging in your Python code, you can gain valuable insights into what your code is doing and how it's performing.

'''

# Total code Explanation
'''
Decorators:
Decorators in Python are functions that take another function as their argument and extend or modify the behavior of this function without explicitly modifying it. In the code, there are two functions greet and hello that demonstrate the use of decorators.

greet is a decorator function that takes another function as an argument and returns a new function mfx. This new function mfx prints "Good Morning" before calling the original function, and "Thanks for using this function" after calling the original function.
hello is a function that is decorated with greet. When hello is called, greet is executed first, which then calls hello.
There's also an example of applying the greet decorator to a simple function add that adds two numbers. The greet decorator is applied to add and then the decorated add function is called with arguments 1 and 2.

Logging:
Logging is a built-in module in Python that allows you to track events in your code and report them to a file or the console. It's a powerful tool for debugging, monitoring, and understanding the behavior of your code.

In the provided code, the logging module is imported and a logger object is created. The logging level is set to DEBUG, meaning all messages with a level of DEBUG or higher will be logged. A file handler is created to write the log messages to a file called 'example.log'. A logging format is also created, which specifies how the log messages should be formatted. Finally, some messages are logged using the logger object at different logging levels.

In summary, the code demonstrates the use of decorators to modify the behavior of functions and the use of the logging module to track events in the code.

'''












