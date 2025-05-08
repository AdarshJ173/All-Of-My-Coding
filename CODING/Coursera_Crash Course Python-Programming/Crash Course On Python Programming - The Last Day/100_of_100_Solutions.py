# Variables and Data Types

# 1. Declare a variable named 'age' and assign it the value 25.
age = 25

# 2. Create a variable to store your name as a string.
name = "John Doe"

# 3. Declare a variable to hold the value of pi (3.14159).
pi = 3.14159

# 4. Create a boolean variable named 'is_student' and set it to True.
is_student = True

# 5. Declare a variable to store a list of your favorite colors.
favorite_colors = ["blue", "green", "red"]

# Strings and String Methods

# 6. Create a string variable with your full name and print its length.
full_name = "John Michael Doe"
print(len(full_name))  # Output: 16

# 7. Convert the string "Hello, World!" to uppercase.
print("Hello, World!".upper())  # Output: HELLO, WORLD!

# 8. Extract the first three characters from the string "Python".
print("Python"[:3])  # Output: Pyt

# 9. Replace all occurrences of 'a' with '@' in the string "banana".
print("banana".replace('a', '@'))  # Output: b@n@n@

# 10. Check if the string "Python programming" starts with "Python".
print("Python programming".startswith("Python"))  # Output: True

# F-strings

# 11. Use an f-string to print your name and age.
print(f"My name is {name} and I am {age} years old.")

# 12. Create an f-string that calculates and prints the area of a rectangle.
width, height = 5, 3
print(f"The area of a {width}x{height} rectangle is {width * height}.")

# 13. Use an f-string to format a float number to two decimal places.
price = 19.99999
print(f"The price is ${price:.2f}")  # Output: The price is $20.00

# 14. Create an f-string that includes a mathematical expression.
x = 5
print(f"The square of {x} is {x**2}")

# 15. Use an f-string to print a dictionary's keys and values.
person = {'name': 'Alice', 'age': 30}
print(f"Person: {person['name']} is {person['age']} years old.")

# Indexing

# 16. Print the last character of the string "Python" using negative indexing.
print("Python"[-1])  # Output: n

# 17. Access the second element of the list [1, 2, 3, 4, 5].
numbers = [1, 2, 3, 4, 5]
print(numbers[1])  # Output: 2

# 18. Print the first and last elements of the tuple (10, 20, 30, 40, 50).
my_tuple = (10, 20, 30, 40, 50)
print(f"First: {my_tuple[0]}, Last: {my_tuple[-1]}")

# 19. Create a string and print its middle character.
text = "Python"
middle_index = len(text) // 2
print(f"Middle character: {text[middle_index]}")

# 20. Access the value for the key 'name' in the dictionary {'name': 'Alice', 'age': 30}.
person = {'name': 'Alice', 'age': 30}
print(person['name'])  # Output: Alice

# Input and Typecasting

# 21. Ask the user for their age and convert it to an integer.
user_age = int(input("Enter your age: "))

# 22. Get two numbers from the user and print their sum.
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
print(f"Sum: {num1 + num2}")

# 23. Ask the user for their height in meters and convert it to a float.
height = float(input("Enter your height in meters: "))

# 24. Get a string input from the user and convert it to lowercase.
user_input = input("Enter some text: ").lower()
print(f"Lowercase: {user_input}")

# 25. Ask the user for a boolean value (True/False) and convert the input to a boolean.
user_bool = input("Enter True or False: ").lower() == 'true'
print(f"Boolean value: {user_bool}")

# Operators

# 26. Calculate the remainder when 17 is divided by 3.
print(17 % 3)  # Output: 2

# 27. Use the exponentiation operator to calculate 2 to the power of 5.
print(2 ** 5)  # Output: 32

# 28. Check if 10 is greater than 5 and 20 is less than 30 using logical operators.
print(10 > 5 and 20 < 30)  # Output: True

# 29. Use the 'in' operator to check if 'a' is in the string "Hello".
print('a' in "Hello")  # Output: False

# 30. Perform floor division of 17 by 3.
print(17 // 3)  # Output: 5

# Conditionals (if, else, elif)

# 31. Write a program to check if a number is positive, negative, or zero.
def check_number(num):
    if num > 0:
        return "Positive"
    elif num < 0:
        return "Negative"
    else:
        return "Zero"

print(check_number(5))  # Output: Positive

# 32. Create a simple calculator that performs addition, subtraction, multiplication, or division based on user input.
def calculator(a, b, operation):
    if operation == '+':
        return a + b
    elif operation == '-':
        return a - b
    elif operation == '*':
        return a * b
    elif operation == '/':
        return a / b if b != 0 else "Error: Division by zero"
    else:
        return "Invalid operation"

print(calculator(10, 5, '+'))  # Output: 15

# 33. Write a program to determine if a year is a leap year.
def is_leap_year(year):
    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)

