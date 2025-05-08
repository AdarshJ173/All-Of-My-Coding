string = input("Enter the string: ")

name1 = input("enter old substring: ")
name2 = input("enter new substring: ")

if not string:
    print("error: the input string cannot be empty")
elif not name1:
    print("error: the old substring cannot be empty")
elif name1 not in string:
    print(f"error: '{name1}' not found in the original string.")
else:
    new_string  = string.replace(name1,name2)
    print(new_string)

