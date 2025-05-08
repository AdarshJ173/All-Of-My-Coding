# 28/10/24

# Welcome message for the user
print("Welcome to Woxsen's Advanced Library")
print()

# Initialize a list called 'library' that contains different types of library materials
library = ["Books", "E-Books", "Journals", "Audio Books", "Manuscripts", "Maps", "Prints", "Periodicals", "Newspaper"]

# Iterate through each in the library list and print it
for i in library:
    print(i)  # Print the current library 

print()  # Print a new line for better readability

# Print the entire list of library 
print(library)

# Remove the item "Prints" from the list of library 
library.remove("Prints")

# Print the updated list of library  after removal
print(library)

# Delete the item at index 4 
del library[4]

# Print the updated list of library  after deletion
print(library)

# Clear the entire list of library 
library.clear() 

# Print the empty list of library 
print(library)

# Append a new item "IPads" to the empty list of library 
library.append("IPads")

# Print the updated list of library  after appending
print(library)

# Insert a new item "Samsung Tabs" at the 0 index of the list
library.insert(0, "Samsung Tabs")

# Print the updated list of library after insertion
print(library)

index_of_SamsungTabs = library.index("Samsung Tabs")
print(index_of_SamsungTabs)

# Delete the first item from the list
del library[0]  

# Print the final list of library 
print(library)
