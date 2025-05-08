'''TUPLES'''
# tuples are ordered collection of data items. they store multiple ite4ms in a single variable . tuple items are spearated by commas and enclosed within round brackets().tuples ae unchangable - that means we can not change them after creation

tup = (1,8,6,"AAJ",True)
print(type(tup), tup)

print(tup[0])
print(tup[1])
print(tup[2])
# print(tup[7])

tpl = (1) #if we are making a tuple of 1 element we have give "," , otherwise python confuses and takes a tuple as an integer 
print(type(tpl),tpl)

tuple = (1,)
print(type(tuple),tuple)

# tup[0] = 90

if 8 in tup:
    print("Yes it's here")

# slicing
# tuples[start:end:jumpindex]

tup2 = tup[1:4]
print(tup2)
# this does not change the tuple - it just gives a new tuple 

