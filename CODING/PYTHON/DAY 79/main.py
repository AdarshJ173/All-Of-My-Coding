# Multiple Inheritance

'''
Multiple inheritance is a feature in object-oriented programming that allows a class to inherit attributes and methods from multiple parent classes.
This can be useful in situations where a class needs to inherit functionality from multiple sources.
'''

class Employee:
    '''
    Employee class with a constructor that takes in a name as an argument and assigns it to the self.name attribute.
    Also contains a show method that prints out the name of the employee.
    '''
    def __init__(self,name):
        self.name = name

    def show(self):
        '''
        Method that prints out the name of the employee.
        '''
        print(f"The name is {self.name}")

class Singer:
    '''
    Singer class with a constructor that takes in a singer as an argument and assigns it to the self.singer attribute.
    Also contains a show method that prints out the name of the singer.
    '''
    def __init__(self,singer):
        self.singer = singer

    def show(self):
        '''
        Method that prints out the name of the singer.
        '''
        print(f"The singer is {self.singer}")

class SingerEmployee(Employee,Singer):
    '''
    SingerEmployee class that inherits from both the Employee and Singer classes.
    The constructor takes in both a singer and a name as arguments and assigns them to the self.singer and self.name attributes respectively.
    '''
    def __init__(self, singer,name):
        self.singer = singer
        self.name = name

o = SingerEmployee("R&B","Adarsh")
print(o.name)
print(o.singer)
o.show()

print(SingerEmployee.mro())


'''
This code demonstrates multiple inheritance in Python by creating a SingerEmployee class that inherits from both the Employee and Singer classes. The SingerEmployee class has access to the attributes and methods of both parent classes, allowing it to have both a name and a singer attribute, as well as a show method that can print out both pieces of information. The mro() method is used to print out the method resolution order, which shows the order in which Python will search for methods and attributes in the class hierarchy.
'''