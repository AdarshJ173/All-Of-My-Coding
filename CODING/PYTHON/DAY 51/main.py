'''seek(), tell() and other functions'''

# Open the file 'aj.txt' in read mode and assign it to the variable f
with open('PYTHON/DAY 51/aj.txt','r') as f:
    # Print the file object and its type
    print(f, type(f))
    # Move the file's current position to the 10th byte
    f.seek(10)
    '''
    The seek() function is a built-in function in Python that is used to change the position of the file pointer in a file. The file pointer is a marker that indicates the current position in the file. The seek() function allows you to move the file pointer to a specific location in the file, so that you can read or write data from/to that location.

The seek() function takes two arguments: the first argument is the offset, which is the number of bytes to move the file pointer from the beginning of the file, and the second argument is the whence argument, which specifies the reference point from which the offset is calculated. The whence argument is optional, and if it is not provided, it defaults to 0, which means that the offset is calculated from the beginning of the file.

For example, if you want to move the file pointer to the 10th byte in a file, you can use the seek() function as follows:


f.seek(10)
This will move the file pointer to the 10th byte in the file, and any subsequent read or write operations will start from that position.

If you want to move the file pointer to the end of the file, you can use the seek() function as follows:


f.seek(0, 2)
This will move the file pointer to the end of the file, and any subsequent write operations will append data to the end of the file.

Note that the seek() function does not return any value, but it changes the position of the file pointer, which can be retrieved using the tell() function.
    '''
    # Read 5 bytes from the current position and assign it to the variable data
    
    print(f.tell())  # Get the current position of the file pointer using the tell() function

    data = f.read(5)
    print(data)

# truncate() function 
'''
The truncate() function is a built-in function in Python that is used to truncate a file to a specified size. When you call the truncate() function on a file object, it truncates the file to the current position of the file pointer. Any data that is located beyond the current position of the file pointer is discarded.

Here is an example of how to use the truncate() function:


# Open a file named 'myfile09.txt' in write mode using a 'with' statement
with open('myfile09.txt', 'w') as f:
    
    # Write some data to the file
    f.write('Hello, world!')
    
    # Move the file pointer to the beginning of the file
    f.seek(0)
    
    # Truncate the file to the current position of the file pointer
    f.truncate()
    
    # Read the contents of the file
    content = f.read()
    
    # Print the contents of the file
    print(content)
In this example, we open a file named 'myfile09.txt' in write mode using a 'with' statement. We then write the string 'Hello, world!' to the file, move the file pointer to the beginning of the file, and truncate the file to the current position of the file pointer using the truncate() function. Finally, we read the contents of the file and print them to the console.

Note that if you call the truncate() function without specifying a size, it will truncate the file to the current position of the file pointer. If you want to truncate the file to a specific size, you can pass that size as an argument to the truncate() function. For example, f.truncate(5) will truncate the file to 5 bytes.

'''
with open('sample.txt', 'w') as h:
    h.write('Hello World!')
    h.truncate(5) # it removed all the characters after 4th index - or i want that only 5 characters should be there

with open('sample.txt','r') as h:
    print(h.read())

# Open a file named 'myfile08.txt' in read-write mode using a 'with' statement
with open('PYTHON/DAY 51/myfile08.txt', 'r+') as t:
    
    # Move the file pointer to the beginning of the file using the 'seek' method
    t.seek(0)
    
    # Read the contents of the file using the 'read' method
    content = t.read()
    
    # Print the contents of the file
    print(content)
    
    # Move the file pointer to the end of the file using the 'seek' method
    t.seek(0, 2)
    
    # Write a string to the file using the 'write' method
    t.write('This is a new line\n')
    
    # Move the file pointer to the beginning of the file using the 'seek' method
    t.seek(0)
    
    # Read the contents of the file using the 'read' method
    content = t.read()
    
    # Print the contents of the file
    print(content)
    
    # Get the current position of the file pointer using the 'tell' method
    pos = t.tell()
    
    # Print the current position of the file pointer
    print('Current position of the file pointer:', pos)
    
    # Move the file pointer to a specific position using the 'seek' method
    t.seek(5)
    
    # Get the current position of the file pointer using the 'tell' method
    pos = t.tell()
    
    # Print the current position of the file pointer
    print('Current position of the file pointer:', pos)

'''
In this code, we open a file named 'myfile08.txt' in read-write mode using a 'with' statement. We then move the file pointer to the beginning of the file using the 'seek' method and read the contents of the file using the 'read' method. We print the contents of the file, move the file pointer to the end of the file using the 'seek' method, and write a string to the file using the 'write' method. We then move the file pointer to the beginning of the file again, read the contents of the file, and print the contents of the file. We also get the current position of the file pointer using the 'tell' method, move the file pointer to a specific position using the 'seek' method, and print the current position of the file pointer.
'''













