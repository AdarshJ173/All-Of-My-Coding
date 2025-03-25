a = 10
b = 20

sum = a+b
print(sum)

str("adarsh")

difference = a-b
print(difference)

def addition(no1,no2):
    return no1+no2

addition(5,6)
addition(54,847)

# creating class 
class Student:
    Full_name = "Karan johar"

# creating object (instance) 
s1 = Student()
print(s1)
print(s1.Full_name)

s2 = Student()
print(s2.Full_name)

# in a factory we are going to manufacture cars 
class Car:
    Color = "White"
    Brand = "Rolls Royce"

car1 = Car()
print(car1.Color)
print(car1.Brand)

class student:
    name = "Zehra"
    def __init__(self):
        # print(self) 
        print("Adding a new student in database...")

st1 = student()
print(st1) 

st2 = student()
print(st2)

# CREATING A CLASS 
class GirlFriends:
    def __init__(self,fullname):
        # self.name = fullname
        self.fullname = fullname 
        # self.name = name {general used syntax}

gf1 = GirlFriends("Nora")
print(gf1.fullname)

gf2 = GirlFriends("Kajal Agarwal")
print(gf2.fullname)

'''
the self parameter is a reference to the current instance of the class , and is used to access variables that belongs to the class 
'''

class Jadiye_tere_marks:
    def __init__(self,name,marks):
        self.name = name
        self.marks = marks
        print("Jadiye ye tere marks hn")

jhatu1 = Jadiye_tere_marks("Adarsh Std", 720)
jhatu2 = Jadiye_tere_marks("AAJ",69)
jhatu3 = Jadiye_tere_marks("Subham",84)
jhatu4 = Jadiye_tere_marks("Sibu",6969)
jhatu5 = Jadiye_tere_marks("Sajan", 0.69)
# anshuman is not a jhatu - he is a good boy


print("Name:", jhatu1.name,"---" "Marks:", jhatu1.marks)
print("Name:", jhatu2.name,"---" "Marks:", jhatu2.marks)
print("Name:", jhatu3.name,"---" "Marks:", jhatu3.marks)
print("Name:", jhatu4.name,"---" "Marks:", jhatu4.marks)
print("Name:", jhatu5.name,"---" "Marks:", jhatu5.marks)


class blablabla:
    # default constructor
    def __init__(self):
        pass

    # parameterized constructors 
    def __init__(self,bla):
        self.bla = bla

    

#b1 = blablabla() # the constructor with which the parameters are matched is called

b2 = blablabla("balalbalalaba") # the constructor with which the parameters are matched is called
print(b2.bla)
# Class and Instance Attributes in Python

# Class Attributes
class Car:
    # This is a class attribute
    wheels = 4
    
    def __init__(self, make, model):
        # These are instance attributes
        self.make = make
        self.model = model

# Creating instances
car1 = Car("Toyota", "Corolla")
car2 = Car("Honda", "Civic")

# Accessing class attribute
print(Car.wheels)  # Output: 4
print(car1.wheels)  # Output: 4
print(car2.wheels)  # Output: 4

# Changing class attribute
Car.wheels = 3
print(Car.wheels)  # Output: 3
print(car1.wheels)  # Output: 3
print(car2.wheels)  # Output: 3

# Instance Attributes
print(car1.make)  # Output: Toyota
print(car2.model)  # Output: Civic

# Changing instance attribute
car1.make = "Nissan"
print(car1.make)  # Output: Nissan
print(car2.make)  # Output: Honda (unchanged)

class Student:
    # class attribute 
    collage_name = "Woxsen University"

    def __init__(self,name,branch):
        # is instance attributes 
        self.name = name
        self.branch = branch

student1 = Student("A.Adarsh Jagannath","Computer Science Engineering")
print(student1)
print(student1.name,student1.branch)
print(student1.collage_name)

student2 = Student("Naira","Business")
print(student2)
print(student2.name,student2.branch)
print(student2.collage_name)



