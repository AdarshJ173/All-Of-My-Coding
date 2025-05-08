# Hybrid Inheritance 

'''
Hybrid inheritance is a combination of multiple inheritance and single inheritance in object oriented programming. It is a type of inheritance in which multiple inheritance is used to inherit the properties of multiple base classes into a single derived class, and single inheritance is used to inherit the properties of the derived class into a sub-derived class.
In Python, hybrid inheritance can be implemented by creating a class hierarchy, in which a base class is inherited by multiple derived classes, and one of the derived classes is further inherited by a sub-derived class.
'''

class BaseClass:
    pass

class Der1(BaseClass):
    pass

class Der2(BaseClass):
    pass

class Der3(Der1,Der2):
    pass


# Hierarchial Inheritance 

class BaseClass:
    pass
class D1(BaseClass):
    pass
class D2(BaseClass):
    pass
class D3(BaseClass):
    pass

 






























































































