def welcome():
    print("Hey my name is Adarsh, Welcome!")
    # here the output is 1 times, one from adarsh and another from adarsh.welcome() function, but we dont want that 2 times in main.py right, and so to solve that we use '''IF __name__ == "__main__" IN PYTHON'''
'''
__name__ is a special variable in Python that contains the name of the current module. When a Python script is executed, Python sets the __name__ variable for that script to "__main__" if it is being run as the main program. If the script is imported as a module into another script, the __name__ variable is set to the name of the module.

In simple terms, __name__ helps determine whether a Python file is being run directly or imported as a module into another file. This can be useful for separating code that should only run when the file is executed directly versus when it is imported into another file.
'''

print(__name__, type(__name__))

if __name__=="__main__":
    welcome()

