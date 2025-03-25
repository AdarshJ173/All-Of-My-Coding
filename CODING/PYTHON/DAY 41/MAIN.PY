'''SHORT HAND IF ELSE STATEMENTS'''

'''
Certainly! In programming, shorthand if-else statements are a concise way to write conditional logic. They allow you to write code that performs different actions based on a condition.

Here's an example of a shorthand if-else statement in Python:

x = 5
result = "Even" if x % 2 == 0 else "Odd"
print(result)

In this example, the value of x is checked against the condition x % 2 == 0. If the condition is true (i.e., x is even), the value assigned to result is "Even". Otherwise, if the condition is false (i.e., x is odd), the value assigned to result is "Odd".

The shorthand if-else statement is a concise way to write the equivalent code using a traditional if-else statement:

x = 5
if x % 2 == 0:
    result = "Even"
else:
    result = "Odd"
print(result)

Both versions of the code will produce the same output. The shorthand if-else statement provides a more compact and readable way to handle conditional logic.
'''

a = 438
b = 8646

# print("A") if a>b else print("=") if a == b else print("B")

# there is also a shorthand syntax for the if-else statement that can be used when the condition being tested is simple and the code blocks to be executed are short.

# print(9) if a>b else ""
print(8) if a>b else 0

# c = 9 if a>b else 0
# print(c)


''' { generic example}

result = value_if_true if condition else value_if_false

the above syntax is equivalent to :

if condition:
    value_if_true
else:
    value_if_false
'''

# The shorthand syntax can be a convinient  way to write simple if-else statements, especially when you want to assign a value to a variable based on a condition.
# However, its not suitable for more complex conditions/situations. where you need to execute multiple if-else statements. or perform more complex logic. In those cases, its best to use the full if-else syntax. 

