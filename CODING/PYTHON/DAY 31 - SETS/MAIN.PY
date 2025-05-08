'''SETS'''
# sets are 'unordered' collection of data items. They store multiple items in a single variable. set items are separated by commasand enclosed within curly brackets{}. sets are unchangeable , meaning you cannot change items of the set once created. sets do not conatain duplicate items.

s = { 2,3,5,4,2,3,8,7,4}
print(s)
# set does not take repeated values , set is a collection of well defined objects

info = {'carla', 19, False, 5.9,19}
print(info)

for value in info:
    print(value)
# here we see that the items of set occur in random order and hence they cannot be accessed using index numbers. Also seta do not allow duplicate values.

adarsh = {}
print(type(adarsh))
# here the type is dict , but there r {} and so it interprets an empty set type with dict
# so to create an empty set we should write set()

aaj = set()
print(type(aaj))