print(is_leap_year(2020))  # Output: True

# 34. Create a program that gives a grade (A, B, C, D, or F) based on a numerical score.
def get_grade(score):
    if score >= 90:
        return 'A'
    elif score >= 80:
        return 'B'
    elif score >= 70:
        return 'C'
    elif score >= 60:
        return 'D'
    else:
        return 'F'

print(get_grade(85))  # Output: B

# 35. Write a program to find the maximum of three numbers.
def max_of_three(a, b, c):
    return max(a, b, c)

print(max_of_three(10, 5, 8))  # Output: 10

# Loops (for and while)

# 36. Print the first 10 natural numbers using a for loop.
for i in range(1, 11):
    print(i, end=' ')
# Output: 1 2 3 4 5 6 7 8 9 10

# 37. Calculate the sum of numbers from 1 to 100 using a while loop.
total = 0
num = 1
while num <= 100:
    total += num
    num += 1
print(f"\nSum: {total}")  # Output: Sum: 5050

# 38. Print the multiplication table of a given number.
def multiplication_table(n):
    for i in range(1, 11):
        print(f"{n} x {i} = {n*i}")

multiplication_table(5)

# 39. Find the factorial of a number using a for loop.
def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result

print(factorial(5))  # Output: 120

# 40. Print all even numbers between 1 and 20 using a while loop.
num = 2
while num <= 20:
    print(num, end=' ')
    num += 2
# Output: 2 4 6 8 10 12 14 16 18 20

# Break and Continue

# 41. Use a break statement to exit a loop when it encounters a specific number.
for i in range(1, 11):
    if i == 5:
        break
    print(i, end=' ')
# Output: 1 2 3 4

# 42. Use continue to skip printing multiples of 3 in a range from 1 to 20.
print()  # New line
for i in range(1, 21):
    if i % 3 == 0:
        continue
    print(i, end=' ')
# Output: 1 2 4 5 7 8 10 11 13 14 16 17 19 20

# 43. Create a program that keeps asking for input until the user types 'quit'.
while True:
    user_input = input("\nEnter something (type 'quit' to exit): ")
    if user_input.lower() == 'quit':
        break
    print(f"You entered: {user_input}")

# 44. Print numbers from 1 to 50, but skip multiples of 7 using continue.
for i in range(1, 51):
    if i % 7 == 0:
        continue
    print(i, end=' ')

# 45. Create a loop that breaks when it finds the first prime number after 20.
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

num = 21
while True:
    if is_prime(num):
        print(f"\nFirst prime after 20: {num}")
        break
    num += 1

# Functions and Function Arguments

# 46. Write a function to calculate the area of a circle given its radius.
import math

def circle_area(radius):
    return math.pi * radius ** 2

print(f"Area of circle with radius 5: {circle_area(5):.2f}")

# 47. Create a function that takes a name as an argument and prints a greeting.
def greet(name):
    print(f"Hello, {name}!")

greet("Alice")

# 48. Write a function to check if a number is even or odd.
def is_even(num):
    return num % 2 == 0

print(f"Is 7 even? {is_even(7)}")

# 49. Create a function that returns the maximum of two numbers.
def max_of_two(a, b):
    return max(a, b)

print(f"Max of 8 and 12: {max_of_two(8, 12)}")

# 50. Write a function that takes a variable number of arguments and returns their sum.
def sum_all(*args):
    return sum(args)

print(f"Sum of 1, 2, 3, 4, 5: {sum_all(1, 2, 3, 4, 5)}")

# Lists

# 51. Create a list of numbers and find its length.
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(f"Length of the list: {len(numbers)}")

# 52. Add an element to the end of a list.
numbers.append(11)
print(f"List after appending 11: {numbers}")

# 53. Remove a specific element from a list.
numbers.remove(5)
print(f"List after removing 5: {numbers}")

# 54. Sort a list of numbers in descending order.
numbers.sort(reverse=True)
print(f"List sorted in descending order: {numbers}")

# 55. Create a new list containing only the even numbers from an existing list.
even_numbers = [num for num in numbers if num % 2 == 0]
print(f"Even numbers: {even_numbers}")

# Tuples

# 56. Create a tuple with three elements and print them.
my_tuple = (1, "hello", 3.14)
print(f"Tuple: {my_tuple}")

# 57. Try to modify an element of a tuple and handle the error.
try:
    my_tuple[0] = 2
except TypeError as e:
    print(f"Error: {e}")

# 58. Unpack a tuple into individual variables.
a, b, c = my_tuple
print(f"Unpacked values: a={a}, b={b}, c={c}")

# 59. Find the index of a specific element in a tuple.
print(f"Index of 'hello' in the tuple: {my_tuple.index('hello')}")

