string = input("Write Anything: ")

def replaceCharacter(string):
    RC = input("Enter the character to be replaced: ")
    RC2 = input("Enter the character to be replaced with: ")
    
    modified_string = string.replace(RC, RC2)
    return modified_string

result = replaceCharacter(string)
print("Modified string:", result)