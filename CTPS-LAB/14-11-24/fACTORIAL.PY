# with Function
x = int(input("enter a Num: "))

def factorial(x):
    while(True):
        if x < 0:
            print("invalid input is -ve X ")
            x = int(input("enter a +ve Num: "))
        else:
            if x == 0 or x == 1:
                return 1
            else:
                return x * factorial(x - 1)

print(factorial(x))

# Without Function
x = int(input("enter a Num: "))
sum = 1.0

for i in range(1,x+1):
    sum = sum * i

print(sum)

