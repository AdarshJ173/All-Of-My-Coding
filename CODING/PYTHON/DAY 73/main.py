# Magic/Dunder methods in python

'''
These are special methods that you can define in your classes, and when involved, they give you a powerful way to manipulate objects and their behavior.

Magic methods, also known as "dunder's" from the double underscores surrounding their names, are powerful tools that allow you to customize the behavior of you classes. They are used to implement special methods such as the addition, subtraction and comparison operators, as well as some more advanced techniques like descriptions and properties.

'''

'''
class Employee:
    name = "Adarsh"
    def __len__(self):
        i = 0
        for c in self.name:
            i = i + 1
        return i'''

from emp import Employee

e = Employee()

print(str(e))
print(repr(e))

# print(e)
# print(e.name)
# print(len(e))

# __init__ method
'''The init method is a special method that is automatically involved when you create a new instance of a class. This method is responsible for setting up the objects initial state, and it is where you would typically define any instance variables that you need. Also called "constructor", we have discussed this method already'''

# __str__ and __repr__ method
''' The str and repr methods are both used to convert an object to a string representation. The str method is used when you want to print out an object, while the repr method is used  when you want to get a string representation of an object that can be used to recreate the object
'''

# __call__ method

'''The call method is used to make an object callable, meaning that you can pass it as a parameter to a function and it will be executed when the function is called. This is an incredibly powerful tool that allows you to create objects that behave like functions
These are just a few of the many magic methods available in python. They are incredibly powerful tools that allow you to customize the behavior of you objects, and can make you code much cleaner and easier to understand. So if you're looking for a way to take your python code to the next level, take some time to learn about these magic methods.
'''
e()

























































