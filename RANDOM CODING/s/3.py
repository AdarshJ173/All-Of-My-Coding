vowels = ['a','e','i','o','u']
string = "this is a Vowel "

def remove_Vowels(string):
    new_string = ""
    for char in string.lower():
        if char not in vowels:
            new_string += char
    return new_string

print(remove_Vowels(string))