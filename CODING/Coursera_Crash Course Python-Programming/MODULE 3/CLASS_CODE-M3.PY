# FOR LOOPS 
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 1. Square Pattern
# Square Pattern
size = 5  # Define the size of the square
for i in range(size):  # Loop through each row
    print('* ' * size)  # Print a row of '*' characters with length equal to size
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

print("\n")

# 2. Rectangle Pattern
width = 7  # Define the width of the rectangle
height = 4  # Define the height of the rectangle
for i in range(height):  # Loop through each row
    print('* ' * width)  # Print a row of '*' characters with length equal to width
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 3. Right-Angled Triangle (Right-Aligned)
# Right-Angled Triangle (Right-Aligned)
size = 5  # Define the size of the triangle
for i in range(1, size + 1):  # Loop from 1 to size (inclusive)
    print('* ' * i)  # Print i '*' characters
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------
print("\n")

# 4. Right-Angled Triangle (Left-Aligned)
# Right-Angled Triangle (Left-Aligned)
size = 5  # Define the size of the triangle
for i in range(size, 0, -1):  # Loop from size to 1 (inclusive)
    print('* ' * i)  # Print i '*' characters
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 5. Equilateral Triangle
# Equilateral Triangle
size = 5  # Define the size of the triangle
for i in range(size):  # Loop through each row
    print(' ' * (size - i - 1) + '*' * (2 * i + 1))  # Print spaces followed by '*' characters
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 6. Pyramid Pattern
# Pyramid Pattern
size = 5  # Define the size of the pyramid
for i in range(size):  # Loop through each row
    print(' ' * (size - i - 1) + '*' * (2 * i + 1))  # Print spaces followed by '*' characters
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 7. Diamond Pattern
# Diamond Pattern
size = 5  # Define the size of the diamond
for i in range(size):  # Loop through the top half of the diamond
    print(' ' * (size - i - 1) + '*' * (2 * i + 1))  # Print spaces followed by '*' characters
for i in range(size - 2, -1, -1):  # Loop through the bottom half of the diamond
    print(' ' * (size - i - 1) + '*' * (2 * i + 1))  # Print spaces followed by '*' characters
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 8. Hollow Square Pattern
# Hollow Square Pattern
size = 5  # Define the size of the square
for i in range(size):  # Loop through each row
    if i == 0 or i == size - 1:  # Check if it's the first or last row
        print('*' * size)  # Print a row of '*' characters
    else:
        print('*' + ' ' * (size - 2) + '*')  # Print '*' followed by spaces and another '*'

#*-------------------------------------------------------------------------------------------------------------------------------------------------------------
# 9. Hollow Rectangle Pattern
# Hollow Rectangle Pattern
width = 7  # Define the width of the rectangle
height = 4  # Define the height of the rectangle
for i in range(height):  # Loop through each row
    if i == 0 or i == height - 1:  # Check if it's the first or last row
        print('*' * width)  # Print a row of '*' characters
    else:
        print('*' + ' ' * (width - 2) + '*')  # Print '*' followed by spaces and another '*'
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 10. Right-Angled Triangle with Hollow Spaces
# Right-Angled Triangle with Hollow Spaces
size = 5  # Define the size of the triangle
for i in range(size):  # Loop through each row
    if i == size - 1:  # Check if it's the last row
        print('*' * (i + 1))  # Print a row of '*' characters
    else:
        print('*' + ' ' * (i - 1) + '*')  # Print '*' followed by spaces and another '*'
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 11. Number Pyramid Pattern (Using Characters)
# Number Pyramid Pattern
size = 5  # Define the size of the pyramid
for i in range(size):  # Loop through each row
    print(' ' * (size - i - 1) + ''.join(str(j + 1) for j in range(i + 1)))  # Print spaces followed by numbers

#*-------------------------------------------------------------------------------------------------------------------------------------------------------------
# 12. Inverted Right-Angled Triangle
# Inverted Right-Angled Triangle
size = 5  # Define the size of the triangle
for i in range(size, 0, -1):  # Loop from size to 1 (inclusive)
    print('*' * i)  # Print i '*' characters

#*-------------------------------------------------------------------------------------------------------------------------------------------------------------
# 13. Rhombus Pattern
# Rhombus Pattern
size = 5  # Define the size of the rhombus
for i in range(size):  # Loop through the top half of the rhombus
    print(' ' * (size - i - 1) + '*' * (2 * i + 1))  # Print spaces followed by '*' characters
