'''LISTS'''

# lists are ordered collection of data items.
# they store multiple items in a single varibale 
# list items are separated by commas and enclosed within square brackets [].
# lists are changeable - that means we can alter them after creation.


L = [5,74,9]
print(L)
print(type(L))

print(L[0])
print(L[1])
print(L[2])

# tupple cannot be changed but list can be

# list can hold strings , bullen , int , float, etc...
rt = [654,7,69,"aohe",True]
print(rt)
# print(rt[5])

# index starts from 0 to ...
# rt = [654,7,69,"aohe",True]
#       [0][1][2] [3]   [4]

# negetive indexing starts from -1 from the back
# rt = [654,7,69,"aohe",True]
#     [-5][-4][-3][-2]   [-1]

print(rt[-3])  #-ve
print(rt[len(rt)-3])  #+ve
print(rt[5-3])
print(rt[2])

if "aohe" in rt:
    print("yes it's there")
else:
    print("no it's not there")

if "7" in rt:
    print("yes it's there")
else:
    print("no it's not there")

if 7 in rt:
    print("yes it's there")
else:
    print("no it's not there")

if "ao" in "aohe":
    print("u got it")

print(rt)
# sliceing
print(rt[1:-1])
print(rt[1:4])
# jump indexing
print(rt[1:4:2]) 
# it will jump 2 steps from the initial value and so on 


'''LIST COMPREHENSION'''

# LIST COMPREHENSION ARE USED FOR CREATING NEW LISTS FROM OTHER ITERABLES LIKE LISTS,TUPLES,DICTIONARIES,SETS,AND EVEN IN ARRAYS AND STRINGS.


lst = [i for i in range(10)]
print(lst)

lst = [i*i for i in range(10)]
print(lst)

lst = [i*i for i in range(20)]
print(lst)

lst = [i*i for i in range(20) if i%2==0]
print(lst)