# 60. Convert a tuple to a list and back to a tuple.
tuple_to_list = list(my_tuple)
list_to_tuple = tuple(tuple_to_list)
print(f"Converted back to tuple: {list_to_tuple}")

# Dictionaries

# 61. Create a dictionary to store information about a person (name, age, city).
person = {"name": "John Doe", "age": 30, "city": "New York"}
print(f"Person: {person}")

# 62. Add a new key-value pair to an existing dictionary.
person["occupation"] = "Engineer"
print(f"Updated person: {person}")

# 63. Remove a key-value pair from a dictionary.
del person["age"]
print(f"Person after removing age: {person}")

# 64. Check if a key exists in a dictionary.
print(f"Does 'name' exist in the dictionary? {'name' in person}")

# 65. Print all keys and values of a dictionary separately.
print(f"Keys: {list(person.keys())}")
print(f"Values: {list(person.values())}")

# Mixed Concepts - Basic

# 66. Create a function that takes a list of numbers and returns the average.
def calculate_average(numbers):
    return sum(numbers) / len(numbers) if numbers else 0

print(f"Average of [1, 2, 3, 4, 5]: {calculate_average([1, 2, 3, 4, 5])}")

# 67. Write a program that counts the frequency of each character in a string.
def char_frequency(string):
    return {char: string.count(char) for char in set(string)}

print(f"Character frequency in 'hello': {char_frequency('hello')}")

# 68. Create a list of tuples, each containing a name and an age, then sort the list based on age.
people = [("Alice", 25), ("Bob", 30), ("Charlie", 22)]
sorted_people = sorted(people, key=lambda x: x[1])
print(f"Sorted people: {sorted_people}")

# 69. Write a function that takes a sentence and returns the longest word.
def longest_word(sentence):
    return max(sentence.split(), key=len)

print(f"Longest word in 'The quick brown fox': {longest_word('The quick brown fox')}")

# 70. Create a program that simulates a simple bank account (deposit, withdraw, check balance).
class BankAccount:
    def __init__(self, balance=0):
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        return f"Deposited ${amount}. New balance: ${self.balance}"

    def withdraw(self, amount):
        if amount > self.balance:
            return "Insufficient funds"
        self.balance -= amount
        return f"Withdrew ${amount}. New balance: ${self.balance}"

    def check_balance(self):
        return f"Current balance: ${self.balance}"

account = BankAccount(100)
print(account.deposit(50))
print(account.withdraw(30))
print(account.check_balance())

# Mixed Concepts - Intermediate

# 71. Write a program to find all prime numbers up to a given number using a function.
def sieve_of_eratosthenes(n):
    primes = [True] * (n + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(n**0.5) + 1):
        if primes[i]:
            for j in range(i*i, n+1, i):
                primes[j] = False
    return [i for i in range(2, n+1) if primes[i]]

print(f"Prime numbers up to 20: {sieve_of_eratosthenes(20)}")

# 72. Create a function that checks if a given word is a palindrome.
def is_palindrome(word):
    return word.lower() == word.lower()[::-1]

print(f"Is 'racecar' a palindrome? {is_palindrome('racecar')}")

# 73. Write a program that removes all duplicates from a list while preserving the original order.
def remove_duplicates(lst):
    seen = set()
    return [x for x in lst if not (x in seen or seen.add(x))]

print(f"List after removing duplicates: {remove_duplicates([1, 2, 2, 3, 4, 3, 5])}")

# 74. Create a function that takes a dictionary and returns a new dictionary with keys and values swapped.
def swap_dict(d):
    return {v: k for k, v in d.items()}

original_dict = {"a": 1, "b": 2, "c": 3}
print(f"Swapped dictionary: {swap_dict(original_dict)}")

# 75. Write a program that simulates a simple game of hangman.
import random

def hangman():
    words = ["python", "programming", "computer", "science", "algorithm"]
    word = random.choice(words)
    word_letters = set(word)
    alphabet = set('abcdefghijklmnopqrstuvwxyz')
    used_letters = set()
    lives = 6

    while len(word_letters) > 0 and lives > 0:
        print("You have", lives, "lives left and you have used these letters: ", ' '.join(used_letters))
        word_list = [letter if letter in used_letters else "-" for letter in word]
        print("Current word: ", ' '.join(word_list))

        user_letter = input("Guess a letter: ").lower()
        if user_letter in alphabet - used_letters:
            used_letters.add(user_letter)
            if user_letter in word_letters:
                word_letters.remove(user_letter)
            else:
                lives = lives - 1
                print("Letter is not in the word.")
        elif user_letter in used_letters:
            print("You have already used that letter. Please try again.")
        else:
            print("Invalid character. Please try again.")

    if lives == 0:
        print("Sorry, you died. The word was", word)
    else:
        print("Congratulations! You guessed the word", word, "!!")

