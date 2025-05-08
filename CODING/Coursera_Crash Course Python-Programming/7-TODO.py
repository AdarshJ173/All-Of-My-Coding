'''

1. **Temperature Conversion Program**: Write a function `convert_temperature()` that takes an input temperature in Fahrenheit from the user, converts it to Celsius using the formula `C = (F - 32) * 5/9`, and returns the converted temperature. Use conditional statements to check if the input is valid (i.e., a number) and handle invalid inputs gracefully. Use f-strings to format the output.

2. **String Manipulation and Analysis**: Write a function `analyze_string()` that takes a string input from the user, and then:
   - Converts the string to lowercase.
   - Counts the number of vowels and consonants in the string.
   - Finds the index of the first occurrence of a specific character (given as an argument).
   - Returns a formatted string with all this information using f-strings.

3. **Basic Calculator**: Write a function `basic_calculator()` that takes two numbers and an operator (+, -, *, /) from the user, performs the corresponding operation, and returns the result. Use input validation to ensure the numbers and operator are valid. If the operator is not valid, print an appropriate message and ask for input again. Use typecasting where necessary.

4. **List Filtering with Loops**: Write a function `filter_even_numbers()` that takes a list of numbers as an argument, uses a for loop to iterate through the list, and returns a new list containing only the even numbers. Use the `break` and `continue` statements where necessary.

5. **Password Validation**: Write a function `validate_password()` that takes a password input from the user and checks if it meets the following criteria:
   - At least 8 characters long
   - Contains both uppercase and lowercase letters
   - Contains at least one digit
   - Contains at least one special character (e.g., @, #, $, etc.)
   
   Use string methods, loops, and conditionals to implement the validation. Return a message indicating whether the password is valid or not.

6. **Word Frequency Counter**: Write a function `word_frequency()` that takes a string input from the user, splits the string into words, and returns a dictionary where the keys are the words and the values are the number of times each word appears in the string. Use string methods and loops for this task.

7. **Simple Banking System**: Write a function `banking_system()` that simulates a simple banking system. The function should:
   - Take an initial balance as an argument.
   - Allow the user to make deposits and withdrawals.
   - Check for sufficient balance before allowing a withdrawal.
   - Use a while loop to continue the operations until the user decides to quit.
   
   Use functions, loops, conditionals, and input validation to implement the system. Return the final balance at the end.
'''


### Python Solutions

# Solution 1: Temperature Conversion Program
def convert_temperature():
    temp_fahrenheit = input("Enter temperature in Fahrenheit: ")
    if temp_fahrenheit.replace('.', '', 1).isdigit():
        temp_fahrenheit = float(temp_fahrenheit)
        temp_celsius = (temp_fahrenheit - 32) * 5/9
        return f"The temperature in Celsius is {temp_celsius:.2f}°C"
    else:
        return "Invalid input. Please enter a valid number."

# Solution 2: String Manipulation and Analysis
def analyze_string():
    user_string = input("Enter a string: ").lower()
    char_to_find = input("Enter a character to find its index: ")
    
    vowels = "aeiou"
    vowel_count = sum(1 for char in user_string if char in vowels)
    consonant_count = sum(1 for char in user_string if char.isalpha() and char not in vowels)
    first_index = user_string.find(char_to_find)
    
    return (f"Lowercase String: {user_string}\n"
            f"Vowel Count: {vowel_count}\n"
            f"Consonant Count: {consonant_count}\n"
            f"First occurrence of '{char_to_find}': Index {first_index}")

# Solution 3: Basic Calculator
def basic_calculator():
    num1 = input("Enter the first number: ")
    num2 = input("Enter the second number: ")
    operator = input("Enter the operator (+, -, *, /): ")
    
    if num1.replace('.', '', 1).isdigit() and num2.replace('.', '', 1).isdigit():
        num1 = float(num1)
        num2 = float(num2)
        
        if operator == '+':
            return f"Result: {num1 + num2}"
        elif operator == '-':
            return f"Result: {num1 - num2}"
        elif operator == '*':
            return f"Result: {num1 * num2}"
        elif operator == '/':
            if num2 != 0:
                return f"Result: {num1 / num2}"
            else:
                return "Error: Division by zero is not allowed."
        else:
            return "Invalid operator. Please enter one of +, -, *, /."
    else:
        return "Invalid input. Please enter valid numbers."

# Solution 4: List Filtering with Loops
def filter_even_numbers(numbers):
    even_numbers = []
    for number in numbers:
        if number % 2 == 0:
            even_numbers.append(number)
        continue  # Not really necessary here but included for demonstration
    return even_numbers

# Solution 5: Password Validation
def validate_password():
    password = input("Enter a password: ")
    
    if (len(password) >= 8 and
        any(char.islower() for char in password) and
        any(char.isupper() for char in password) and
        any(char.isdigit() for char in password) and
        any(char in "@#$" for char in password)):
        return "Password is valid."
    else:
        return "Password is invalid."

# Solution 6: Word Frequency Counter
def word_frequency():
    user_string = input("Enter a string: ")
    words = user_string.split()
    frequency = {}
    
    for word in words:
        if word in frequency:
            frequency[word] += 1
        else:
            frequency[word] = 1
    
    return frequency

# Solution 7: Simple Banking System
def banking_system(initial_balance):
    balance = initial_balance
    
    while True:
        action = input("Would you like to deposit, withdraw, or quit? ").lower()
        if action == 'deposit':
            amount = float(input("Enter amount to deposit: "))
            balance += amount
            print(f"Deposited {amount}. Current balance: {balance}")
        elif action == 'withdraw':
            amount = float(input("Enter amount to withdraw: "))
            if amount <= balance:
                balance -= amount
                print(f"Withdrew {amount}. Current balance: {balance}")
            else:
                print("Insufficient balance.")
        elif action == 'quit':
            break
        else:
            print("Invalid action. Please choose deposit, withdraw, or quit.")
    
    return f"Final balance: {balance}"
