import os
import shutil

# Define the base directory where the new folders and files will be created
base_directory = 'F:\CODING\DSA'

# Loop through a range of numbers from 1 to 140 (inclusive)
for i in range(1, 141):

    # Create the name of the new folder by joining the base directory and the lecture number
    folder_name = os.path.join(base_directory, f'LECTURE{i}')

    # Create the new folder
    os.makedirs(folder_name)

    # Create the name of the new file by joining the folder name and the code file name
    file_name = os.path.join(folder_name, f'CODE{i}.c')

    # Create the new file and open it in write mode
    with open(file_name, 'w') as file:

        # Write the initial comment and code to the file
        file.write('// This is the starting point for your code in LECTURE{i}\n')
        file.write('START CODING NOW\n')