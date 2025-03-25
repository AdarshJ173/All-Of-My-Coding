a = int(input())
b = int(input())
c = input()
def calculator(a,b,c):

    if c == '+':
        print(a+b)
    elif c == '-':
        print(a-b)
    elif c == '*':
        print(a*b)
    else:
        print(a/b)

calculator(a,b,c)