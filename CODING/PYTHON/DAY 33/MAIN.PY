'''DICTIONARIES'''

# dictionaries are ordered collection of data items. they store multiple items in a single variable. dictionary items are key value pairs that are separated by commas and enclosed within curly brackets{}

dict = {
    "Adarsh" : "Student",
    "Phone" : "Electronic Device",
    "Glasses" : "object",
    346 : "sibu",
    987 : "sajan",
    373 : "sagar"
}

print(dict)

print(dict["Adarsh"])
print(dict[346],dict[987])

# if you want to access something from the dictionary then u can do it from the above method, but

# print(dict["Phone1"]) # this will throw an error , as the element is not present in the dict , but
print(dict.get('Phone1')) # this will not throw an error and return none.

print("--------------------------------------------------------------------------")

# ACCESSING MULTIPLE VALUES
print(dict.keys()) #ACCESSING KEYS
print(dict.values()) #ACCESSING VALUES

for key in dict.keys():
    print(f"The value corresponding to the key {key} is {dict[key]}")

print("--------------------------------------------------------------------------")

# ACCESSING KEY-VALUE PAIRS
# we can print all the key value pairs in the dictionaries using items() method

print(dict.items())
for key , value in dict.items():
    print(f"The value of the corresponding to the key {key}, is {value}")
    

