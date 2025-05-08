'''RECURSION'''

# RECURSION IS THE PROCESS OF DEFINING SOMETHING IN TERMS OF ITSELF.
# it is simply calling the function in itself

# factorial of 7 = 7*6*5*4*3*2*1
# ...
# ..
# .
# factorial of 1 = 1
# factorial of 0 = 1

def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n * factorial(n-1) #here we called the same function with different argument 
    
user_input = int(input("Enter your number : "))
print(f"The factorial of {user_input} is :", factorial(user_input))

# khud likha h bc code mene , matlab user_input wala pura scene

'''Fibonacci Sequence'''
# In mathematics, the Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones. Numbers that are part of the Fibonacci sequence are known as Fibonacci numbers, commonly denoted Fn . The sequence commonly starts from 0 and 1, although some authors start the sequence from 1 and 1 or sometimes (as did Fibonacci) from 1 and 2. Starting from 0 and 1, the sequence begins 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

# write a program on it

'''
f(0) = 0
f(1) = 1
f(2) = f(1) + f(0)
f(n) = f(n-1) + f(n-2)
'''
def fbnc_seq(n):
    if( n==0 ):
        return 0
    elif n==1:
        return 1
    else:
        return fbnc_seq(n-1) + fbnc_seq(n-2)

try:
    user_input = int(input("Enter your Fibonacci number: "))
    if user_input < 0:
        print("Please enter a non-negative integer.")
    else:
        result = fbnc_seq(user_input)
        print(f"The Fibonacci result of {user_input} is: {result}")
except ValueError:
    print("Invalid input. Please enter a valid integer.")