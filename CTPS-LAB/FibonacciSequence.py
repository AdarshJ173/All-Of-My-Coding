# 23-10-24

a = -1
b = 1
n = int(input("enter the Range: "))

for i in range(n):
    print(a,end = ' ')
    temp = a
    a = b
    b = temp + b
