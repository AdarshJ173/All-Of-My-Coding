# STRING METHOD
'''STRINGS ARE IMMUTABLE - U CANT CHANGE THE MAIN VARIABLE - BUT YOU CAN MAKE A NEW STRING WITH THE CHANGES'''
a = "Adarsh"
print(len(a))

print(a.upper())
print(a.lower())

b = "RANZ!!!!!!!!!"
print(b)
print(b.rstrip("!"))

c = "!!!ZARA"
print(c)
print(c.rstrip("!"))

d = "COOL"
print(d)
print(d.replace("COOL", "AAJ"))

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