print("enter a string")
StringIn = input("Enter Your String: ")

if StringIn == "":
    print("error: the input string cannot be empty")
else:
    print("Total character in the given string is: ", len(StringIn))

    char = input("enter a character to count: ")

    if len(char) != 1:
        print("Error: please enter a single character")
    else:
        val = StringIn.count(char)

        print(f"Output: The character '{char}' appears {val} times in the string")
