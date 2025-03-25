employees1 = {
    1: {"name": "Alice", "id" : "01"},
    2: {"name": "Bob", "id" : "02"},
}

print(employees1)

employees2 = {
    3: {"name": "Charlie", "id" : "03"},
    4: {"name": "David", "id" : "04"},
    5: {"name": "Eve", "id" : "05"}
}
print(employees2)

employees1.update(employees2) # adds
print(employees1)

employees1.clear() # this removes all the items from the dictionary
print(employees1)

empty = {} # to create an empty dictionaries
print(empty)

int_dict = {
    "v1": 10,
    "v2": 20,
    "v3": 30,
    "v4": 40,
    "v5": 50
}

int_dict.pop("v1") # it removes a key-value pair whose key is passed as a parameter.
print(int_dict)

int_dict.popitem() # this removes the last item from the dictionary
print(int_dict)

del int_dict["v2"] # this removes a key-value pair whose key is passed as a parameter.
print(int_dict)

del int_dict # this removes the entire dictionary
# print(int_dict) this will throw an error as the dictionary is deleted completely

