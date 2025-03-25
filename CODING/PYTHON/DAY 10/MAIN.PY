# INPUT /  USER INPUT 
'''
TAKING USER INPUT IN PYTHON CAN BE DONE BY USING input() function

'''
a = input("TELL ME SOMETHING: ")
print(a)

# ------------------------------------------------------------

q = input("ENTER 1st NUMBER: ")
w = input("ENTER 2nd NUMBER: ")
print("THE ADDITION OF THE TWO VALUES IS : ", q + w)
# here, lets say q = 7 and w = 5 , then the output will be 75 , instead of 12
# this is bcz python interprets the input as a string and so it concatenates both values, rather than adding the two values as numbers

# to solve this :
r = float( input("ENTER 1st NUMBER: ")) # u can use either a int() or float() or complex()
e = float(input("ENTER 2nd NUMBER: "))
print("THE ADDITION OF THE TWO VALUES IS : ", r + e)
# or 
print(int(r) + int(e))