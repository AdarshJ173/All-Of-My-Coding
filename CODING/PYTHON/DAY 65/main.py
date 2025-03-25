#Static methods in python

'''
static methods in python are methods that belong to a class rather than an instance of the class. They are defined using the @static method decorator and do not have access to the instance of the class(i.e self). They are called on the class itself, not on an instance of the class. Static method are often used to create utility funcitons that dont't need access to instance data.
'''

'''
A static method in Python is a method that belongs to a class rather than an instance of the class. It's defined using the @staticmethod decorator and does not have access to the instance of the class (i.e., self). Static methods are called on the class itself, not on an instance of the class. They are often used to create utility functions that don't need access to instance data.

Here's an example:
'''

class Maths:
    def __init__(self,num):
        self.num = num
    def addtonum(self,n):
        self.num = self.num +n
    @staticmethod
    def add(a,b):
        return a+b
    
# result = Maths.add(1,2)
# print(result)

a = Maths(5)
print(a.num)
a.addtonum(6)
print(a.num)

'''
In this example, add is a static method of the Maths class. It takes two arguments a and b, and returns their sum. We call the static method add directly on the class Maths, without creating an instance of the class.

Static methods are often used when a function doesn't need to access or modify the state of an object. They are similar to regular functions, but they have the advantage of being part of the class and can be called without creating an instance of the class.
'''







