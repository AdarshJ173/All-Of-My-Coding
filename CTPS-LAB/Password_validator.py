password = input("Enter Your Password: ")

has_digit = False
has_uppercase = False
has_lowercase = False

for i in range(len(password)):
    if password[i].isdigit() and password[i] >= '0' and password[i] <= '9':
        has_digit = True
    elif password[i] >= 'A' and password[i] <= 'Z':
        has_uppercase = True
    elif password[i] >= 'a' and password[i] <= 'z':
        has_lowercase = True

if has_digit and has_uppercase and has_lowercase:
    print("valid password")
else:
    print("invalid password")