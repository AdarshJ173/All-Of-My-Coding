# Q1
x = 10
print(x)

# Q2
y = "Hello, World!"
print(y)

# Q3
print(type(42))

# Q4
language = "Python"
print(len(language))

# Q5
greeting = "Hello" + " " + "World"
print(greeting)

# Q6
def first_char(s):
    return s[0]

print(first_char("Python"))

# Q7
a = 15
b = 7
print(a + b)

# Q8
def square(n):
    return n * n

print(square(4))

# Q9
print(45 % 6)

# Q10
name = input("Enter your name: ")
print(f"Hello, {name}!")

# Q11
x = 10
print(f"The value of x is {x}")

# Q12
def is_even(n):
    return n % 2 == 0

print(is_even(4))

# Q13
def compare(a, b):
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return a  # or return b

print(compare(5, 3))

# Q14
s = "apple"
if "a" in s:
    print("Yes")
else:
    print("No")

# Q15
def greet(name):
    print(f"Hello, {name}!")

greet("Alice")

# Q16
def sum_numbers(a, b):
    return a + b

print(sum_numbers(3, 4))

# Q17
def absolute_difference(a, b):
    return abs(a - b)

print(absolute_difference(10, 6))

# Q18
numbers = [1, 2, 3, 4, 5]
for number in numbers:
    print(number)

# Q19
def sum_list(numbers):
    return sum(numbers)

print(sum_list([1, 2, 3, 4, 5]))

# Q20
def find_max(numbers):
    return max(numbers)

print(find_max([1, 2, 3, 4, 5]))

# Q21
s = "hello world"
print(s.upper())

# Q22
def count_vowels(s):
    vowels = "aeiouAEIOU"
    count = 0
    for char in s:
        if char in vowels:
            count += 1
    return count

print(count_vowels("hello world"))

# Q23
def reverse_string(s):
    return s[::-1]

print(reverse_string("Python"))

# Q24
def classify_number(n):
    if n > 0:
        return "Positive"
    elif n < 0:
        return "Negative"
    else:
        return "Zero"

print(classify_number(10))

# Q25
for num in range(1, 51):
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                break
        else:
            print(num)

# Q26
def fizz_buzz(n):
    if n % 3 == 0 and n % 5 == 0:
        return "FizzBuzz"
    elif n % 3 == 0:
        return "Fizz"
    elif n % 5 == 0:
        return "Buzz"
    else:
        return n

print(fizz_buzz(15))

# Q27
def filter_even(numbers):
    return [num for num in numbers if num % 2 == 0]

print(filter_even([1, 2, 3, 4, 5, 6]))

# Q28
def map_double(numbers):
    return [num * 2 for num in numbers]

print(map_double([1, 2, 3, 4, 5]))

# Q29
def find_second_largest(numbers):
    unique_numbers = list(set(numbers))
    unique_numbers.sort()
    return unique_numbers[-2]

print(find_second_largest([1, 2, 3, 4, 5]))

# Q30
name = "Alice"
age = 30
print(f"Name: {name}, Age: {age}")

# Q31
def format_date(day, month, year):
    return f"{day:02d}-{month:02d}-{year}"

print(format_date(5, 7, 2024))

# Q32
num = 123.456
print(f"{num:.2f}")

# Q33
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

print(factorial(5))

# Q34
def fibonacci(n):
    fib_seq = [0, 1]
    while len(fib_seq) < n:
        fib_seq.append(fib_seq[-1] + fib_seq[-2])
    return fib_seq[:n]

print(fibonacci(10))

# Q35
def is_palindrome(s):
    return s == s[::-1]

print(is_palindrome("racecar"))

# Q36
def grade(score):
    if score >= 90:
        return "A"
    elif score >= 80:
        return "B"
    elif score >= 70:
        return "C"
    elif score >= 60:
        return "D"
    else:
        return "F"

print(grade(85))

# Q37
def leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    else:
        return False

print(leap_year(2024))

# Q38
def unique_elements(lst):
    return list(set(lst))

print(unique_elements([1, 2, 2, 3, 4, 4, 5]))

# Q39
def rotate_list(lst, k):
    k = k % len(lst)
    return lst[-k:] + lst[:-k]

print(rotate_list([1, 2, 3, 4, 5], 2))

# Q40
def flatten(lst):
    return [item for sublist in lst for item in sublist]

print(flatten([[1, 2], [3, 4], [5, 6]]))

# Q41
def merge_sorted_lists(lst1, lst2):
    return sorted(lst1 + lst2)

print(merge_sorted_lists([1, 3, 5], [2, 4, 6]))

# Q42
def sum_recursive(lst):
    if not lst:
        return 0
    else:
        return lst[0] + sum_recursive(lst[1:])

print(sum_recursive([1, 2, 3, 4, 5]))

# Q43
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

print(gcd(48, 18))

# Q44
def power(base, exp):
    if exp == 0:
        return 1
    else:
        return base * power(base, exp - 1)

print(power(2, 3))

# Q45
add = lambda x, y: x + y
print(add(5, 3))

# Q46
maximum = lambda a, b: a if a > b else b
print(maximum(7, 4))

# Q47
filter_odd = lambda lst: [x for x in lst if x % 2 != 0]
print(filter_odd([1, 2, 3, 4, 5]))

# Q48
def safe_divide(a, b):
    if b == 0:
        return "Error: Division by zero"
    else:
        return a / b

print(safe_divide(10, 2))
print(safe_divide(10, 0))

# Q49
def validate_age(age):
    if age < 0:
        raise ValueError("Age cannot be negative")
    return age

print(validate_age(25))
# print(validate_age(-5)) # Uncomment to see the error

# Q50
def read_file(filename):
    try:
        with open(filename, 'r') as file:
            return file.read()
    except FileNotFoundError:
        return "Error: File not found"

print(read_file("example.txt"))
