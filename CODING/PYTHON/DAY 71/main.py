# dir, __dict__ and help method in Python 
# Object Introspection

'''
we must look into dir(),__dict__() and help() attribute/methods in python. They make it easy for us to understand how classes resolve various functions and executes code. In python, there are three built-in function that are commonly used to get information about objects:dir,dict,and help().

The dir() method
dir():The dir() function returns a list of all the attributes and methods (including dunder methods) available for ann object. It is a useful tool for discovering what you can do with an object.
'''

x = [1,2,3]
# print(dir(x))

y = (1,2,3)
# print(dir(y))

'''
['__add__', '__class__', '__class_getitem__', '__contains__', '__delattr__', '__delitem__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__getitem__', '__getstate__', '__gt__', '__hash__', '__iadd__', '__imul__', '__init__', '__init_subclass__', '__iter__', '__le__', '__len__', '__lt__', '__mul__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__reversed__', '__rmul__', '__setattr__', '__setitem__', '__sizeof__', '__str__', '__subclasshook__', 'append', 'clear', 'copy', 'count', 'extend', 'index', 'insert', 'pop', 'remove', 'reverse', 'sort']

['__add__', '__class__', '__class_getitem__', '__contains__', '__delattr__', '__delitem__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__getitem__', '__getstate__', '__gt__', '__hash__', '__iadd__', '__imul__', '__init__', '__init_subclass__', '__iter__', '__le__', '__len__', '__lt__', '__mul__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__reversed__', '__rmul__', '__setattr__', '__setitem__', '__sizeof__', '__str__', '__subclasshook__', 'append', 'clear', 'copy', 'count', 'extend', 'index', 'insert', 'pop', 'remove', 'reverse', 'sort']
['__add__', '__class__', '__class_getitem__', '__contains__', '__delattr__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__getitem__', '__getnewargs__', '__getstate__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__iter__', '__le__', '__len__', '__lt__', '__mul__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__rmul__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', 'count', 'index']
'''
print(x.__add__)

#The __dict__ attribute
'''
The __dict__ attribute returns a dictionary representation of an object's attributes. It is a useful tool for introspection 
'''
class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age
        self.version = 1

p = Person("Adarsh",17)
print(p.__dict__)

#The help() method
'''
The help() method displays the documentation of a function, class, or module.
''' 
print(help(Person))

















































