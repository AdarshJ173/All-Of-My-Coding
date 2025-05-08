# Super Keyword in python

'''
The super() keyword in python is used to refer to the parent class. It is especially useful when a class inherits from multiple parent classes and you want to call a method form one of the parent classes
when a class inherits from a parent class, it can override or extend the methods defined in the parent class. However, sometimes you might want to use the parent class method in the child class. This is where the super() keyword comes in handy.

'''

class ParentClass:
    def parent_method(self):
        print("This is the parent method.")

class childClass(ParentClass):
    def parent_method(self):
        print("Adarsh")
    def child_method(self):
        print("This is a child method")

        super().parent_method()

child_obj = childClass()
child_obj.child_method()
child_obj.parent_method()


class Employee:
    def __init__(self,name,id):
        self.name = name
        self.id = id
class Programmer(Employee):
    def __init__(self,name,id,lang) -> None:
        self.name = name
        super().__init__(name,id)
        self.lang = lang

rohan = Employee("Rohan kumar","245")
harry = Programmer("Harry","235","Python")
print(rohan.name)
print(harry.name)
print(harry.id)
print(harry.lang)


































