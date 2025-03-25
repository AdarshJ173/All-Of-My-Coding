# OPERATORS 
# ARITHMETIC OPERATORS
'''
ADDITION : +
SUBTRACTION : -
MULTIPLICATION : *
DIVISION : / 
EXPONENTIAL : **
MODULUS : %
FLOOR DIVISION : //
'''
print(4+3)
print(4-3)
print(4*3)
print(4**3)
print(4/3)
print(4//3)
print(4%3)

# -------------------------------------------------------------------------------------------------------------------------------------
# 1st program - self made 

a = float(input("INPUT THE 1ST NUMBER: "))
b = float(input("INPUT THE SECOND NUMBER: "))
c = input("INPUT THE OPERATION { +,-,/,* }: " )

if c == '+':
    result = a+b
elif c == '-':
    result = a-b
elif c == '*':
    result = a*b
elif c == '/':
    if b == 0 :
        print("ERROR")
        result = None
    else:
        result = a/b

else:
    print("INVALID OPERATION")
    result = None

if result is not None:
    print("Result:", result)
 