# # def name():
# #     print("Adarsh")

# # name()


# # def add(a , b):
# #     # print(a+b)
# #     return a + b

# # print(add(1,2))


# # # result = add(3, 5)
# # # print(result)  # Output: 8



# # def greet(name=7):
# #     print("Hello",name,"!")

# # greet()

# # def square(x):
# #     return x * x

# # result = square(574)
# # print(result)  # Output: 16

# def outer_function():
#     def inner_function():
#         print("Hello from the inner function!")

#     inner_function()

# outer_function()


# def factorial(n):
#     if n == 1:
#         return 1
#     else:
#         return n * factorial(n - 1)

# print(factorial(5))

# # def countdown(n):
# #     print(n)
# #     # Base case
# #     if n == 0:
# #         return 
# #     # Recursive case
# #     else:
# #         countdown(n - 1)

# # countdown(3)

# def sum_to_n(n):
#     if n == 1:
#         return 1
#     else:
#         return n + sum_to_n(n - 1)

# print(sum_to_n(5))  


# def fibonacci(n):
#     # Base case: If n is 0 or 1, return n.
#     if n <= 1:
#         return n
#     # Recursive case: Otherwise, return the sum of the previous two Fibonacci numbers.
#     else:
#         return fibonacci(n - 1) + fibonacci(n - 2)

# # Let's see how it works by calculating the 6th Fibonacci number.
# print(fibonacci(5))  # Output: 8