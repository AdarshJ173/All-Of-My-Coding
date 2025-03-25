'''IF __name__ == "__main__" IN PYTHON'''

'''
This is a common idiom in Python that is used to ensure that a certain block of code is only executed when the script is run directly, and not when it is imported as a module.

The __name__ variable is a built-in variable in Python that contains the name of the current module. When a module is run directly, its __name__ is set to "__main__".

So, the line if __name__ == "__main__": is a conditional statement that checks whether the current module is being run directly or imported as a module. If it is being run directly, the code inside the if block is executed.

Here's an example to illustrate this:


def my_function():
    print("This is a function.")

if __name__ == "__main__":
    print("This is the main module.")
    my_function()
In this example, when you run the script directly, it will print "This is the main module." and then call the my_function(). However, if you import this module in another script, it will not print anything and the my_function() will not be called.

'''

import adarsh
adarsh.welcome()

# here the output is 2 times ( if __name__ == "__main__" is not written in adarsh.py), one from adarsh and another from adarsh.welcome() function, but we dont want that right, and so to solve that we use '''IF __name__ == "__main__" IN PYTHON'''







