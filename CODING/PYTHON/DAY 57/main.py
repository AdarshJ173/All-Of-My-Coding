# PYTHON CLASSES AND OBJECTS

class Person:
    name = "Adarsh"
    occupation = "Programmer."
    networth = "10000000000000000"
    def info(self):
        print(f"{self.name} is a {self.occupation}")



# to make a new person

a = Person()
b = Person()
c = Person()

a.name = "subham"
a.occupation = "an Accountant"
# print(a.name,a.occupation)

b.name = "Sarika"
b.occupation = "HR Manager"


a.info()
b.info()
c.info()

#Self Parameter

'''
The self Parameter in Python:
In Python, self is a conventionally used parameter in class methods that refers to the instance of the class. It is used to access variables and methods of the class.

When a method is called on an instance of a class, Python automatically passes the instance as the first argument to the method. This argument is conventionally referred to as self.

Here's an example:


class MyClass:
    def my_method(self):
        print("Hello!")

obj = MyClass()
obj.my_method()  # Output: Hello!
In this example, when obj.my_method() is called, Python automatically passes obj as the first argument to my_method(), which is referred to as self inside the method.

The self parameter is used to:

Access instance variables: self is used to access variables that are specific to each instance of the class.
Call other methods: self is used to call other methods within the same class.
Modify instance state: self is used to modify the state of the instance.
Here's an example:


class Person:
    def __init__(self, name):
        self.name = name

    def greet(self):
        print(f"Hello, my name is {self.name}!")


p = Person("John")
p.greet()  # Output: Hello, my name is John!
In this example, self is used to access the name instance variable and to call the greet method.

Note: self is not a keyword in Python, but it's a conventionally used name for the instance parameter. You could use any other name, but self is widely used and accepted as the standard.
'''


























