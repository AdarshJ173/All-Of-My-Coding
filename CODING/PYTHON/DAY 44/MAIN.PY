'''How Import Works In Python'''

'''
In Python, the import statement is used to include functionality from other modules or libraries into your own code. It allows you to reuse code written by others and access the functions, classes, and variables defined in those modules.

Here's a brief explanation of how import works in Python:

Importing a Module: You can import an entire module using the import statement followed by the name of the module. For example, to import the math module, you would use import math. This allows you to access all the functions, classes, and variables defined in the math module.
Accessing Functionality: Once you have imported a module, you can access its functionality using dot notation. For example, to use the sqrt() function from the math module, you would write math.sqrt().
Importing Specific Items: You can also import specific items from a module using the from keyword followed by the module name and the item you want to import. For example, to import only the sqrt() function from the math module, you would use from math import sqrt. This allows you to directly access the sqrt() function without the need for the module name.
Aliasing: You can also give an imported module or item an alias using the as keyword. This allows you to use a different name for the imported module or item. For example, import math as m would import the math module and give it the alias m.

'''

import math 

import math as m

from math import pi

# from math import *  # not preferred bcz it will lead to confusion - specificity helps a lot in this case

from math import sqrt as s

math.floor(4.54515)

result = s(684) * pi
print(result)

'''DIR FUNCTION'''

print(dir(math))

print(math.nan, type(math.nan))


# importing own modules from same or other files 
from main2 import aaj, adarsh

aaj()
print(adarsh)

# if 

import main2 as aj
# then
aj.aaj()
print(aj.adarsh)