# Uncomment the line below to play Hangman
# hangman()

# Mixed Concepts - Advanced

# 76. Implement a basic calculator that can handle multiple operations in a single expression (e.g., "2 + 3 * 4").
import operator

def calculate(expression):
    operators = {'+': operator.add, '-': operator.sub, '*': operator.mul, '/': operator.truediv}
    tokens = expression.split()
    values = []
    ops = []
    
    for token in tokens:
        if token in operators:
            ops.append(token)
        else:
            values.append(float(token))
    
    while ops:
        if len(ops) > 1 and ops[-2] in ['*', '/'] and ops[-1] in ['+', '-']:
            op = ops.pop(-2)
            b, a = values.pop(), values.pop()
            values.append(operators[op](a, b))
        else:
            op = ops.pop()
            b, a = values.pop(), values.pop()
            values.append(operators[op](a, b))
    
    return values[0]

print(calculate("2 + 3 * 4"))  # Output: 14.0

# 77. Create a function that generates the Fibonacci sequence up to n terms using a generator.
def fibonacci_generator(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

print(list(fibonacci_generator(10)))  # Output: [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]

# 78. Write a program that reads a CSV file and performs basic analysis (e.g., average, max, min) on numerical columns.
import csv
from statistics import mean

def analyze_csv(file_path, column_index):
    with open(file_path, 'r') as file:
        reader = csv.reader(file)
        next(reader)  # Skip header
        data = [float(row[column_index]) for row in reader]
    
    return {
        'average': mean(data),
        'max': max(data),
        'min': min(data)
    }

# Uncomment and modify the line below to use with an actual CSV file
# print(analyze_csv('data.csv', 1))

# 79. Implement a simple text-based adventure game using functions and dictionaries.
def adventure_game():
    rooms = {
        'Hall': {'south': 'Kitchen', 'east': 'Dining Room', 'item': 'key'},
        'Kitchen': {'north': 'Hall', 'item': 'monster'},
        'Dining Room': {'west': 'Hall', 'south': 'Garden', 'item': 'potion'},
        'Garden': {'north': 'Dining Room'}
    }
    
    current_room = 'Hall'
    inventory = []
    
    while True:
        print(f"You are in the {current_room}")
        print(f"Inventory: {inventory}")
        
        if 'item' in rooms[current_room] and rooms[current_room]['item'] not in inventory:
            print(f"You see a {rooms[current_room]['item']}")
        
        command = input("Enter your command: ").lower().split()
        
        if command[0] == 'go':
            direction = command[1]
            if direction in rooms[current_room]:
                current_room = rooms[current_room][direction]
            else:
                print("You can't go that way!")
        elif command[0] == 'get':
            if 'item' in rooms[current_room] and command[1] == rooms[current_room]['item']:
                inventory.append(rooms[current_room]['item'])
                del rooms[current_room]['item']
            else:
                print("Can't get that item!")
        elif command[0] == 'quit':
            print("Thanks for playing!")
            break
        else:
            print("I don't understand that command.")

# Uncomment the line below to play the adventure game
# adventure_game()

# 80. Create a program that simulates a deck of cards, with functions to shuffle and deal.
import random

class Card:
    def __init__(self, suit, value):
        self.suit = suit
        self.value = value
    
    def __repr__(self):
        return f"{self.value} of {self.suit}"

class Deck:
    def __init__(self):
        suits = ['Hearts', 'Diamonds', 'Clubs', 'Spades']
        values = ['A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K']
        self.cards = [Card(suit, value) for suit in suits for value in values]
    
    def shuffle(self):
        random.shuffle(self.cards)
    
    def deal(self, num_cards):
        return [self.cards.pop() for _ in range(min(num_cards, len(self.cards)))]

deck = Deck()
deck.shuffle()
print(deck.deal(5))

# Mixed Concepts - More Advanced

# 81. Implement a basic version of the game "Tic Tac Toe" for two players.
def tic_tac_toe():
    board = [' ' for _ in range(9)]
    player = 'X'
    
    def print_board():
        for i in range(0, 9, 3):
            print(f"{board[i]} | {board[i+1]} | {board[i+2]}")
            if i < 6:
                print("---------")
    
    def is_winner(player):
        win_conditions = [
            [0, 1, 2], [3, 4, 5], [6, 7, 8],  # Rows
            [0, 3, 6], [1, 4, 7], [2, 5, 8],  # Columns
            [0, 4, 8], [2, 4, 6]  # Diagonals
        ]
        return any(all(board[i] == player for i in condition) for condition in win_conditions)
    
    while True:
        print_board()
        move = int(input(f"Player {player}, enter your move (0-8): "))
        if board[move] == ' ':
            board[move] = player
            if is_winner(player):
                print_board()
                print(f"Player {player} wins!")
                break
            if ' ' not in board:
                print_board()
                print("It's a tie!")
                break
            player = 'O' if player == 'X' else 'X'
        else:
            print("That space is already occupied!")

# Uncomment the line below to play Tic Tac Toe
# tic_tac_toe()

# 82. Create a function that solves a quadratic equation and returns the roots.
import math

def solve_quadratic(a, b, c):
    discriminant = b**2 - 4*a*c
    if discriminant > 0:
        root1 = (-b + math.sqrt(discriminant)) / (2*a)
        root2 = (-b - math.sqrt(discriminant)) / (2*a)
        return root1, root2
    elif discriminant == 0:
        root = -b / (2*a)
        return root,
    else:
        return "No real roots"

print(solve_quadratic(1, 5, 6))  # Output: (-2.0, -3.0)

# 83. Write a program that implements a simple Caesar cipher for encrypting and decrypting messages.
def caesar_cipher(text, shift, mode='encrypt'):
    result = ""
    for char in text:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            if mode == 'encrypt':
                result += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
            else:
                result += chr((ord(char) - ascii_offset - shift) % 26 + ascii_offset)
        else:
            result += char
    return result

message = "Hello, World!"
encrypted = caesar_cipher(message, 3, 'encrypt')
decrypted = caesar_cipher(encrypted, 3, 'decrypt')
print(f"Original: {message}")
print(f"Encrypted: {encrypted}")
print(f"Decrypted: {decrypted}")

# 84. Create a function that calculates the distance between two points in 2D space.
def distance(p1, p2):
    return math.sqrt((p2[0] - p1[0])**2 + (p2[1] - p1[1])**2)

print(f"Distance between (0,0) and (3,4): {distance((0,0), (3,4))}")

# 85. Implement a basic stack data structure with push, pop, and peek operations using a list.
class Stack:
    def __init__(self):
        self.items = []
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
    
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
    
    def is_empty(self):
        return len(self.items) == 0
    
    def size(self):
        return len(self.items)

stack = Stack()
stack.push(1)
stack.push(2)
print(f"Top item: {stack.peek()}")
print(f"Popped item: {stack.pop()}")
print(f"Stack size: {stack.size()}")

# 86. Create a program that generates a maze and solves it using a simple algorithm.
import random

def create_maze(width, height):
    # Initialize the maze with walls
    maze = [[1 for _ in range(width)] for _ in range(height)]
    
    def carve_path(x, y):
        maze[y][x] = 0
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        random.shuffle(directions)
        for dx, dy in directions:
            nx, ny = x + dx*2, y + dy*2
            if 0 <= nx < width and 0 <= ny < height and maze[ny][nx] == 1:
                maze[y+dy][x+dx] = 0
                carve_path(nx, ny)
    
    # Start carving from the top-left corner
    carve_path(1, 1)
    
    # Set start and end points
    maze[1][0] = maze[height-2][width-1] = 0
    return maze

def solve_maze(maze):
    height, width = len(maze), len(maze[0])
    start = (0, 1)
    end = (width-1, height-2)
    
    queue = [(start, [start])]
    visited = set()
    
    while queue:
        (x, y), path = queue.pop(0)
        if (x, y) == end:
            return path
        
        if (x, y) not in visited:
            visited.add((x, y))
            for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
                nx, ny = x + dx, y + dy
                if 0 <= nx < width and 0 <= ny < height and maze[ny][nx] == 0:
                    queue.append(((nx, ny), path + [(nx, ny)]))
    
    return None  # No path found

# Generate and solve a maze
maze = create_maze(15, 15)
solution = solve_maze(maze)

# Print the maze with the solution path
for y in range(len(maze)):
    for x in range(len(maze[0])):
        if (x, y) in solution:
            print("O", end="")
        elif maze[y][x] == 1:
            print("█", end="")
        else:
            print(" ", end="")
    print()

# 87. Implement a basic version of the game "Connect Four" for two players.
class ConnectFour:
    def __init__(self, rows=6, cols=7):
        self.rows = rows
        self.cols = cols
        self.board = [[' ' for _ in range(cols)] for _ in range(rows)]
        self.current_player = 'X'

    def drop_piece(self, col):
        for row in range(self.rows-1, -1, -1):
            if self.board[row][col] == ' ':
                self.board[row][col] = self.current_player
                return True
        return False

    def check_winner(self):
        # Check horizontal, vertical, and diagonal
        for row in range(self.rows):
            for col in range(self.cols):
                if (self.check_line(row, col, 0, 1) or  # Horizontal
                    self.check_line(row, col, 1, 0) or  # Vertical
                    self.check_line(row, col, 1, 1) or  # Diagonal /
                    self.check_line(row, col, 1, -1)):  # Diagonal \
                    return self.board[row][col]
        return None

    def check_line(self, row, col, dr, dc):
        if row + 3*dr >= self.rows or col + 3*dc >= self.cols or col + 3*dc < 0:
            return False
        player = self.board[row][col]
        if player == ' ':
            return False
        for i in range(1, 4):
            if self.board[row + i*dr][col + i*dc] != player:
                return False
        return True

    def is_full(self):
        return all(self.board[0][col] != ' ' for col in range(self.cols))

    def print_board(self):
        for row in self.board:
            print('|' + '|'.join(row) + '|')
        print('-' * (self.cols * 2 + 1))
        print(' ' + ' '.join(str(i) for i in range(self.cols)))

    def play(self):
        while True:
            self.print_board()
            col = int(input(f"Player {self.current_player}, choose a column (0-{self.cols-1}): "))
            if 0 <= col < self.cols and self.drop_piece(col):
                winner = self.check_winner()
                if winner:
                    self.print_board()
                    print(f"Player {winner} wins!")
                    break
                if self.is_full():
                    self.print_board()
                    print("It's a tie!")
                    break
                self.current_player = 'O' if self.current_player == 'X' else 'X'
            else:
                print("Invalid move. Try again.")

# Uncomment the following lines to play Connect Four
# game = ConnectFour()
# game.play()

# 88. Write a program that simulates a simple vending machine with products, prices, and coin handling.
class VendingMachine:
    def __init__(self):
        self.products = {
            'A1': {'name': 'Cola', 'price': 1.50, 'quantity': 5},
            'A2': {'name': 'Chips', 'price': 1.00, 'quantity': 5},
            'A3': {'name': 'Candy', 'price': 0.75, 'quantity': 5}
        }
        self.balance = 0.0

    def display_products(self):
        print("Available products:")
        for code, product in self.products.items():
            print(f"{code}: {product['name']} - ${product['price']:.2f} ({product['quantity']} left)")

    def insert_coin(self, amount):
        self.balance += amount
        print(f"Current balance: ${self.balance:.2f}")

    def select_product(self, code):
        if code not in self.products:
            print("Invalid product code.")
            return
        product = self.products[code]
        if product['quantity'] == 0:
            print("Product out of stock.")
            return
        if self.balance < product['price']:
            print("Insufficient funds.")
            return
        
        self.balance -= product['price']
        product['quantity'] -= 1
        print(f"Dispensing {product['name']}.")
        self.return_change()

    def return_change(self):
        if self.balance > 0:
            print(f"Returning change: ${self.balance:.2f}")
            self.balance = 0.0

    def run(self):
        while True:
            self.display_products()
            action = input("Enter 'i' to insert coin, 's' to select product, or 'q' to quit: ").lower()
            if action == 'i':
                amount = float(input("Enter coin amount: "))
                self.insert_coin(amount)
            elif action == 's':
                code = input("Enter product code: ").upper()
                self.select_product(code)
            elif action == 'q':
                self.return_change()
                print("Thank you for using the vending machine.")
                break
            else:
                print("Invalid action.")

# Uncomment the following lines to run the vending machine simulation
# vm = VendingMachine()
# vm.run()

# 89. Create a function that performs matrix multiplication for two 2D lists.
def matrix_multiply(A, B):
    if len(A[0]) != len(B):
        raise ValueError("Incompatible matrix dimensions")
    
    result = [[0 for _ in range(len(B[0]))] for _ in range(len(A))]
    
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                result[i][j] += A[i][k] * B[k][j]
    
    return result

# Example usage
A = [[1, 2], [3, 4]]
B = [[5, 6], [7, 8]]
result = matrix_multiply(A, B)
print("Matrix A:")
for row in A:
    print(row)
print("Matrix B:")
for row in B:
    print(row)
print("Result of A * B:")
for row in result:
    print(row)

# 90. Implement a basic spell checker that suggests corrections for misspelled words.
import re
from collections import Counter

def words(text):
    return re.findall(r'\w+', text.lower())

WORDS = Counter(words(open('path_to_large_text_file.txt').read()))

def P(word, N=sum(WORDS.values())): 
    "Probability of `word`."
    return WORDS[word] / N

def correction(word): 
    "Most probable spelling correction for word."
    return max(candidates(word), key=P)

def candidates(word): 
    "Generate possible spelling corrections for word."
    return (known([word]) or known(edits1(word)) or known(edits2(word)) or [word])

def known(words): 
    "The subset of `words` that appear in the dictionary of WORDS."
    return set(w for w in words if w in WORDS)

def edits1(word):
    "All edits that are one edit away from `word`."
    letters    = 'abcdefghijklmnopqrstuvwxyz'
    splits     = [(word[:i], word[i:])    for i in range(len(word) + 1)]
    deletes    = [L + R[1:]               for L, R in splits if R]
    transposes = [L + R[1] + R[0] + R[2:] for L, R in splits if len(R)>1]
    replaces   = [L + c + R[1:]           for L, R in splits if R for c in letters]
    inserts    = [L + c + R               for L, R in splits for c in letters]
    return set(deletes + transposes + replaces + inserts)

def edits2(word): 
    "All edits that are two edits away from `word`."
    return (e2 for e1 in edits1(word) for e2 in edits1(e1))

# Note: This spell checker requires a large text file to build the word frequency dictionary.
# You would need to replace 'path_to_large_text_file.txt' with an actual file path.

# Example usage (commented out as it requires the text file):
# misspelled = 'speling'
# print(correction(misspelled))

# 91. Create a program that simulates a simple database with CRUD operations using dictionaries.

class SimpleDatabase:
    def __init__(self):
        self.tables = {}

    def create_table(self, table_name):
        if table_name not in self.tables:
            self.tables[table_name] = {}
            print(f"Table '{table_name}' created.")
        else:
            print(f"Table '{table_name}' already exists.")

    def create_record(self, table_name, record_id, data):
        if table_name in self.tables:
            if record_id not in self.tables[table_name]:
                self.tables[table_name][record_id] = data
                print(f"Record {record_id} created in table '{table_name}'.")
            else:
                print(f"Record {record_id} already exists in table '{table_name}'.")
        else:
            print(f"Table '{table_name}' does not exist.")

    def read_record(self, table_name, record_id):
        if table_name in self.tables:
            if record_id in self.tables[table_name]:
                return self.tables[table_name][record_id]
            else:
                print(f"Record {record_id} not found in table '{table_name}'.")
        else:
            print(f"Table '{table_name}' does not exist.")
        return None

    def update_record(self, table_name, record_id, data):
        if table_name in self.tables:
            if record_id in self.tables[table_name]:
                self.tables[table_name][record_id].update(data)
                print(f"Record {record_id} updated in table '{table_name}'.")
            else:
                print(f"Record {record_id} not found in table '{table_name}'.")
        else:
            print(f"Table '{table_name}' does not exist.")

    def delete_record(self, table_name, record_id):
        if table_name in self.tables:
            if record_id in self.tables[table_name]:
                del self.tables[table_name][record_id]
                print(f"Record {record_id} deleted from table '{table_name}'.")
            else:
                print(f"Record {record_id} not found in table '{table_name}'.")
        else:
            print(f"Table '{table_name}' does not exist.")

# Example usage:
db = SimpleDatabase()
db.create_table("users")
db.create_record("users", 1, {"name": "Alice", "age": 30})
print(db.read_record("users", 1))
db.update_record("users", 1, {"age": 31})
print(db.read_record("users", 1))
db.delete_record("users", 1)

# 92. Implement a basic version of the game "Minesweeper".

import random

class Minesweeper:
    def __init__(self, width, height, num_mines):
        self.width = width
        self.height = height
        self.num_mines = num_mines
        self.board = [[0 for _ in range(width)] for _ in range(height)]
        self.visible = [[False for _ in range(width)] for _ in range(height)]
        self.place_mines()
        self.calculate_numbers()

    def place_mines(self):
        mines_placed = 0
        while mines_placed < self.num_mines:
            x, y = random.randint(0, self.width-1), random.randint(0, self.height-1)
            if self.board[y][x] != -1:
                self.board[y][x] = -1
                mines_placed += 1

    def calculate_numbers(self):
        for y in range(self.height):
            for x in range(self.width):
                if self.board[y][x] != -1:
                    self.board[y][x] = self.count_adjacent_mines(x, y)

    def count_adjacent_mines(self, x, y):
        count = 0
        for dx in [-1, 0, 1]:
            for dy in [-1, 0, 1]:
                nx, ny = x + dx, y + dy
                if 0 <= nx < self.width and 0 <= ny < self.height and self.board[ny][nx] == -1:
                    count += 1
        return count

    def reveal(self, x, y):
        if not self.visible[y][x]:
            self.visible[y][x] = True
            if self.board[y][x] == 0:
                for dx in [-1, 0, 1]:
                    for dy in [-1, 0, 1]:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < self.width and 0 <= ny < self.height:
                            self.reveal(nx, ny)
        return self.board[y][x] != -1

    def print_board(self):
        for y in range(self.height):
            for x in range(self.width):
                if self.visible[y][x]:
                    print(self.board[y][x] if self.board[y][x] != -1 else '*', end=' ')
                else:
                    print('.', end=' ')
            print()

    def play(self):
        while True:
            self.print_board()
            try:
                x, y = map(int, input("Enter coordinates (x y): ").split())
                if not self.reveal(x, y):
                    print("Game Over! You hit a mine.")
                    break
                if all(self.visible[y][x] or self.board[y][x] == -1 for x in range(self.width) for y in range(self.height)):
                    print("Congratulations! You've won!")
                    break
            except ValueError:
                print("Invalid input. Please enter two numbers separated by a space.")

# Uncomment to play Minesweeper
# game = Minesweeper(8, 8, 10)
# game.play()

# 93. Write a program that performs basic image processing operations (e.g., rotate, flip) on a 2D list representing pixel values.

class ImageProcessor:
    def __init__(self, image):
        self.image = image
        self.height = len(image)
        self.width = len(image[0])

    def rotate_90_clockwise(self):
        return [[self.image[y][x] for y in range(self.height-1, -1, -1)] for x in range(self.width)]

    def flip_horizontal(self):
        return [row[::-1] for row in self.image]

    def flip_vertical(self):
        return self.image[::-1]

    def invert_colors(self):
        return [[255 - pixel for pixel in row] for row in self.image]

    def apply_threshold(self, threshold):
        return [[255 if pixel > threshold else 0 for pixel in row] for row in self.image]

    def print_image(self, image=None):
        if image is None:
            image = self.image
        for row in image:
            print(' '.join(f"{pixel:3}" for pixel in row))

# Example usage:
image = [
    [100, 150, 200],
    [120, 170, 210],
    [130, 180, 220]
]

processor = ImageProcessor(image)
print("Original Image:")
processor.print_image()

print("\nRotated 90 degrees clockwise:")
rotated = processor.rotate_90_clockwise()
processor.print_image(rotated)

print("\nFlipped horizontally:")
flipped_h = processor.flip_horizontal()
processor.print_image(flipped_h)

print("\nInverted colors:")
inverted = processor.invert_colors()
processor.print_image(inverted)

print("\nApplied threshold (150):")
thresholded = processor.apply_threshold(150)
processor.print_image(thresholded)

# 94. Create a function that solves Sudoku puzzles.

def solve_sudoku(board):
    empty = find_empty(board)
    if not empty:
        return True
    row, col = empty

    for num in range(1, 10):
        if is_valid(board, num, (row, col)):
            board[row][col] = num

            if solve_sudoku(board):
                return True

            board[row][col] = 0

    return False

def find_empty(board):
    for i in range(len(board)):
        for j in range(len(board[0])):
            if board[i][j] == 0:
                return (i, j)
    return None

def is_valid(board, num, pos):
    # Check row
    for j in range(len(board[0])):
        if board[pos[0]][j] == num and pos[1] != j:
            return False

    # Check column
    for i in range(len(board)):
        if board[i][pos[1]] == num and pos[0] != i:
            return False

    # Check 3x3 box
    box_x = pos[1] // 3
    box_y = pos[0] // 3

    for i in range(box_y*3, box_y*3 + 3):
        for j in range(box_x*3, box_x*3 + 3):
            if board[i][j] == num and (i,j) != pos:
                return False

    return True

def print_board(board):
    for i in range(len(board)):
        if i % 3 == 0 and i != 0:
            print("- - - - - - - - - - - -")

        for j in range(len(board[0])):
            if j % 3 == 0 and j != 0:
                print("|", end=" ")

            if j == 8:
                print(board[i][j])
            else:
                print(str(board[i][j]) + " ", end="")

# Example Sudoku board (0 represents empty cells)
board = [
    [5,3,0,0,7,0,0,0,0],
    [6,0,0,1,9,5,0,0,0],
    [0,9,8,0,0,0,0,6,0],
    [8,0,0,0,6,0,0,0,3],
    [4,0,0,8,0,3,0,0,1],
    [7,0,0,0,2,0,0,0,6],
    [0,6,0,0,0,0,2,8,0],
    [0,0,0,4,1,9,0,0,5],
    [0,0,0,0,8,0,0,7,9]
]

print("Sudoku puzzle:")
print_board(board)
solve_sudoku(board)
print("\nSolved Sudoku:")
print_board(board)

# 95. Implement a simple compression algorithm for strings (e.g., run-length encoding).

def run_length_encode(string):
    if not string:
        return ""

    encoded = []
    count = 1
    current_char = string[0]

    for char in string[1:]:
        if char == current_char:
            count += 1
        else:
            encoded.append(f"{count}{current_char}")
            current_char = char
            count = 1

    encoded.append(f"{count}{current_char}")
    return ''.join(encoded)

def run_length_decode(string):
    decoded = []
    count = ''

    for char in string:
        if char.isdigit():
            count += char
        else:
            decoded.append(int(count) * char)
            count = ''

    return ''.join(decoded)

# Example usage:
original = "AABBBCCCC"
encoded = run_length_encode(original)
decoded = run_length_decode(encoded)

print(f"Original: {original}")
print(f"Encoded: {encoded}")
print(f"Decoded: {decoded}")