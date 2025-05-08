# Solutions for 50 Python Basic Concepts Questions

# 1. Greeting with name and age
name = input("What's your name? ")
age = input("How old are you? ")
print(f"Hello, {name}! You are {age} years old.")

# 2. List of favorite foods
favorite_foods = ["pizza", "sushi", "burgers", "ice cream", "pasta"]
print(favorite_foods[1], favorite_foods[3])

# 3. Function to sum two numbers
def add_numbers(a, b):
    return a + b

print(add_numbers(5, 3))

# 4. Print first 10 even numbers
for i in range(2, 21, 2):
    print(i)

# 5. Countdown skipping multiples of 3
i = 20
while i > 0:
    if i % 3 != 0:
        print(i)
    i -= 1

# 6. Check if number is positive, negative, or zero
num = float(input("Enter a number: "))
if num > 0:
    print("Positive")
elif num < 0:
    print("Negative")
else:
    print("Zero")

# 7. Dictionary of books and authors
books = {"1984": "George Orwell", "To Kill a Mockingbird": "Harper Lee", "Pride and Prejudice": "Jane Austen"}
for author in books.values():
    print(author)

# 8. Reverse a string
def reverse_string(s):
    return s[::-1]

print(reverse_string("Hello, World!"))

# 9. Split and join sentence
sentence = "The quick brown fox jumps over the lazy dog"
words = sentence.split()
print("-".join(words))

# 10. Celsius to Fahrenheit converter
celsius = float(input("Enter temperature in Celsius: "))
fahrenheit = (celsius * 9/5) + 32
print(f"{celsius}°C is equal to {fahrenheit}°F")

# 11. Count vowels in a string
def count_vowels(s):
    vowels = "aeiouAEIOU"
    count = 0
    for char in s:
        if char in vowels:
            count += 1
    return count

print(count_vowels("Hello, World!"))

# 12. Tuple of months
months = ("January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December")
print(months[5:8])

# 13. Find largest number in a list
def find_largest(numbers):
    return max(numbers)

print(find_largest([5, 2, 8, 1, 9]))

# 14. Number guessing game
import random

number = random.randint(1, 100)
while True:
    guess = int(input("Guess a number between 1 and 100: "))
    if guess == number:
        print("Correct!")
        break
    elif guess < number:
        print("Too low")
    else:
        print("Too high")

# 15. Remove spaces from a string
text = "Hello World Python Programming"
print(text.replace(" ", ""))

# 16. Calculate factorial
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n-1)

print(factorial(5))

# 17. List of squares using list comprehension
squares = [x**2 for x in range(1, 11)]
print(squares)

# 18. Find student with highest score
students = {"Alice": 85, "Bob": 92, "Charlie": 78, "David": 95}
top_student = max(students, key=students.get)
print(f"The student with the highest score is {top_student}")

# 19. Check if a year is a leap year
def is_leap_year(year):
    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)

print(is_leap_year(2024))

# 20. Print numbers except multiples of 3
for i in range(1, 21):
    if i % 3 == 0:
        continue
    print(i)

# 21. Character frequency in a string
def char_frequency(s):
    return {char: s.count(char) for char in set(s)}

print(char_frequency("hello"))

# 22. Simple calculator
def calculator(a, b, operation):
    if operation == "+":
        return a + b
    elif operation == "-":
        return a - b
    elif operation == "*":
        return a * b
    elif operation == "/":
        return a / b if b != 0 else "Error: Division by zero"
    else:
        return "Invalid operation"

print(calculator(5, 3, "+"))

# 23. String formatting for name, age, and city
name = "Alice"
age = 30
city = "New York"
print("My name is {}, I'm {} years old, and I live in {}.".format(name, age, city))

# 24. Print every third number from a list
numbers = list(range(1, 31))
print(numbers[::3])

# 25. Check if a number is prime
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

print(is_prime(17))

# 26. Simple multiplication table
for i in range(1, 11):
    for j in range(1, 11):
        print(f"{i*j:4}", end="")
    print()

# 27. Find second-largest number in a list
def second_largest(numbers):
    return sorted(set(numbers))[-2]

print(second_largest([5, 2, 8, 1, 9, 9]))

# 28. Find longest word in a sentence
def longest_word(sentence):
    return max(sentence.split(), key=len)

print(longest_word("The quick brown fox jumps over the lazy dog"))

# 29. Check if key exists in dictionary
fruits = {"apple": 1, "banana": 2, "orange": 3}
print("grape" in fruits)

# 30. Generate pattern of asterisks
for i in range(1, 6):
    print("*" * i)

# 31. Sort strings by length
def sort_by_length(strings):
    return sorted(strings, key=len)

print(sort_by_length(["apple", "banana", "cherry", "date"]))

# 32. Validate email address
import re

