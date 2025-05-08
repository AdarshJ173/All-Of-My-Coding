# SET METHODS IN PYTHON 

s1 = {1,5,9,}

s2 = {3,9,4,}
# joining sets : .union() .update()
print(s1.union(s2)) #union is the combination of two sets , it includes the same element once - if its present in both

s1.update(s2) # this changes the set and add the given set to the existing 

print(s1, s2)



# intersection() and intersection_update()

n1 = {"Adarsh","Aryan","Nigga","Sibu"}
n2 = {"Adarsh", "Subham" , "Ommkar", "Sagar", "Nigga"}

print(n1.intersection(n2)) #this outputs the value that is present in both of the sets 

# print(n1.intersection_update(n2))

'''
intersection() method: This method returns a new set that contains the common elements between the sets on which it is called. It does not modify the original sets. When you call n1.intersection(n2), it computes a new set that contains elements that are present in both n1 and n2, and then returns this new set.In your case, n1.intersection(n2) will output {'Adarsh', 'Nigga'}, which are the elements common to both n1 and n2.

intersection_update() method: This method updates the set on which it's called to keep only elements that are found in both the original set and the specified sets. It modifies the set in place and returns None.When you call n1.intersection_update(n2), n1 is modified to keep only the elements that are also in n2. After this call, n1 will be {'Adarsh', 'Nigga'}. However, the method itself returns None because it modifies the set in place and does not produce a new set.
'''


# SYMMETRIC DIFFERENCE & SYMMETRIC DIFFERENCE UPDATE
# (AuB) - (AnB)

print(n1.symmetric_difference(n2))
# print(n1.symmetric_difference_update(n2))


# DIFFERENCE AND DIFFERENCE UPDATE 
# the difference() and difference_update() methods prints only items that are only present in the original set and not in both the sets. the difference() methods returns a new set whereas difference_update() method updates into the existing set from another set. 

# (A-B)
print(n1.difference(n2))

'''SET METHODS'''
# there are several in-built methods used for the manipulation of set. Ther are explained below
    
# the isdisjoint() method checks if items of given set are present in another set.This method returns False if items are present, else it returns True. 
print(n1.isdisjoint(n2))

c1 = {1,2,3,4,5,6}
c2 = {8,9,7}

print(c1.issuperset(c2)) #is c1 persent in c2 ?
print(c1.issubset(c2)) # is c2 a subset of c1?

c2.add(2) #if you want to add a single item to the set use the add() method
print(c2)

c2.update(c1) #if you want to add more than one item in a set - then use update method() - it just adds another set into yours desierd set.
print(c2)

e = {"Adarsh","Subham","Nigga","Aryan"}
e.remove("Nigga")
print(e)
# the main difference between remove and discard is that , if we try to delete an item which is not present in set, then remove() raises an error, whereas discard() does not raise any error 
e.discard("Sibu")
print(e)

# pop() - this method removes the last item of the set but the catch is that we dont know which item gets popped as sets are unordered. however, you can access the popped item if you assign the pop() method to a variable. 

f = {"Adarsh","Subham","Nigga","Aryan"}
items = f.pop()
print(f)
print(items)


# del is not a method , rather it is a keyword which deletes the set entirely 

io = {"Adarsh","Subham","Nigga","Aryan"}
del io
# print(io) # this shows a error bcz the set is already deleted

# clear() - this method clears all items in the set and prints an empty set. 
l = {"Adarsh","Subham","Nigga","Aryan"}
l.clear()
print(l)

# CHECK IF ITEM EXISTS 

info = {"Adarsh","Subham","Nigga","Aryan"}
if "Nigga" in info:
    print("yo Nigga")
else:
    print("no man...")