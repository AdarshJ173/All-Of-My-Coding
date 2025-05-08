# name = input()
# age = int(input())
# print(f"hello,{name} and my age is {age}")

# for i in range(2,21,2):
#     print(i)

a = 20
while a>0:
    if a%3 !=0:
        print(a)
    a -= 1


num = float(input( " : "))
if num>0:
    print("+ve")
elif num<0:
    print("-ve")
else:
    print("zero")

books = {"1984": "George Orwell", "To Kill a Mockingbird": "Harper Lee", "Pride and Prejudice": "Jane Austen"}

for author in books.values():
    print(author)

def reverse_string(s):
    # 'return' sends back the result of the function
    # 's' is the input string
    # '[::-1]' is a slicing operation that reverses the string
    return s[::-1]

print(reverse_string("Adarsh"))