for i in range(size - 2, -1, -1):  # Loop through the bottom half of the rhombus
    print(' ' * (size - i - 1) + '*' * (2 * i + 1))  # Print spaces followed by '*' characters
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 14. Diamond Pattern with Hollow Spaces
# Diamond Pattern with Hollow Spaces
size = 5  # Define the size of the diamond
for i in range(size):  # Loop through the top half of the diamond
    if i == 0:
        print(' ' * (size - i - 1) + '*')  # Print spaces followed by one '*'
    else:
        print(' ' * (size - i - 1) + '*' + ' ' * (2 * i - 1) + '*')  # Print spaces, '*' with spaces, and another '*'
for i in range(size - 2, -1, -1):  # Loop through the bottom half of the diamond
    if i == 0:
        print(' ' * (size - i - 1) + '*')  # Print spaces followed by one '*'
    else:
        print(' ' * (size - i - 1) + '*' + ' ' * (2 * i - 1) + '*')  # Print spaces, '*' with spaces, and another '*'
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 15. Hourglass Pattern
# Hourglass Pattern
size = 5  # Define the size of the hourglass
for i in range(size, 0, -1):  # Loop from size to 1 (inclusive) for the top half
    print(' ' * (size - i) + '*' * (2 * i - 1))  # Print spaces followed by '*' characters
