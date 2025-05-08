string = input("Input a Word: ")

def is_palindrome(string):

    reversed_string = ''.join(reversed(string))
    print("reverse string: ",reversed_string)
    reversed_string = reversed(string)
    print(reversed_string)

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

