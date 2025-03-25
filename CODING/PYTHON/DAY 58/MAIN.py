#Constructors

# A constructor is aspecial method in a class used to create and initilalize an object of a class. There are different types of constructors. Constructor is invoked automaticallty when an object of a class is created.
#A constructor is unique function that gets called automatically when an object is created of a class. The main purpose of a constructor is to initialize or assign values to the data members of the class. It cannot return any value other than None.

# A class definition for Person
class Person:
    # A special method in a class used to create and initialize an object of a class
    def __init__(self, n, o):
        # Prints a message when an object of the class is created
        print("Hey I am a Person")
        # Initialize the name attribute of the object
        self.name = n
        # Initialize the occupation attribute of the object
        self.occ = o

    # A method that prints out the person's information
    def info(self):
        # Use an f-string to format the output string
        print(f"{self.name} is a {self.occ}")

# Create an object of the Person class named a
a = Person("Adarsh", "Programmer")
# Create another object of the Person class named b
b = Person("Divya", "HR")
# Call the info method on object b
b.info()

# c = Person() # this will throw an error as it misses two positional arguments
# d = Person(1,2,3) # this will throw an error as we gave it 4 arguments[i.e 1,2,3 & another time when we call self]

# b = person()
# print(a.name)
# a.name = "Divya"
# a.occ = "HR"

# a.info()  


'''
This code defines a class in Python called Person. A class is a blueprint for creating objects in object-oriented programming. The Person class has a constructor method __init__ which is used to initialize objects of this class. The constructor takes three parameters: self, n, and o. self is a reference to the instance of the class that is created, and n and o are the name and occupation of the person, respectively.

When an object of the Person class is created, the constructor is automatically called. It prints the string "Hey I am a Person", and then sets the name and occ attributes of the object to the values passed in as n and o.

The Person class also has a method called info which takes no arguments and prints out the name and occupation of the person.

In the code, two objects of the Person class are created: a and b. a is a person named "Adarsh" who is a "Programmer", and b is a person named "Divya" who is an "HR". The info method is then called on b, which prints out "Divya is an HR".

Note that if we try to create an object of the Person class without passing in the required arguments, or if we pass in too many arguments, an error will be thrown.
'''




























