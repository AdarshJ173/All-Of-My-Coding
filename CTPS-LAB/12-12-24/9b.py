from shutil import copyfile

try:
    # Input the source and destination filenames
    sourcefile = input("Enter source filename: ")
    destinationfile = input("Enter destination filename: ")

    # Copy the file from source to destination
    copyfile(sourcefile, destinationfile)
    print("File copied successfully!")

    # Open the destination file and read its contents
    with open(destinationfile, "r") as c:
        print(c.read())

except FileNotFoundError:
    print("Error: The source file was not found. Please check the file path and name.")

except Exception as e:
    print(f"An unexpected error occurred: {e}")