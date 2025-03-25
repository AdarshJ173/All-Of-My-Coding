# 10/10/24

length = int(input("enter the length of the bar: "))
diameter = int(input("enter the diameter of the bar: "))

weight = ((diameter**2)/162)*length

print(round(weight,2))