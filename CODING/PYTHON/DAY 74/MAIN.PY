# Method Overriding in Python

# Method overriding is a powerful feature in object-oriented programming that allows you to redefine a method in a derived class.
# The method in the derived class is said to override the method in the base class.
# When you create an instance of the derived class and call the overridden method,
# the version of the method in the derived class is executed, rather than the version in the base class.

class Shape:
    # Initialize the Shape class with x and y coordinates
    def __init__(self, x, y):
        self.x = x 
        self.y = y

    # Calculate the area of the shape
    def area(self):
        return self.x * self.y

# Create a Circle class that inherits from the Shape class
class Circle(Shape):
    # Initialize the Circle class with a radius
    def __init__(self, radius):
        self.radius = radius

    # Override the area method to calculate the area of a circle
    def area(self):
        return 3.14 * self.radius * self.radius

# Create a Shape object with x = 3 and y = 5
rec = Shape(3, 5)
# Print the area of the Shape object
print(rec.area())

# Create a Circle object with radius = 5
c = Circle(5)
# Print the area of the Circle object
print(c.area())