'''WHILE LOOP'''

# for i in range(3):
#     print(i)

i = 0 
while(i<3):
    print(i)
    i = i+1


j = int(input("enter the number: "))
while(j<=37):
    j = int(input("enter the number: "))
    print(j)

print("done with the loop")

# while loops execute statements while the condition is true.As soon as the condition becomes false, the interpreter comes out of the while loop.

count = 5
while (count>0):
    print(count)
    count = count-1
else:
    print("i am in the else")

# after the condition is satisfied or false , it goes in to the else 

"""DO WHILE LOOP"""
# DO WHILE LOOP IS LOOP IN WHICH THE A SET OF INSTRUCTIONS WILL EXECUTE AT LEAST ONCE (IRRESPECTIVE OF THE CONDITION) AND THEN THE REPETITION OF LOOP'S BODY WILL DEPEND ON THE CONDITION PASSED AT THE END OF THE WHILE LOOP . IT IS ALSO KNOWN AS AN EXIT CONTROLLED LOOP.

'''
Sure! A `do while` loop in Python is a loop that executes a block of code once before checking if the loop condition is true, and then continues to execute the block of code repeatedly as long as the condition remains true. 

In Python, there's no built-in `do while` loop like in some other programming languages, but you can achieve similar functionality using a `while` loop with a condition that's initially set to `True`, and then you manually break out of the loop when the desired condition is met.

Here's a very simple example:

This code will print the value of `count` from 0 to 4. Even though the loop condition (`True`) is always true, the loop is exited when `count` reaches 5 because of the `break` statement.
'''

# Initialize a variable
count = 0

# Start a do while loop (using a while loop with True condition)
while True:
    # Execute the block of code
    print("Count is:", count)
    
    # Increment the count
    count += 1
    
    # Check if the condition is met to exit the loop
    if count >= 5:
        break
