"PROJECT"

# write a python program to translate a message into secret code language. use the rules below to translate normal english into secret code language

'''
coding:
if : the word contains atleast 3 characters, remove the first letter and append it at the end now append three random characters at the starting and the end
else:
    simply reverse the string

decoding:
if the word contains less than 3 characters, reverse it
else:
    remove 3 random characters from the start and end. now remove the last letter and append it at the start

your program should ask whether you want to code or decode.

'''    
'''
import random

def code(message):
    if len(message) >= 3:
        first_letter = message[0]
        random_chars = ''.join(random.choices('abcdefghijklmnopqrstuvwxyz', k=3))
        return message[1:] + first_letter + random_chars + random_chars
    else:
        return message[::-1]

def decode(message):
    if len(message) < 3:
        return message[::-1]
    else:
        random_chars = message[:3] + message[-3:]
        last_letter = message[-1]
        return message[4:-3] + last_letter + message[1]

def main():
    while True:
        print("Would you like to code or decode a message?")
        choice = input("Enter 'c' for code or 'd' for decode: ").lower()
        if choice == 'c':
            message = input("Enter the message to code: ")
            coded_message = code(message)
            print("Coded message:", coded_message)
        elif choice == 'd':
            message = input("Enter the message to decode: ")
            decoded_message = decode(message)
            print("Decoded message:", decoded_message)
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
    '''

st = input("Enter Message:")
words = st.split("  ")
coding = input("1 for coding or 0 for decoding")
coding = True if (coding == "1") else False
print(coding)
if(coding):
    nwords = []
    for word in words:
        if(len(word) >= 3):
            r1 = "erg"
            r2 = "ase"
            stnew = r1 + word[1:] +word[0] + r2
            nwords.append(stnew)
        else:
            nwords.append(word[::-1])
    print(" ".join(nwords))

else:
    nwords = []
    for word in words:
        if(len(word) >= 3):
            stnew = word[3:-3]
            stnew = stnew[-1] + stnew[:-1]
            nwords.append(stnew)
        else:
            nwords.append(word[::-1])
    print(" ".join(nwords))