# Explanation:
# 1. Class attributes are shared by all instances of the class.
# 2. Instance attributes are unique to each instance of the class.
# 3. Class attributes are defined outside any method in the class.
# 4. Instance attributes are typically defined inside the __init__ method.
# 5. Class attributes can be accessed using the class name or any instance.
# 6. Instance attributes are accessed using the instance name.
# 7. Changing a class attribute affects all instances, unless overridden.
# 8. Changing an instance attribute only affects that specific instance.

# class -> data(attributes)
#       -> methods

#* Methods in Object-Oriented Programming

# In OOP, methods are functions that are associated with a class and define the behaviors of objects.
# They can access and modify the object's data (attributes).

# 1. Instance Methods:
# These are the most common type of methods. They operate on instance data and can access/modify
# instance attributes. They take 'self' as the first parameter.

class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def bark(self):  # Instance method
        return f"{self.name} says Woof!"
    
    def birthday(self):  # Instance method that modifies instance data
        self.age += 1
        return f"{self.name} is now {self.age} years old."

# Usage:
dog1 = Dog("Buddy", 3)
print(dog1.bark())  # Output: Buddy says Woof!
print(dog1.birthday())  # Output: Buddy is now 4 years old.

# 2. Class Methods:
# These methods are bound to the class rather than its instances.
# They can't access instance attributes but can access class attributes.
# They use the '@classmethod' decorator and take 'cls' as the first parameter.

class Car:
    total_cars = 0  # Class attribute
    
    def __init__(self, make, model):
        self.make = make
        self.model = model
        Car.total_cars += 1
    
    @classmethod
    def get_total_cars(cls):  # Class method
        return f"Total cars: {cls.total_cars}"

# Usage:
car1 = Car("Toyota", "Corolla")
car2 = Car("Honda", "Civic")
print(Car.get_total_cars())  # Output: Total cars: 2

# 3. Static Methods:
# These methods don't have access to 'cls' or 'self'. They work like regular functions
# but belong to the class's namespace. They use the '@staticmethod' decorator.

class MathOperations:
    @staticmethod
    def add(x, y):  # Static method
        return x + y
    
    @staticmethod
    def multiply(x, y):  # Static method
        return x * y

# Usage:
print(MathOperations.add(5, 3))  # Output: 8
print(MathOperations.multiply(4, 2))  # Output: 8

# 4. Magic Methods (Special Methods):
# These are predefined methods in Python classes that have double underscores before and after their names.
# They allow you to emulate the behavior of built-in types or implement operator overloading.

class Book:
    def __init__(self, title, author, pages):
        self.title = title
        self.author = author
        self.pages = pages
    
    def __str__(self):  # Special method for string representation
        return f"{self.title} by {self.author}"
    
    def __len__(self):  # Special method to define length
        return self.pages

# Usage:
book = Book("Python Crash Course", "Eric Matthes", 544)
print(str(book))  # Output: Python Crash Course by Eric Matthes
print(len(book))  # Output: 544

# Methods provide a way to encapsulate behavior within a class, promoting code organization and reusability.
# They allow objects to interact with their own data and perform actions specific to their class.


class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def get_avg(self):
        sum = 0
        for val in self.marks:
            sum += val
        print("hi",self.name,"your avg score is : ",sum/3)

std1 = Student("Mic",[99,97,94])
std1.get_avg()

std1.name = "Michel"
std1.get_avg()

# Static Methods in Object-Oriented Programming (Python)

# Static methods are methods that belong to a class rather than an instance of the class.
# They don't have access to the instance (self) or the class (cls) as implicit first arguments.
# They are defined using the @staticmethod decorator.

# Key characteristics of static methods:
# 1. They don't modify object state or class state.
# 2. They're utility functions that are logically related to the class.
# 3. They can be called on the class itself, without creating an instance.

class MathUtility:
    @staticmethod
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    @staticmethod
    def factorial(n):
        if n == 0 or n == 1:
            return 1
        return n * MathUtility.factorial(n - 1)

