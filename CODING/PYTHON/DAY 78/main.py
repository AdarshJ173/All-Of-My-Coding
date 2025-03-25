# Single Inheritance

# Single inheritance is a type of inheritance where a class inherits properties and behaviors from a single parent class.
# This is the simplest and most common form of inheritance.

# The syntax for a single inheritance in Python is straightforward and easy to understand.
# To create a new class that inherits from a parent class, simply specify the parent class in the class definition,
# inside the parameters, like this:

class Animal:
    # The constructor of the Animal class, which initializes the name and species attributes.
    def __init__(self,name,species):
        self.name = name
        self.species = species
    
    # A method that prints a message indicating that a sound is being made by the animal.
    def make_sound(self):
        print("Sound made by the animal")

# The Dog class inherits from the Animal class, allowing it to access the properties and methods of the Animal class.
class Dog(Animal):
    # The constructor of the Dog class, which initializes the name and breed attributes,
    # and calls the constructor of the Animal class to initialize the name and species attributes.
    def __init__(self, name, breed):
        Animal.__init__(self,name,species="Dog")
        self.breed = breed
    
    # A method that overrides the make_sound method of the Animal class,
    # and prints a message indicating that a bark is being made.
    def make_sound(self):
        print("Bark")

# An instance of the Dog class is created, and the make_sound method is called.
d = Dog("Dog","Doggerman")
d.make_sound()

# An instance of the Animal class is created, and the make_sound method is called.
a = Animal("Dog","Dog")
a.make_sound()

# The Cat class inherits from the Animal class, allowing it to access the properties and methods of the Animal class.
class Cat(Animal):
    # The constructor of the Cat class, which initializes the name and family attributes,
    # and calls the constructor of the Animal class to initialize the name and species attributes.
    def __init__(self, name, family):
        Animal.__init__(self,name,species="Cat")
        self.family = family
    
    # A method that overrides the make_sound method of the Animal class,
    # and prints a message indicating that a meow is being made.
    def make_sound(self):
        print("Meow")

# An instance of the Cat class is created, and the make_sound method is called.
c = Cat("Cat","Pussy")
c.make_sound()