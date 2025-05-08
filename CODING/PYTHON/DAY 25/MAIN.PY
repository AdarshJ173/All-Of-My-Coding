'''OPERATIONS ON TUPLES'''
# WE CANNOT DO IT DIRECTLY
# THEY R IMMUTABLE

# MANIPULATING TUPLES
'''TUPLES ARE IMMUTABLE , HENCE IF YOU WANT TO ADD, REMOVE AOR CHANGE TUPLE ITEMS, THEN FIRST YOU MUST CONVERT THE TUPLE TO A LIST . THEN PERFORM OPERATION ON THAT LIST AND CONVERT IT BACK TO TUPLE.'''

countries = ("spain", "italy", "INDIA" , "england", "germany")
temp = list(countries)
temp.append("russia") #add item
temp.pop(3) #remove item
temp[2] = "finland" #change item

countries = tuple(temp)
print(countries)

tic = ("afrga","hqtrb","aetrhaq")
tac = ("arhg","sr6uw4","hwrthjwa")
tictac = tic + tac
print(tictac)


#ye code mene likha bc , khud soch ke........he,eh,eh,e
z = (6,7,7,6,2,4,6,8,1,3,8,7,8,9,4,1,1,5,1,7,2,9,7,1)
print(len(z))
input = int(input("enter number between 1 to 10:"))
if input in z:
    zcnt = z.count(input)
    print("count of the", input , "in z is : ", zcnt)
else:
    print("this number does not exist")

zcnt = len(z)
print(zcnt)

# index() method
# tuple.index(element,start,end)
zcnt = z.index(2)
print(zcnt)

zcnt = z.index(1, 3 ,9)
print(zcnt)