# Usage of static methods:
print(MathUtility.is_prime(17))  # Output: True
print(MathUtility.is_prime(4))   # Output: False
print(MathUtility.factorial(5))  # Output: 120

# Benefits of static methods:
# 1. Namespace: They provide a way to organize functions that are related to a class.
# 2. Utility: They're useful for creating utility functions that don't need access to instance data.
# 3. Performance: They're slightly faster than instance or class methods as they don't need to instantiate an object.

# When to use static methods:
# 1. For utility functions that don't require access to instance or class state.
# 2. When you want to group related functions under a class namespace.
# 3. When you want to ensure that a method won't modify the instance or class state.

# Example: A configuration class with static methods
class Config:
    @staticmethod
    def get_api_url():
        return "https://api.example.com"
    
    @staticmethod
    def get_max_retries():
        return 3

# Usage:
print(Config.get_api_url())      # Output: https://api.example.com
print(Config.get_max_retries())  # Output: 3

# In this example, the Config class acts as a namespace for configuration-related functions.
# These static methods can be called without instantiating the Config class.

#* Decorators in Python

# Decorators are a powerful feature in Python that allow you to modify or enhance functions
# or methods without directly changing their source code. They are essentially functions
# that take another function as an argument and return a new function with some added functionality.

# Basic Decorator Example
def simple_decorator(func):
    def wrapper():
        print("Something is happening before the function is called.")
        func()
        print("Something is happening after the function is called.")
    return wrapper

@simple_decorator
def say_hello():
    print("Hello!")

# Using the decorated function
say_hello()

# Decorators with Arguments
def repeat(times):
    def decorator_repeat(func):
        def wrapper(*args, **kwargs):
            for _ in range(times):
                result = func(*args, **kwargs)
            return result
        return wrapper
    return decorator_repeat

@repeat(times=3)
def greet(name):
    print(f"Hello {name}")

greet("Alice")

# Class Decorators
class CountCalls:
    def __init__(self, func):
        self.func = func
        self.num_calls = 0
    
    def __call__(self, *args, **kwargs):
        self.num_calls += 1
        print(f"This function has been called {self.num_calls} time(s).")
        return self.func(*args, **kwargs)

@CountCalls
def say_hi():
    print("Hi!")

say_hi()
say_hi()

# Decorators are commonly used for:
# 1. Logging
# 2. Timing functions
# 3. Authentication and authorization
# 4. Caching
# 5. Error handling

# They provide a clean and reusable way to modify or extend the behavior of functions
# without changing their implementation, adhering to the Open/Closed principle of software design.


# Object-Oriented Programming Principles in Python

# 1. Abstraction
# Abstraction is hiding complex implementation details and showing only the necessary features of an object.
# It's achieved through abstract classes and interfaces.

from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
    
    def area(self):
        return 3.14 * self.radius ** 2

# Usage
circle = Circle(5)
print(f"Circle area: {circle.area()}")

# 2. Encapsulation
# Encapsulation is bundling data and methods that operate on that data within a single unit (class).
# It restricts direct access to some of an object's components.

class BankAccount:
    def __init__(self, balance):
        self.__balance = balance  # Private attribute
    
    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
    
    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
    
    def get_balance(self):
        return self.__balance

# Usage
account = BankAccount(1000)
account.deposit(500)
account.withdraw(200)
print(f"Balance: ${account.get_balance()}")

# 3. Inheritance
# Inheritance allows a class to inherit attributes and methods from another class.

class Animal:
    def __init__(self, name):
        self.name = name
    
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return f"{self.name} says Woof!"

class Cat(Animal):
    def speak(self):
        return f"{self.name} says Meow!"

# Usage
dog = Dog("Buddy")
cat = Cat("Whiskers")
print(dog.speak())
print(cat.speak())

# 4. Polymorphism
# Polymorphism allows objects of different classes to be treated as objects of a common base class.

def animal_sound(animal):
    return animal.speak()

# Usage
print(animal_sound(dog))
print(animal_sound(cat))

# These principles form the foundation of OOP, enabling code reuse, modularity, and flexibility.
