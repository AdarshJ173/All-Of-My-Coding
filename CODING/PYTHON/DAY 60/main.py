#Getters and Setters

'''
Getters in python are methods that are used to access the values of an object's properties. They are used to return the value of a specific property, and are typically defined using the @property decorator. Here is an example of a simple class with a getter method
'''

'''
Setters
its important to note that the getters do not take any parameter and we cannot set the value through getter method for that need setter method which can be added by decorating method with @porpert _name.setter
'''

# This class, named MyClass, is initialized with a value
class MyClass:
    def __init__(self, value):
        self._value = value

    # This method, show(), prints the current value
    def show(self):
        print(f'Value is {self._value}')

    # This is a getter method, ten_value(), which returns 10 times the current value
    @property
    def ten_value(self):
        return 10 * self._value

    # This is a setter method, ten_value(), which sets a new value by dividing it by 10
    @ten_value.setter
    def ten_value(self, new_value):
        self._value = new_value / 10

# An instance of MyClass is created with a value of 10
obj = MyClass(10)

# The ten_value property is set to 67
obj.ten_value = 67

# The ten_value property is printed
print(obj.ten_value)

# The show() method is called to print the current value
obj.show()











