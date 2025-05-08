string = input("Write Anything: ")

while True:
    char = input("Enter the character to count: ")
    if len(char) != 1:
        print("Please enter a single character.")
    else:
        count_char = string.lower().count(char.lower())
        print(f"The count of {char} is {count_char}")
        break