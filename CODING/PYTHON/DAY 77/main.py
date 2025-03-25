# Operator Overloading

'''
Operator overloading is a feature in Python that allows developers to redefine the behavior of mathematical and comparison operators for custom data types. This means that you can use the standard mathematical operators (+,-,*,/,etc...) and comparison operators (<,>,==,etc.) in your own classes, just as you would for built-in data types like int, float, and str.

Why do we need operator overloading?
Operator overloading allows you to create more readable and intuitive code. For instance, consider a custom class that represents a point in 2D space. You could define a method called "add" to add two points together, but using the + operator makes the code more concise and readable:
'''

class Vector:
    def __init__(self, x, y, z):
        '''
        Initialize a Vector object with x, y, and z coordinates.
        :param x: float, x-coordinate
        :param y: float, y-coordinate
        :param z: float, z-coordinate
        '''
        self.x = x
        self.y = y
        self.z = z

    def __str__(self):
        '''
        Return a string representation of the Vector object.
        :return: str
        '''
        return (f"{self.x}i + {self.y} k + {self.z} j")

    def __add__(self, i):
        '''
        Overload the '+' operator to add two Vector objects.
        :param i: Vector, the Vector object to add
        :return: Vector, the sum of the two Vector objects
        '''
        return Vector(self.x + i.x, self.y + i.y, self.z + i.z)

# Initialize two Vector objects
v1 = Vector(3, 8, 4)
v2 = Vector(1, 6, 9)

# Print the Vector objects
print(v1)
print(v2)

# Add the Vector objects using the overloaded '+' operator
print(v1 + v2)

# Print the type of the sum of the Vector objects
print(type(v1 + v2))