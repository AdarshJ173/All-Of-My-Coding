from shutil import copyfile
sourcefile =input("enter the sourcefile name:")
destinationfile=input("enter the destination name:")
copyfile(sourcefile,destinationfile)
print("\noutput:\nFilecopied succesfully!\n")
with open(destinationfile,"r") as c:

    print(c.read())