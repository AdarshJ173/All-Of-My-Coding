'''FUNCTIONS'''

# A FUNCTION IS A BLOCK OF CODE THAT PERFORMS A SPECIFIC TASK WHENEVER IT IS CALLED. IN BIGGER PROGRAMS , WHERE WE HAVE LARGE AMOUNTS OF CODE , IT IS ADVISABLE TO CREATE OF USE EXISTING FUNCTIONS THAT MAKE THE PROGRAM FLOW ORGANIZED AND NEAT.

def calcgmean(a,b):
    mean = (a*b)/(a+b)
    print(mean)

def isgreater(a,b):
    if (a>b):
        print("1st is > 2nd")
    else:
        print("2nd is > 1st or =")

def islesser(a,b):
    pass
# if i want to write the function later , so i use pass

a = 19
b = 43
# gmean = (a*b)/(a+b)
# print(gmean)
calcgmean(a,b)
# if (a>b):
#         print("1st is > 2nd")
#     else:
#         print("2nd is > 1st or =")
isgreater(a,b)

c =45
d =43
# gmean2 = (a*b)/(a+b)
# print(gmean2)
calcgmean(c,d)
# if (a>b):
#         print("1st is > 2nd")
#     else:
#         print("2nd is > 1st or =")
isgreater(c,d)


'''
1.BUILT IN FUNCTIONS:
min(),max(),len(),sum(),type(),range(),dict(),list(),tuple(),set(),print(),...........
2.USER-DEFINED FUNCTIONS : are the functions defined by the user.
'''