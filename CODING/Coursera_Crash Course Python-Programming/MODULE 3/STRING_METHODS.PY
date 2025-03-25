# STRING METHOD
'''In Python, strings are immutable. This means that once a string is created, it cannot be changed. 
If you want to modify a string, you must create a new string with the desired changes. 
For example, if you have a string variable and you want to change one of its characters, 
you cannot do it directly. Instead, you create a new string with the modifications. 
This immutability ensures that strings remain consistent and prevents accidental changes to the original string.'''

a = "Adarsh"
print(len(a))

print(a.upper())

print(a.lower())

b = "RANZ!!!!!!!!!"
print(b)
print(b.rstrip("!"))

c = "!!!ZARA"
print(c)
print(c.lstrip("!"))

d = "COOL"
print(d)
print(d.replace("COOL", "AAJ"))
print(d)

e = "MADAR JAAT"
print(e.split(" "))

f = "adArsH"
print(f.capitalize())

g = "WHAT A DAY?"
print(g.center(50))
print(len(g))
print(len(g.center(50)))

h = "AAJ IS VERY DIFFERENT BOY, BCZ HE LIVES IN AAJ"
print(h.count("AAJ"))

i = "ADARSH IS A VERY PATIENT PERSON"
print(i.endswith("PERSON"))
print(i.endswith("person"))
print(i.endswith("SON",15,30 ))

j = "ADARSH IS A VERY PATIENT PERSON"
print(j.find("IS"))
print(j.find("ISs"))
# print(j.index("ISs"))

k = "SHE IS A VERY Beautiful GIRL 3k"
print(k.isalnum())

l = "SHE IS A VERY Beautiful GIRL 3k"
print(l.isalpha())

m = "HGWOHGOIHGoihawroifgfh"
print(m.islower())

# isprintable() , isspace() , istitle() , isupper() , stratswith(), title() 