# Multilevel inheritance

'''
Multilevel inheritance is a type of inheritance in object oriented programming where a derived class inherits from another derived class. This type of inheritance allows you to build a hierarchy of classes where one class builds upon another, leading to a more specialized class.
It is achieved by using the class hierarchy.
'''

# Animal class with name and species attributes, and a show_details method
class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species
        
    def show_details(self):
        print(f"Name: {self.name}")
        print(f"Species: {self.species}")

# Dog class inheriting from Animal, with an additional breed attribute and show_details method
class Dog(Animal):
    def __init__(self, name, breed):
        Animal.__init__(self, name, species="Dog")
        self.breed = breed
        
    def show_details(self):
        Animal.show_details(self)
        print(f"Breed: {self.breed}")

# GoldenRetriever class inheriting from Dog, with an additional color attribute and show_details method
class GoldenRetriever(Dog):
    def __init__(self, name, color):
        Dog.__init__(self, name, breed="Golden Retriever")
        self.color = color
        
    def show_details(self):
        Dog.show_details(self)
        print(f"Color: {self.color}")

# Creating a Dog object and calling the show_details method
o = Dog("tommy", "Black")
o.show_details()

# Printing the method resolution order (MRO) for the GoldenRetriever class
print(GoldenRetriever.mro())

'''
This code demonstrates multilevel inheritance in object-oriented programming using Python.

Class Hierarchy
The code defines three classes: Animal, Dog, and GoldenRetriever. The hierarchy is as follows:

Animal is the base class.
Dog is a derived class that inherits from Animal.
GoldenRetriever is a derived class that inherits from Dog.
Class Definitions
Animal Class
The Animal class has:

An __init__ method that initializes the object with name and species attributes.
A show_details method that prints the name and species attributes.
Dog Class
The Dog class inherits from Animal and has:

An __init__ method that initializes the object with name and breed attributes. It also calls the Animal class's __init__ method to set the species attribute to "Dog".
A show_details method that calls the Animal class's show_details method and then prints the breed attribute.
GoldenRetriever Class
The GoldenRetriever class inherits from Dog and has:

An __init__ method that initializes the object with name and color attributes. It also calls the Dog class's __init__ method to set the breed attribute to "Golden Retriever".
A show_details method that calls the Dog class's show_details method and then prints the color attribute.
Object Creation and Method Call
The code creates a Dog object named o with the name "tommy" and breed "Black". It then calls the show_details method on the object, which prints the details of the dog.

Method Resolution Order (MRO)
Finally, the code prints the method resolution order (MRO) for the GoldenRetriever class using the mro() method. This shows the order in which Python searches for methods in the class hierarchy.
'''





























































