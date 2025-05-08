import os

# Get the main folder path, which is "D:\CODING\DSA"
main_folder_path = "DSA\@DSA_Apna-Collage"

# Create the main folder if it doesn't exist, 
# with exist_ok=True to avoid raising an error if the folder already exists
os.makedirs(main_folder_path, exist_ok=True)

# Create 140 folders and C++ files within the main folder
for i in range(1, 211):
    # Generate the folder name, e.g., "Lecture1", "Lecture2", etc.
    folder_name = f"Lecture{i}"
    
    # Generate the full path of the folder
    folder_path = os.path.join(main_folder_path, folder_name)
    
    # Create the folder if it doesn't exist, 
    # with exist_ok=True to avoid raising an error if the folder already exists
    os.makedirs(folder_path, exist_ok=True)
    
    # Generate the file name, e.g., "D:\CODING\DSA\Lecture1\code1.cc", etc.
    file_name = f"{folder_path}/code{i}.cc"
    
    # Open the file in write mode and create it if it doesn't exist
    with open(file_name, 'w') as file:
        # Write the initial C++ code template into the file
        file.write('''#include<iostream>
using namespace std;
                   
int main(){

}''')