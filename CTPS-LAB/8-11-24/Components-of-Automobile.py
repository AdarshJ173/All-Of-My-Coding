print("Components of an automobile")
print("\n")
print("Dictionary keys")
print("......................................")

# Dictionary containing various automobile components categorized
components = {
    "Engine Parts": ["piston", "CylinderHead", "oilPan", "engineValves", "combustionChamber", "Gasket"],
    "Drive Transmission and Steering Parts": ["AdjustingNut", "PitManArmShaft", "RollerBearing", "SteeringGearShaft"],
    "Suspension and Brake Parts": ["BreakPedal", "BreakLines", "Rotors/Drums", "BreakPads", "WheelCylinders"],
    "Electrical Parts": ["Battery", "Starter", "Alternator", "Cables"],
    "Body and Chassis": ["RoofPanel", "FrontPanel", "ScreenPillar", "Lights", "Tyres"]
}

print("\nDictionary keys:")
# iterate and print the keys of the dictionary
for i in components.keys():
    print(i, end=" , ")
    
print("\n")
print("Dictionary values:")
# iterate and print the values of the dictionary
for j in components.values():
    print(j, end=" | ")

print("\n")
print("Dictionary items:")
# iterate and print the items (key-value pairs) of the dictionary
for k in components.items():
    print(k, end=' | ')

# Adding accessories as a new key in the dictionary
accessories = ["Display", "Infotainment", "Bumper"]
components["Accessories"] = accessories

print("\n")
# Print the updated dictionary items after adding accessories
print("Updated Dictionary items with Accessories:")
for k in components.items():
    print(k, end=' | ')

print("\n")
# Remove "Bumper" from the accessories list
accessories.remove("Bumper")
for k in components.items():
    print(k, end=' | ')

print("\n")
# Append "Functionalities" to the accessories list
accessories.append("Functionalities")
for k in components.items():
    print(k, end=' | ')

# Print the current state of dictionary items
print("\n")
print("Dictionary items:")
for k in components.items():
    print(k, end=' | ')

print("\n")
# Printing the number of keys in the components dictionary
print(len(components))

# Removing the "Electrical Parts" from the dictionary
components.pop("Electrical Parts")
for k in components.items():
    print(k, end=' | ')

# Remove the last inserted item (Accessories) using the popitem method
components.popitem()
print("\n")
print("Dictionary items after popitem:")
for k in components.items():
    print(k, end=' | ')

# Print the current state of dictionary items
print("\n")
print("Dictionary items:")
for k in components.items():
    print(k, end=' | ')

# Clear all items in the components dictionary
components.clear()
print("\n")
print("Dictionary items:")
for k in components.items():
    print(k, end=' | ')