for i in range(2, size + 1):  # Loop from 2 to size (inclusive) for the bottom half
    print(' ' * (size - i) + '*' * (2 * i - 1))  # Print spaces followed by '*' characters
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 16. Cross Pattern
# Cross Pattern
size = 5  # Define the size of the cross
for i in range(size):  # Loop through each row
    if i == size // 2:  # Check if it's the middle row
        print('*' * size)  # Print a row of '*' characters
    else:
        print(' ' * (size // 2) + '*')  # Print spaces followed by one '*'
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 17. X Pattern
# X Pattern
size = 5  # Define the size of the X
for i in range(size):  # Loop through each row
    row = [' '] * size  # Create a row filled with spaces
    row[i] = '*'  # Set the i-th position to '*'
    row[size - i - 1] = '*'  # Set the (size - i - 1)-th position to '*'
    print(''.join(row))  # Join the row and print it
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 18. Triangle with Spaces in Middle
# Triangle with Spaces in Middle
size = 5  # Define the size of the triangle
for i in range(size):  # Loop through each row
    if i == size - 1:  # Check if it's the last row
        print('*' * (2 * i + 1))  # Print a row of '*' characters
    else:
        print('*' + ' ' * (2 * i - 1) + '*')  # Print '*' followed by spaces and another '*'
#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 19. Right-Angled Triangle with Incremental Spaces
# Right-Angled Triangle with Incremental Spaces
size = 5  # Define the size of the triangle
for i in range(size):  # Loop through each row
    print(' ' * i + '*' * (size - i))  # Print spaces followed by '*' characters

#*-------------------------------------------------------------------------------------------------------------------------------------------------------------

# 20. Pyramid with Incremental Characters
# Pyramid with Incremental Characters
size = 5  # Define the size of the pyramid
for i in range(size):  # Loop through each row
    print(' ' * (size - i - 1) + '*' * (2 * i + 1) + '*' * i)  # Print spaces, '*' characters, and addi




#? WHILE LOOPS 


#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 1. Square Pattern
# Square Pattern
size = 5  # Define the size of the square
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    j = 0  # Initialize column counter
    while j < size:  # Loop through each column
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 2. Rectangle Pattern
# Rectangle Pattern
width = 7  # Define the width of the rectangle
height = 4  # Define the height of the rectangle
i = 0  # Initialize row counter
while i < height:  # Loop through each row
    j = 0  # Initialize column counter
    while j < width:  # Loop through each column
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 3. Right-Angled Triangle (Right-Aligned)
# Right-Angled Triangle (Right-Aligned)
size = 5  # Define the size of the triangle
i = 1  # Initialize row counter
while i <= size:  # Loop from 1 to size (inclusive)
    j = 0  # Initialize column counter
    while j < i:  # Loop up to the current row number
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 4. Right-Angled Triangle (Left-Aligned)
# Right-Angled Triangle (Left-Aligned)
size = 5  # Define the size of the triangle
i = size  # Initialize row counter
while i > 0:  # Loop from size to 1 (inclusive)
    j = 0  # Initialize column counter
    while j < i:  # Loop up to the current row number
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i -= 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 5. Equilateral Triangle
# Equilateral Triangle
size = 5  # Define the size of the triangle
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    j = 0  # Initialize space counter
    while j < size - i - 1:  # Print leading spaces
        print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next space
    j = 0  # Reinitialize column counter for '*' characters
    while j < 2 * i + 1:  # Print '*' characters
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 6. Pyramid Pattern
# Pyramid Pattern
size = 5  # Define the size of the pyramid
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    j = 0  # Initialize space counter
    while j < size - i - 1:  # Print leading spaces
        print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next space
    j = 0  # Reinitialize column counter for '*' characters
    while j < 2 * i + 1:  # Print '*' characters
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 7. Diamond Pattern
# Diamond Pattern
size = 5  # Define the size of the diamond
i = 0  # Initialize row counter for the top half
while i < size:  # Loop through the top half of the diamond
    j = 0  # Initialize space counter
    while j < size - i - 1:  # Print leading spaces
        print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next space
    j = 0  # Reinitialize column counter for '*' characters
    while j < 2 * i + 1:  # Print '*' characters
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row
i = size - 2  # Initialize row counter for the bottom half
while i >= 0:  # Loop through the bottom half of the diamond
    j = 0  # Initialize space counter
    while j < size - i - 1:  # Print leading spaces
        print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next space
    j = 0  # Reinitialize column counter for '*' characters
    while j < 2 * i + 1:  # Print '*' characters
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i -= 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 8. Hollow Square Pattern
# Hollow Square Pattern
size = 5  # Define the size of the square
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    if i == 0 or i == size - 1:  # Check if it's the first or last row
        j = 0  # Initialize column counter
        while j < size:  # Print the entire row
            print('*', end='')  # Print '*' without a newline
            j += 1  # Move to the next column
    else:
        print('*', end='')  # Print the first '*'
        j = 1  # Initialize column counter for spaces
        while j < size - 1:  # Print spaces in between
            print(' ', end='')  # Print space without a newline
            j += 1  # Move to the next column
        print('*', end='')  # Print the last '*'
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 9. Hollow Rectangle Pattern
# Hollow Rectangle Pattern
width = 7  # Define the width of the rectangle
height = 4  # Define the height of the rectangle
i = 0  # Initialize row counter
while i < height:  # Loop through each row
    if i == 0 or i == height - 1:  # Check if it's the first or last row
        j = 0  # Initialize column counter
        while j < width:  # Print the entire row
            print('*', end='')  # Print '*' without a newline
            j += 1  # Move to the next column
    else:
        print('*', end='')  # Print the first '*'
        j = 1  # Initialize column counter for spaces
        while j < width - 1:  # Print spaces in between
            print(' ', end='')  # Print space without a newline
            j += 1  # Move to the next column
        print('*', end='')  # Print the last '*'
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 10. Right-Angled Triangle with Hollow Spaces
# Right-Angled Triangle with Hollow Spaces
size = 5  # Define the size of the triangle
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    if i == size - 1:  # Check if it's the last row
        j = 0  # Initialize column counter
        while j <= i:  # Print the entire row
            print('*', end='')  # Print '*' without a newline
            j += 1  # Move to the next column
    else:
        print('*', end='')  # Print the first '*'
        j = 1  # Initialize column counter for spaces
        while j < i:  # Print spaces in between
            print(' ', end='')  # Print space without a newline
            j += 1  # Move to the next column
        if i > 0:
            print('*', end='')  # Print the last '*' if it's not the first row
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 11. Number Pyramid Pattern
# Number Pyramid Pattern
size = 5  # Define the size of the pyramid
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    j = 0  # Initialize space counter
    while j < size - i - 1:  # Print leading spaces
        print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next space
    j = 0  # Reinitialize column counter for numbers
    while j <= i:  # Print numbers up to the current row number
        print(j + 1, end='')  # Print number without a newline
        j += 1  # Move to the next number
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 12. Inverted Right-Angled Triangle
# Inverted Right-Angled Triangle
size = 5  # Define the size of the triangle
i = size  # Initialize row counter
while i > 0:  # Loop from size to 1 (inclusive)
    j = 0  # Initialize column counter
    while j < i:  # Print '*' up to the current row number
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i -= 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 13. Rhombus Pattern
# Rhombus Pattern
size = 5  # Define the size of the rhombus
i = 0  # Initialize row counter for the top half
while i < size:  # Loop through the top half of the rhombus
    j = 0  # Initialize space counter
    while j < size - i - 1:  # Print leading spaces
        print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next space
    j = 0  # Reinitialize column counter for '*' characters
    while j < 2 * i + 1:  # Print '*' characters
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row
i = size - 2  # Initialize row counter for the bottom half
while i >= 0:  # Loop through the bottom half of the rhombus
    j = 0  # Initialize space counter
    while j < size - i - 1:  # Print leading spaces
        print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next space
    j = 0  # Reinitialize column counter for '*' characters
    while j < 2 * i + 1:  # Print '*' characters
        print('*', end='')  # Print '*' without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i -= 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 14. Diamond Pattern with Hollow Spaces
# Diamond Pattern with Hollow Spaces
size = 5  # Define the size of the diamond
i = 0  # Initialize row counter for the top half
while i < size:  # Loop through the top half of the diamond
    if i == 0:
        print(' ' * (size - i - 1) + '*')  # Print spaces followed by one '*'
    else:
        print(' ' * (size - i - 1) + '*' + ' ' * (2 * i - 1) + '*')  # Print spaces, '*' with spaces, and another '*'
    i += 1  # Move to the next row
i = size - 2  # Initialize row counter for the bottom half
while i >= 0:  # Loop through the bottom half of the diamond
    if i == 0:
        print(' ' * (size - i - 1) + '*')  # Print spaces followed by one '*'
    else:
        print(' ' * (size - i - 1) + '*' + ' ' * (2 * i - 1) + '*')  # Print spaces, '*' with spaces, and another '*'
    i -= 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 15. Hourglass Pattern
# Hourglass Pattern
size = 5  # Define the size of the hourglass
i = size  # Initialize row counter for the top half
while i > 0:  # Loop from size to 1 (inclusive) for the top half
    print(' ' * (size - i) + '*' * (2 * i - 1))  # Print spaces followed by '*' characters
    i -= 1  # Move to the next row
i = 2  # Initialize row counter for the bottom half
while i <= size:  # Loop from 2 to size (inclusive) for the bottom half
    print(' ' * (size - i) + '*' * (2 * i - 1))  # Print spaces followed by '*' characters
    i += 1  # Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 16. Cross Pattern
# Cross Pattern
size = 5  # Define the size of the cross
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    j = 0  # Initialize column counter
    while j < size:  # Loop through each column
        if i == size // 2 or j == size // 2:  # Check if it's the middle row or column
            print('*', end='')  # Print '*' without a newline
        else:
            print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  #Move to the next row
    
    #*----------------------------------------------------------------------------------------------------------------------------------------------------------
# 17. X Pattern
# X Pattern
size = 5  # Define the size of the X
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    j = 0  # Initialize column counter
    while j < size:  # Loop through each column
        if j == i or j == size - i - 1:  # Check if it's on the diagonals
            print('*', end='')  # Print '*' without a newline
        else:
            print(' ', end='')  # Print space without a newline
        j += 1  # Move to the next column
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 18. Triangle with Spaces in Middle
# Triangle with Spaces in Middle
size = 5  # Define the size of the triangle
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    if i == size - 1:  # Check if it's the last row
        print('*' * (2 * i + 1))  # Print a row of '*' characters
    else:
        print('*', end='')  # Print the first '*'
        j = 1  # Initialize column counter for spaces
        while j < 2 * i:  # Print spaces in between
            print(' ', end='')  # Print space without a newline
            j += 1  # Move to the next column
        if i > 0:
            print('*', end='')  # Print the last '*' if it's not the first row
    print()  # Move to the next line after a row is printed
    i += 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 19. Right-Angled Triangle with Incremental Spaces
# Right-Angled Triangle with Incremental Spaces
size = 5  # Define the size of the triangle
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    print(' ' * i + '*' * (size - i))  # Print spaces followed by '*' characters
    i += 1  # Move to the next row

#*----------------------------------------------------------------------------------------------------------------------------------------------------------

# 20. Pyramid with Incremental Characters
# Pyramid with Incremental Characters
size = 5  # Define the size of the pyramid
i = 0  # Initialize row counter
while i < size:  # Loop through each row
    print(' ' * (size - i - 1) + '*' * (2 * i + 1) + '*' * i)  # Print spaces, '*' characters, and additional '*' characters
    i += 1  # Move to the next row
