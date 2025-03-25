#Generators

'''
Generators in Python are functions that allow you to generate a sequence of values over time. Instead of computing all values at once and storing them in memory, generators produce values one at a time when requested. This can help save memory and improve performance for tasks that involve iterating over large sequences.
'''

def my_generator():
    for i in range(5):
        yield i

gen  = my_generator()
# print(next(gen))
# print(next(gen))
# print(next(gen))
# print(next(gen))
# print(next(gen))

for j in gen:
    print(j)













































































