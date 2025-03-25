'''
Conditionals in Python :
At its core, a conditional statement allows a program to make decisions based on whether certain conditions are true or false. This concept is fundamental to creating dynamic, responsive programs that can adapt to different situations.
Key components:

Conditions: Expressions that evaluate to either True or False
Conditional statements: if, elif (else if), and else
Code blocks: Indented sections of code that execute based on conditions
'''
# Basic if statement
kalia_age = 18
if kalia_age >= 18:
    print("kalia You are an adult")

# if-else statement
Adarsh_hen_age = 16
if Adarsh_hen_age >= 18:
    print("adarsh You are an adult")
else:
    print("adarsh You are a minor")



# if-elif-else statement
Subham_score = 90
if Subham_score >= 85:
    print("A grade")
elif Subham_score >= 80:
    print("B grade")
elif Subham_score >= 70:
    print("C grade")
else:
    print("Failed")

#//---------------------------------------------------------------------------------------------------------------------

'''
The key differences between elif and else are:

1.elif (short for "else if") is used to check additional conditions after the initial if statement. You can have multiple elif statements.
2.else is used as a catch-all at the end of an if-elif chain. It executes when none of the preceding conditions are true.
3.elif requires a condition, while else does not.

elif (else if):
1.Used to check additional conditions after the initial if statement.
2.Requires a condition to be specified.
3.You can have multiple elif statements in a single if-elif chain.
Executes only if all previous conditions (if and preceding elif's) are False and its own condition is True.


else:
1.Used as a catch-all at the end of an if-elif chain.
2.Does not require a condition.
3.There can be only one else clause for each if-elif chain.
4.Executes when all preceding conditions (if and elif's) are False.


In the check_number function:

The if checks for positive numbers.
The elif checks for negative numbers.
The else catches the only remaining possibility: zero.

In the categorize_age function:

Multiple elif statements are used to check different age ranges.
The else at the end catches all ages 65 and above, categorizing them as "Senior".
'''
def check_number(num):
    if num > 0:
        return "Positive"
    elif num < 0:
        return "Negative"
    else:
        return "Zero"

# Test the functions
print("Number checking:")
print("5:", check_number(5))
print("-3:", check_number(-3))
print("0:", check_number(0))

def categorize_age(age):
    if age < 0:
        return "Invalid age"
    elif age < 13:
        return "Child"
    elif age < 20:
        return "Teenager"
    elif age < 65:
        return "Adult"
    else:
        return "Senior"

# Test the functions
print("\nAge categorization:")
print("8 years:", categorize_age(8))
print("16 years:", categorize_age(16))
print("35 years:", categorize_age(35))
print("70 years:", categorize_age(70))
print("-5 years:", categorize_age(-5))

'''
In check_number, the else clause handles the case when the number is neither positive nor negative, without needing an explicit condition.
In categorize_age, the elif statements allow for checking multiple specific age ranges, while the else clause handles all remaining cases (ages 65 and above) without needing to specify an upper bound.

This example demonstrates how elif allows for checking multiple specific conditions in sequence, while else provides a way to handle all remaining cases that don't match any of the preceding conditions. The choice between using elif or else depends on whether you need to check for specific conditions or if you want to handle all remaining cases in a single block.
'''

#//---------------------------------------------------------------------------------------------------------------------

# Nested conditionals
x = 10
y = 5

if x > 0:
    if y > 0:
        print("Both x and y are positive")
    else:
        print("x is positive, but y is not")
else:
    print("x is not positive")

# Conditional expressions (ternary operator)
age = 20
status = "adult" if age >= 18 else "minor"
print(status)  # Output: adult

# Using 'and', 'or', 'not' operators
x = 5
y = 10
z = 15

if x < y and y < z:
    print("y is between x and z")

if x < y or x < z:
    print("x is less than at least one of y or z")

if not x > y:
    print("x is not greater than y")

# Checking membership with 'in'
fruits = ["apple", "banana", "cherry"]
if "banana" in fruits:
    print("Yes, banana is a fruit!")

# Using 'is' for identity comparison
x = [1, 2, 3]
y = x
z = [1, 2, 3]

if x is y:
    print("x and y refer to the same object")

if x is not z:
    print("x and z are different objects")

# Handling exceptions with try-except
try:
    result = 10 / 0
except ZeroDivisionError:
    print("Cannot divide by zero")

# Using any() and all() functions
numbers = [1, 3, 5, 7, 9]
if all(num % 2 != 0 for num in numbers):
    print("All numbers are odd")

if any(num > 5 for num in numbers):
    print("At least one number is greater than 5")
