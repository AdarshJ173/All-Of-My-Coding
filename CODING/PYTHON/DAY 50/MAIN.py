'''read(), readlines() and other methods'''

# readlines() method

# Open the file 'myline.txt' in read mode
f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 50/myline.txt', 'r')

# Begin an infinite loop, which will continue until the end of the file is reached
while True:
    # Read a single line from the file
    line = f.readline()
    
    # If the line is empty, it means the end of the file has been reached
    if not line:
        # Break out of the infinite loop
        break
    
    # Print the line that was read from the file
    print(line)

#* writelines() method 

'''
t = open('myfile07.txt', 'w')
lines = [ 'line 1\n','line 2\n','line 3\n']
f.writelines(lines)
f.close

'''
#// or

# Open a file named 'myfile07.txt' in write mode using a 'with' statement
with open('myfile07.txt', 'w') as t:
    # Create a list of strings, where each string represents a line of text
    lines = [ 'line 1\n','line 2\n','line 3\n']
#or
    # for line in lines:
    #     f.write(line+ '\n')
    # to add a new line

    # Write the lines to the file using the 'writelines' method of the file object
    t.writelines(lines)