def is_valid_email(email):
    pattern = r'^[\w\.-]+@[\w\.-]+\.\w+$'
    return bool(re.match(pattern, email))

print(is_valid_email("user@example.com"))

# 33. Convert days to years, months, and days
def convert_days(days):
    years = days // 365
    months = (days % 365) // 30
    remaining_days = (days % 365) % 30
    return f"{years} years, {months} months, and {remaining_days} days"

print(convert_days(400))

# 34. Reverse words in a string
def reverse_words(sentence):
    return " ".join(sentence.split()[::-1])

print(reverse_words("Hello World Python"))

# 35. Combine two lists into a dictionary
keys = ["a", "b", "c"]
values = [1, 2, 3]
result = dict(zip(keys, values))
print(result)

# 36. Check if a number is perfect
def is_perfect(n):
    return sum(i for i in range(1, n) if n % i == 0) == n

print(is_perfect(28))

# 37. Remove duplicates from a list
def remove_duplicates(numbers):
    return list(dict.fromkeys(numbers))

print(remove_duplicates([1, 2, 2, 3, 4, 4, 5]))

# 38. Word frequency counter
def word_frequency(text):
    words = text.lower().split()
    return {word: words.count(word) for word in set(words)}

print(word_frequency("the quick brown fox jumps over the lazy dog"))

# 39. Generate random password
import random
import string

def generate_password(length):
    characters = string.ascii_letters + string.digits + string.punctuation
    return ''.join(random.choice(characters) for _ in range(length))

print(generate_password(12))

# 40. Count words in a sentence
def count_words(sentence):
    return len(sentence.split())

print(count_words("The quick brown fox jumps over the lazy dog"))

# 41. Simple to-do list
todo_list = []

def add_task(task):
    todo_list.append(task)

def remove_task(task):
    if task in todo_list:
        todo_list.remove(task)

add_task("Buy groceries")
add_task("Do laundry")
print(todo_list)
remove_task("Buy groceries")
print(todo_list)

# 42. Find numbers divisible by 3 and 5
divisible_numbers = [num for num in range(1, 101) if num % 3 == 0 and num % 5 == 0]
print(divisible_numbers)

# 43. Check if a string is a palindrome
def is_palindrome(s):
    s = ''.join(c.lower() for c in s if c.isalnum())
    return s == s[::-1]

print(is_palindrome("A man, a plan, a canal: Panama"))

# 44. Generate Fibonacci sequence
def fibonacci(n):
    sequence = [0, 1]
    while len(sequence) < n:
        sequence.append(sequence[-1] + sequence[-2])
    return sequence

print(fibonacci(10))

# 45. Country-capital quiz
countries = {"France": "Paris", "Germany": "Berlin", "Italy": "Rome", "Spain": "Madrid"}
for country, capital in countries.items():
    answer = input(f"What is the capital of {country}? ")
    if answer.lower() == capital.lower():
        print("Correct!")
    else:
        print(f"Wrong. The capital of {country} is {capital}.")

# 46. Die rolling simulation
import random

rolls = [random.randint(1, 6) for _ in range(1000)]
for i in range(1, 7):
    print(f"Number {i} appeared {rolls.count(i)} times")

# 47. Simple vowel cipher
def vowel_cipher(text):
    vowels = "aeiouAEIOU"
    cipher = "12345AEIOU"
    trans = str.maketrans(vowels, cipher)
    return text.translate(trans)

print(vowel_cipher("Hello, World!"))

# 48. Longest palindrome word
def longest_palindrome_word(words):
    palindromes = [word for word in words if word.lower() == word.lower()[::-1]]
    return max(palindromes, key=len) if palindromes else None

print(longest_palindrome_word(["level", "hello", "radar", "world", "madam"]))

# 49. Read CSV file
import csv

def read_csv(filename):
    with open(filename, 'r') as file:
        reader = csv.DictReader(file)
        return list(reader)

# Usage:
# data = read_csv('example.csv')
# print(data)

# 50. Rock-paper-scissors game
import random

def rock_paper_scissors():
    choices = ['rock', 'paper', 'scissors']
    
    while True:
        player_choice = input("Enter rock, paper, or scissors (or 'quit' to exit): ").lower()
        if player_choice == 'quit':
            break
        
        if player_choice not in choices:
            print("Invalid choice. Please try again.")
            continue
        
        computer_choice = random.choice(choices)
        print(f"Computer chose {computer_choice}")
        
        if player_choice == computer_choice:
            print("It's a tie!")
        elif (player_choice == 'rock' and computer_choice == 'scissors') or \
             (player_choice == 'paper' and computer_choice == 'rock') or \
             (player_choice == 'scissors' and computer_choice == 'paper'):
            print("You win!")
        else:
            print("Computer wins!")

rock_paper_scissors()