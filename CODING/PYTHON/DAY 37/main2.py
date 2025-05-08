# when we do the same thing in a function
def func1():
    try:
        l = [1,5,4,6,4,9,]
        i = int(input("Enter the index:"))
        print(l[i])
        return 1
    except Exception as e:
        print("some error occurred ")
        return 0
    finally:
        print("I am always executed ")
    # print("I am always executed ")
x = func1()
print(x)

'''
This code defines a function called func1 that does the following:

It creates a list l with some values.
It prompts the user to enter an index.
It prints the value at the specified index of the list.
It returns the value 1.
If any exception occurs during the execution of the code inside the try block, it prints "some error occurred" and returns 0.
It always prints "I am always executed".
'''