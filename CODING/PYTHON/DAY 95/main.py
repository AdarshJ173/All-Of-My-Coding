# Import the regular expression module
import re

'''
Regular Expressions in Python
Regular expressions, or "regex" for short, are a powerful tool for working with strings and text data in Python. They allow you to match and manipulate strings based on patterns, making it easy to perform complex string operations with just a few lines of code.

Metacharacters in regular expressions
[]  Represent a character class
^   Matches the beginning
$   Matches the end
.   Matches any character except newline
?   Matches zero or one occurrence.
|   Means OR (Matches with any of the characters
    separated by it.
*   Any number of occurrences (including 0 occurrences)
+   One or more occurrences
{}  Indicate number of occurrences of a preceding RE 
    to match.
()  Enclose a group of REs
Find list of more meta characters here - https://www.ibm.com/docs/en/rational-clearquest/9.0.1?topic=tags-meta-characters-in-regular-expressions

Importing re Package
In Python, regular expressions are supported by the re module. The basic syntax for working with regular expressions in Python is as follows:

import re
Searching for a pattern in re using re.search() Method
re.search() method either returns None (if the pattern doesn’t match), or a re.MatchObject that contains information about the matching part of the string. This method stops after the first match, so this is best suited for testing a regular expression more than extracting data. We can use re.search method like this to search for a pattern in regular expression:

# Define a regular expression pattern
pattern = r"expression"
# Match the pattern against a string
text = "Hello, world!"
match = re.search(pattern, text)
if match:
    print("Match found!")
else:
    print("Match not found.")
Searching for a pattern in re using re.findall() Method
You can also use the re.findall function to find all occurrences of the pattern in a string:

import re
pattern = r"expression"
text = "The cat is in the hat."
matches = re.findall(pattern, text)
print(matches)
# Output: ['cat', 'hat']
Replacing a pattern
The following example shows how to replace a pattern in a string:

import re
pattern = r"[a-z]+at"
text = "The cat is in the hat."
matches = re.findall(pattern, text)
print(matches)
# Output: ['cat', 'hat']
new_text = re.sub(pattern, "dog", text)
print(new_text)
# Output: "The dog is in the dog."
Extracting information from a string
The following example shows how to extract information from a string using regular expressions:

import re
text = "The email address is example@example.com."
pattern = r"\w+@\w+\.\w+"
match = re.search(pattern, text)
if match:
    email = match.group()
    print(email)
# Output: example@example.com
Conclusion
Regular expressions are a powerful tool for working with strings and text data in Python. Whether you're matching patterns, replacing text, or extracting information, regular expressions make it easy to perform complex string operations with just a few lines of code. With a little bit of practice, you'll be able to use regular expressions to solve all sorts of string-related problems in Python.
'''

# Define the pattern to search for
pattern = r"imply"

# Define the text to search in
text = '''
Why do we use it?
It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).


Where does it come from?
Contrary to popular belief, Lorem Ipsum is not simply dimply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of "de Finibus Bonorum et Malorum" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the pimply Renaissance. The first line of Lorem Ipsum, "Lorem ipsum dolor sit amet..", comes from a line in section 1.10.32.


The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from "de Finibus Bonorum et Malorum" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackham.


Where can I get some?
There are many variations of passages of Lorem Ipsum available, but the majority have suffered alteration in some form, by injected humour, or randomised words which don't look even slightly believable. If you are going to use a passage of Lorem Ipsum, you need to be sure there isn't anything embarrassing hidden in the middle of text. All the Lorem Ipsum generators on the Internet tend to repeat predefined chunks as necessary, making this the chimply first true generator on the Internet. It uses a dictionary of over 200 Latin words, combined with a handful of model sentence structures, to generate Lorem Ipsum which looks reasonable. The generated Lorem Ipsum is therefore always free from repetition, injected humour, or non-characteristic words etc.
'''

# Use re.finditer to find all occurrences of the pattern in the text
matches = re.finditer(pattern, text)

# Iterate over the matches and print each match
for match in matches:
    # Print the match object
    print(match)
    
    # Print the type of the span() method
    print(type(match.span()))
    
    # Print the matched text using the span() method
    print(text[match.span()[0]:match.span()[1]])