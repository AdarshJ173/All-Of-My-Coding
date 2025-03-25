# Walrus Operator

'''
The walrus operator is a new addition to python and allows to assign a value to a variable within an expression. This can be useful when you need to use a value multiple times in a loop, but don't want to repeat the calculation.
The walrus operator is a := operator. It is used to assign a value to a variable and return the value.

'''
a = True
# print(a = False)
print(a:=False)

num = [1,2,3,4,5]
while (n := len(num)) > 0:
    print(num.pop())


#aam zindagi

# foods = list()
# while True:
#     food = input("What food do you like?: ")
#     if food == "quit":
#         break
#     foods.append(food)

#mentos zindagi

foods = list()
while(food := input('what food do you like?: ')) != "quit":
    foods.append(food)
















































































