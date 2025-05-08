# FOR LOOPS 

'''
FOR LOOP
WHILE LOOP
'''

name = "ADARSH"

for i in name :
    print(i)

colors = ["red", "green", "blue", "yellow"]
for color in colors:
    print(color)
    for j in color:
        print(j)

# for k in range(1,20001):
for k in range(5):
    # print(k)
    # print(k+1)
    print(k)



'''In Python, the for loop is often used to iterate over a sequence (such as a list, tuple, or range) or any iterable object. The step argument in a for loop determines the increment value for each iteration.

By default, the step value is 1, meaning that the loop variable increments by one in each iteration. However, you can specify a different step value if you want the loop variable to increment by a different amount.

Here's the basic syntax of a for loop with the step argument:'''

# for variable in range(start, stop, step):
    # Code block to execute

# start: The starting value of the loop variable (inclusive).
# stop: The ending value of the loop variable (exclusive).
# step: The amount by which the loop variable is incremented or decremented.
# Here's an example


for t in range(0, 10, 2):
    print(t)

'''This loop will iterate over the numbers from 0 to 8 (10 is not included) with a step of 2, so it will print:
'''
0
2
4
6
8

for u in range(10, 0, -1):
    print(u)

# This loop will print numbers from 10 down to 1 with a step of -1.
