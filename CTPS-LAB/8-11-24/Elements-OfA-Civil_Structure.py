print("Element of a Civil Structure")

print("1.Foundation\n","2.Floors\n","3.Walls\n","4.BeamSandSlabs\n","5.Columns\n","6.Roof\n","7.Stairs\n","8.Paraper\n","9.Intels\n","10.DampProof \n",
    )

element1  = {"Foundation","Floors","HardFloors","Walls","BeamSandSlabs","Columns","Roof","Stairs","Paraper","Intels"}

print(element1)

element1.add("DampProof")

print(element1)

element2 = {"plants","Compound"}
print(element2)

element1.update(element2)

print(element1)

element1.remove("Stairs")
print(element1)

element1.discard("HardFloors")
print(element1)

element1.pop()
print(element1)

print(sorted(element1))

print('\n')
print("Set Operations: ")

s1 = {"Foundation","floors"}
s2 = {"floors","walls","beams"}

print("Symmetric Difference: ",s1^s2)
print("Difference: ",s1-s2)
print("Difference: ",s2-s1)
print("Union: ",s1|s2)