# Inheritance

'''
When a class derives from another class. The child class will inherit all the public an protected properties and methods from the parent class. In addintion, it can have its own properties and methods, this is called as inheritance.
'''
class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id
    def showDetails(self):
        print(f'The name of of Employee: {self.id} is {self.name}')

class Programmer(Employee):
    def showLanguage(self):
        super().showDetails()
        print("The default language is Python")

class Skills(Programmer):
    def showSkills(self):
        super().showLanguage()
        print("The Skill is Communnication Skills")

e1 = Employee("Rohan","235")
e1.showDetails()
# e2 = Employee("Adarsh","346")
# e2 = Programmer("Adarsh","346")
e2 = Skills("Adarsh","346")
e2.showDetails()
e2.showLanguage()
e2.showSkills()

'''
Tpes of Inheritance:
1.single inheritance
2.multiple inheritance
3.multilevel inheritance
4.hybrid inheritance
5.hierarchial inheritance
'''






































