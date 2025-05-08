# Open the file 'marks.txt' in read mode
f = open('F:/VISUAL STUDIO/Projects/PYTHON/DAY 50/marks.txt', 'r')

# Initialize a counter to keep track of the number of students
i = 0

# Loop through the file until the end is reached
while True:
    # Increment the student counter
    i = i + 1
    
    # Read a line from the file
    line = f.readline()
    
    # If the end of the file is reached, break the loop
    if not line:
        break
    
    # Split the line into individual marks separated by commas
    # m1, m2, m3 = line.split(",") #// or 
    # Corrected the code to get the marks of the current student
    m1=  int(line.split(",") [0])
    m2=  int(line.split(",") [1])
    m3=  int(line.split(",") [2])
    
    # Print the marks of the current student
    print(f'Marks of student {i} in Maths is : {m1}')
    print(f'Marks of student {i} in ENG is : {m2}')  # Corrected ENG marks to m2
    print(f'Marks of student {i} in IT is : {m3}')  # Corrected IT marks to m3
    print(line)