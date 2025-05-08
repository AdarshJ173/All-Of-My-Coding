'''LIST METHODS IN PYTHON'''

l = [1,4,6,1]
print(l)
l.append(9) #it add the given value at  the end
print(l)

i = [657,68,5,976,64,4]
print(i)
i.sort() #it sorts number in ascending order
print(i)
i.sort(reverse=True) #this sorts in descending order
print(i)

l.reverse() # the reverses the original list
print(l)

print(l.index(1))

print(i.index(5))

print(l.count(1)) #counts the number of times 1 in the list

m = l.copy()
m[0] = 0 
print(l)

l.insert(2,7)
print(l)

j = [8564,654,87,21,1]
print(j)
o = [4,59,96]

k = j + o 
print(k)

j.extend(o)
print(j)

