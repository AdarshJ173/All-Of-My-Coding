#Prompt the user to enter their age
age_input = input("Enter your age: ")
#Function to check if the input is a valid positive integer
def is_valid_age(age_str):
    if age_str.isdigit() and int(age_str) > 0:
            return True
    return False
#Check if the input is valid
if is_valid_age(age_input):
# Convert the input to an integer
    age = int(age_input)
    # Check if the person is eligible to vote
    if age >= 18:
        print("\nOutput: \nYou are eligible to vote.")
    else:
        print("\nOutput: \nYou are not eligible to vote.")
else:
    # Print an error message for invalid input
     print("\nOutput: \nInvalid input. Please enter a positive integer.")