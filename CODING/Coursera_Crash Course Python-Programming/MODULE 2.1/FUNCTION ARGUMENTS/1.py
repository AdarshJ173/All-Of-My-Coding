def greet():
    print("hello bacha")

greet()

def operations(a,b):
    print("the sum is: ", a+b)

operations(3,4)
operations(345,363)

def op(a,b,c,d):
    print(a+b-c+d)

op(1,2,3,4)

'''REQUIRED ARGUMENTS'''
# IF def avg(a,b,c=1): 
# IN CASE WE DONT PASS THE ARGUMENTS WITH A KEY = VALUE SYNTAX, THEN IT IS NECESSARY TO PASS THE ARGUMENTS IN THE CORRECT POSITIONAL ORDER AND THE NUMBER OF ARGUMENTS PASSED SHOULD MATCH WITH ACTUAL FUNCTION DEFINITION.

def avg(a,b,c=1):
    print(a+b+c)

avg(4,3)
avg(4,3,2)

def MyName():
    # print("Adarsh")
    return(958)

MyName()
print(MyName())
