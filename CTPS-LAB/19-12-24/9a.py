from shutil import copyfile
# Input the source and destination filenames
sourcefile = input("Enter source filename: ")
destinationfile= input("Enter destination filename: ")
# Copy the file from source to destination
copyfile (sourcefile, destinationfile)
print("\nOutput: \nFile copied successfully!\n")
# Open the destination file and read its contents
with open (destinationfile, "r") as c:
    print(c.read())