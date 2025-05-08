# 10/10/24

pf = float(input("enter the pf value btwn 0-1: "))
i = int(input("enter the value of current: "))
v = int(input("enter the value of voltage: "))

if 1>=pf>=0:
    p = 3**0.5*pf*i*v
    print("The power is :",round(p,2))
else:
    print("error:enter a valid pf value")