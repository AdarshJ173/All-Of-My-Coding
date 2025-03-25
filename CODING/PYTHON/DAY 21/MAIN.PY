'''FUNCTION ARGUMENTS'''

'''
TYPES OF ARGUMENTS
1.DEFAULT ARGUMENTS
2.KEYWORD ARGUMENTS
3.VARIABLE LENGTH ARGUMENTS
4.REQUIRED ARGUMENTS
'''

def avg(a=3,b=6): #here a and b are given a default value and so they are default arguments , so they will be used by default if there is no custom argument provided
    print("the avg is ", (a+b)/2)

avg(1,4)
# here i have given a custom argument , and so this will be executed rather then the default one , bcz i have provided the value i need - i dont want the default one.

'''KEYWORD ARGUMENTS'''
# WE CAN PROVIDE ARGUMENTS WITH KEY = VALUE , THIS WAY THE INTERPRETER RECOGNIZES THE ARGUMENTS BY THE PARAMETER NAME.HENCE, THE ORDER IN WHICH THE ARGUMENT ARE PASSED DOES NOT MATTER
avg(b = 42, a =23)

'''REQUIRED ARGUMENTS'''
# IF def avg(a,b,c=1): 
# IN CASE WE DONT PASS THE ARGUMENTS WITH A KEY = VALUE SYNTAX, THEN IT IS NECESSARY TO PASS THE ARGUMENTS IN THE CORRECT POSITONAL ORDER AND THE NUMBER OF ARGUMENTS PASSED SHOULD MATCH WITH ACTUAL FUNCTION DEFINATION.
avg(5,6)


'''VARIABLE LENGTH ARGUMENTS '''

def average(*numbers):
    print(type(numbers))
    sum = 0
    for i in numbers:
        sum = sum +i
    print("average is :", sum / len(numbers))
    return sum/len(numbers)

average(2,5)

c = average(5,5,6,4)
print (c)

# return STATEMENT IS USED TO return THE VALUE OF THE EXPRESSION BACK TO THE CALLING FUCNTION 
