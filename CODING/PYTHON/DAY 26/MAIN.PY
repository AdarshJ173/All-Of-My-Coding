"EXERCISE 3"
# KBC

# create a program capable of displaying question to the user like kbc
'''
use list data type to store the question and theri correct answer
display the fianl amount the person in taking home after playing the game.
'''

#khud bana raha hun bc

import random

questions = [
    "What does HTML stand for?",
    "Which programming language is often used for developing Android apps?",
    "What is the output of the following Python code?",
    "In JavaScript, what function is used to print content to the console?",
    "What does CSS stand for?",
    "Which data structure follows the Last-In-First-Out (LIFO) principle?",
    "Which programming language is used primarily for statistical computing and graphics?",
    "What is the result of 10 % 3 in most programming languages?",
    "Which of the following is not a JavaScript framework or library?",
    "Which statement is true about Git?"
]

answers = {
    "What does HTML stand for?": "Hyper Text Markup Language",
    "Which programming language is often used for developing Android apps?": "Java",
    "What is the output of the following Python code?": "25",
    "In JavaScript, what function is used to print content to the console?": "console.log()",
    "What does CSS stand for?": "Cascading Style Sheets",
    "Which data structure follows the Last-In-First-Out (LIFO) principle?": "Stack",
    "Which programming language is used primarily for statistical computing and graphics?": "R",
    "What is the result of 10 % 3 in most programming languages?": "1",
    "Which of the following is not a JavaScript framework or library?": "Django",
    "Which statement is true about Git?": "It is a version control system"
}

input("Press enter to start: ")

rand_q = random.choice(questions)
print("The question is: ", rand_q)

user_answer = input("Your answer: ")

if user_answer == answers[rand_q]:
    print("Correct!")
else:
    print("Wrong!")

# thoda chatgpt ase chap diya , par me pura samjha