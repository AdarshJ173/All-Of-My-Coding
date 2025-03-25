# Basic Example: Accessing characters in a string using index
text = "Hello, World!"

# Accessing individual characters by index
first_char = text[0]  # Index 0 gives the first character
second_char = text[1]  # Index 1 gives the second character

print("First character:", first_char)
print("Second character:", second_char)
# Explanation:
# The string "Hello, World!" is indexed from 0 to 12.
# `text[0]` accesses the first character 'H'.
# `text[1]` accesses the second character 'e'.

# For Loop Example: Printing each character with its index
text = "Python"

for index in range(len(text)):  # Iterate over the range of indices
    print(f"Index {index} : {text[index]}")
# Explanation:
# `range(len(text))` generates indices from 0 to the length of the string minus 1.
# `text[index]` accesses the character at the current index.
# The loop prints each character along with its index.

# For Loop Example: Printing characters at even indices
text = "Indexing"

for index in range(len(text)):
    if index % 2 == 0:  # Check if the index is even
        print(f"Character at even index {index} : {text[index]}")
# Explanation:
# The loop iterates over all indices of the string.
# The `if` condition checks if the index is even (i.e., `index % 2 == 0`).
# It prints the character at each even index.

# Reverse Indexing Example: Printing characters in reverse order
text = "Reverse"

for index in range(-1, -len(text)-1, -1):  # Iterate in reverse order
    print(f"Character at index {index}: {text[index]}")
# Explanation:
# Negative indices start from -1 (last character) and go backwards.
# `range(-1, -len(text)-1, -1)` generates indices from -1 to -len(text).
# The loop prints characters from the end of the string to the beginning.

# Function Example: Get character by index
def get_char_at_index(string, index):
    if 0 <= index < len(string):  # Check if index is within valid range
        return string[index]
    else:
        return "Index out of range"

# Example usage
text = "Function"
while True:
    index = int(input("Enter an index in valid range: "))  # Get index from user
    character = get_char_at_index(text, index)
    if character != "Index out of range":
        break
    print(character)  # Print "Index out of range" message

print(f"Character at index {index}: {character}")
# Explanation:
# The function `get_char_at_index` returns the character at the specified index if it's within the valid range.
# If the index is out of range, it returns "Index out of range".
# The user inputs an index, and the function retrieves and prints the corresponding character.

# Key Concepts
# Zero-Based Indexing: Indexing starts from 0.
# Range Function: Generates a sequence of indices.
# Negative Indexing: Accesses elements from the end of the sequence.
# Index Validation: Ensure the index is within the valid range to avoid errors.