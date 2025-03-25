def is_palindrome(string):
    string = string.lower()
    
    reversed_string = ''.join(reversed(string))
    
    if string == reversed_string:
        print("is palindrome")
    else:
        print("not a palindrome")

string = input("Input a Word: ")
is_palindrome(string)

# string = input("Input a Word: ")
# def reverse(string):
#     newstring = ""
#     for i in range(len(string) - 1, -1, -1):
#         newstring += string[i]

#     if string == newstring:
#         print("is palindrome")
#     else:
#         print("not a palindrome")

# reverse(string)

