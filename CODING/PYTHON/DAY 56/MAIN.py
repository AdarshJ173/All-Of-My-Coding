
#OOPs - Object Oriented Programming in Python

#CodeWithHarry
'''
Introduction to Object-Oriented Programming in Python: 
In programming languages, mainly there are two approaches that are used to write program or code.

1). Procedural Programming
2). Object-Oriented Programming

The procedure we are following till now is the “Procedural Programming” approach. So, in this session, we will learn about Object Oriented Programming (OOP). The basic idea of object-oriented programming (OOP) in Python is to use classes and objects to represent real-world concepts and entities.

A class is a blueprint or template for creating objects. It defines the properties and methods that an object of that class will have. Properties are the data or state of an object, and methods are the actions or behaviors that an object can perform.

An object is an instance of a class, and it contains its own data and methods. For example, you could create a class called "Person" that has properties such as name and age, and methods such as speak() and walk(). Each instance of the Person class would be a unique object with its own name and age, but they would all have the same methods to speak and walk.

One of the key features of OOP in Python is encapsulation, which means that the internal state of an object is hidden and can only be accessed or modified through the object's methods. This helps to protect the object's data and prevent it from being modified in unexpected ways.

Another key feature of OOP in Python is inheritance, which allows new classes to be created that inherit the properties and methods of an existing class. This allows for code reuse and makes it easy to create new classes that have similar functionality to existing classes.

Polymorphism is also supported in Python, which means that objects of different classes can be treated as if they were objects of a common class. This allows for greater flexibility in code and makes it easier to write code that can work with multiple types of objects.

In summary, OOP in Python allows developers to model real-world concepts and entities using classes and objects, encapsulate data, reuse code through inheritance, and write more flexible code through polymorphism.
'''

#Detailed Explanation


# Object-oriented programming (OOP) is a programming paradigm that uses "objects" to represent and manipulate data. It allows you to group data and the functions that operate on that data into classes. Here are some key concepts:

# Classes: A class is a blueprint or template for creating objects. It defines the attributes (data) and methods (functions) that objects created from the class will have. For example:


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")


# Objects: Objects are instances of a class. They are created using the new keyword in some languages, but in Python, you simply call the class as if it were a function. For example:

person1 = Person("John", 25)
person1.display()  # Outputs: Name: John, Age: 25


# Inheritance: Inheritance is a way to create a new class based on an existing one, with the ability to add or override methods. The new class is called the child or derived class, and the existing class is called the parent or base class. For example:

class Student(Person):
    def __init__(self, name, age, grade):
        super().__init__(name, age)
        self.grade = grade

    def display(self):
        super().display()
        print(f"Grade: {self.grade}")

student = Student("Alice", 17, 10)

#Simple Explanation
'''
Imagine you have a blueprint for a car. The blueprint has instructions on how to build the car, like what parts to use and how to put them together. Now, let's say you want to make a new car, but you want it to be a little different. You can make a new blueprint based on the original one, but you can also add or change some instructions. This is called inheritance.

Now, let's say you have a blueprint for a person. It has instructions on how to build a person, like what name and age to give them. You can make a new person by following the instructions in the blueprint. This is called creating an object.

So, object-oriented programming is a way to make things (like cars and people) using blueprints (classes), and to make new blueprints based on existing ones (inheritance).
'''


# RailwayForm ----------> Class [Blueprint]
# harry ---------> his form of info ------> object[entity]
# tom ---------> his form of info ------> object[entity]
# dhruv ---------> his form of info ------> object[entity]











