'''ENUMERATE FUNCTION IN PYTHON'''

'''
In Python, the enumerate() function is used to iterate over a sequence (such as a list, tuple, or string) while keeping track of the index of the current item. It returns a pair of values for each iteration: the index of the item and the value of the item itself.

Here's the syntax of the enumerate() function:

enumerate(sequence, start=0)

sequence: The sequence to iterate over.
start (optional): The value at which the counting starts. It defaults to 0.
Here's an example usage of the enumerate() function:

fruits = ['apple', 'banana', 'cherry']

for index, fruit in enumerate(fruits):
    print(index, fruit)

In the example above, the enumerate() function is used to iterate over the fruits list. For each iteration, it returns the index of the fruit and the value of the fruit itself. The index variable holds the index value, and the fruit variable holds the value of the fruit.

The enumerate() function can be very useful when you need to access both the index and value of each item in a sequence. It eliminates the need for manually incrementing a counter variable while iterating over the sequence.
'''

marks = [23, 45, 67, 89, 90]

index = 0

for mark in marks:
    print(mark)
    if(index == 4):
        print("Adarsh, Very Good !")
    index = index + 1
# now the above code is such a pain to write - now to shorten it we use enumerate - where all we want is the index number and the value
# ||
# ||
# \/
for index, mark in enumerate(marks):
    print(mark)
    if(index == 4):
        print("Adarsh, Very Good !")

# now if i want to print the index and value of 4th element and not the 4th index then:

for index, mark in enumerate(marks, start=1):
    print(mark)
    if (index == 4):
        print("Adarsh, Very Good !")

# enumerate(sequence, start=0)

# loop overa list and print the index and value of each element

fruits = ['apple', 'banana', 'cherry']

for index, fruit in enumerate(fruits):
    print(index, fruit)

# As you can see, the enumerate function returns a tuple containing the index value of each element in the sequence. You can use them for loop to unpack these tuples and assign them to variables. 