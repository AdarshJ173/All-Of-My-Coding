'''FILE IO IN PYTHON'''

# Opening a file 
''' 
Sure, I can help you with that. Here's an example of how to open a file in Python:


# Open a file in read mode
file = open("example.txt", "r")

# Read the content of the file
content = file.read()

# Print the content
print(content)

# Close the file
file.close()
In this example, we open a file named example.txt in read mode ("r"). We then read the content of the file using the read() method and print it. Finally, we close the file using the close() method.

Note: It's important to always close the file after you're done with it to free up system resources. Alternatively, you can use the with statement to automatically close the file when you're done with it:


# Open a file in read mode
with open("example.txt", "r") as file:
    # Read the content of the file
    content = file.read()

    # Print the content
    print(content)
In this example, the file is automatically closed at the end of the with block.
'''

f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt', 'r')

# f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt', 'rt') - this reads the file in read mode , which is default in "r"

# f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt', 'rb') - this by default make this in binary mode

# f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt', 'w') - this by default make this in write mode

# f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt') - this by default make this in read mode

# print(f)

#*Reading a file
text = f.read()
print(text)
f.close()

#*Writing a file
f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt', 'w') #// write mode
# f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt', 'a') #// append mode - it will keep creating/adding "Hello World" as many times as i run
f.write('Hello World')
f.close()

#*I dont have to always write close( ) - if i write the below
with open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 49/my.txt', 'a') as f :
    f.write("Hey , Its AJ")


#!methods
'''
Here are some methods in Python that are commonly used for file I/O:

open(file, mode): This function is used to open a file. The file parameter is a string that contains the name of the file, and the mode parameter is a string that specifies the mode in which the file is opened. For example, 'r' stands for reading, 'w' stands for writing, and 'a' stands for appending.
read(): This method is used to read the contents of a file. It returns the contents as a string.
readline(): This method is used to read a single line from a file. It returns the line as a string.
readlines(): This method is used to read all the lines in a file. It returns a list of strings, where each string is a line in the file.
write(string): This method is used to write a string to a file. It writes the string to the file starting at the current position of the file pointer.
writelines(list): This method is used to write a list of strings to a file. It writes each string in the list to the file starting at the current position of the file pointer.
close(): This method is used to close a file. It is a good practice to close a file when you are done using it.
Here's an example of how you can use these methods to read and write to a file in Python:

# Open the file in write mode
with open('example.txt', 'w') as f:
    # Write some text to the file
    f.write('Hello, world!')

# Open the file in read mode
with open('example.txt', 'r') as f:
    # Read the contents of the file
    contents = f.read()
    print(contents)

In this example, we first open the file example.txt in write mode using the open() function. We then write the string 'Hello, world!' to the file using the write() method. After that, we open the file in read mode and read its contents using the read() method. Finally, we print the contents of the file to the console.
'''

#! modes in file
'''
Sure, here are the different modes you can use when opening a file in Python:

'r': Opens a file for reading. The file pointer is placed at the beginning of the file. This is the default mode.
'w': Opens a file for writing. If the file already exists, it will be truncated to zero length. If the file does not exist, it will be created.
'x': Opens a file for exclusive creation. If the file already exists, the operation will fail. If the file does not exist, it will be created.
'a': Opens a file for appending. If the file does not exist, it will be created. The file pointer is placed at the end of the file. This mode is used when you want to add information to the end of an existing file.
'b': Opens a file for binary mode. This is used when you want to read or write binary data, such as images or executable files.
'+': Opens a file for both reading and writing. The file pointer is placed at the beginning of the file.
Here are some examples of how you can use these modes to open a file in Python:


# Open a file for reading
with open('example.txt', 'r') as f:
    # Do something with the file

# Open a file for writing
with open('example.txt', 'w') as f:
    # Do something with the file

# Open a file for exclusive creation
with open('example.txt', 'x') as f:
    # Do something with the file

# Open a file for appending
with open('example.txt', 'a') as f:
    # Do something with the file

# Open a file for binary mode
with open('example.bin', 'b') as f:
    # Do something with the file

# Open a file for both reading and writing
with open('example.txt', 'r+') as f:
    # Do something with the file
In these examples, we use the open() function to open a file in different modes. We then use the file object returned by the open() function to read or write data to the file.
'''



















