import pandas as pd
import random

# Load Excel sheets for different quizzes
file_paths = {
    "Phrasal Verbs": "D:/Python Program PV/phrasal_verbs.xlsx",
    "Idioms": "D:/Python Program PV/idioms.xlsx",
    "Synonyms": "D:/Python Program PV/synonyms.xlsx",
    "Antonyms": "D:/Python Program PV/antonyms.xlsx",
}

quizzes = {}
for quiz_name, file_path in file_paths.items():
    data = pd.read_excel(file_path)  # Reads each file dynamically
    quizzes[quiz_name] = list(zip(data["Column B"], data["Column C"]))  # Adjust column names as needed

# Function to run a quiz
def run_quiz(quiz_name, pairs):
    correct_answers = 0
    total_attempts = 0

    print(f"\nYou have selected: {quiz_name}. Let's begin!")

    while True:
        # Pick 4 random pairs
        random_pairs = random.sample(pairs, 4)
        
        # Choose the correct pair
        correct_pair = random.choice(random_pairs)
        
        # Display the options
        print("\nMatch the correct option:")
        for i, (item, _) in enumerate(random_pairs, 1):
            print(f"{i}. {item}")
        
        print(f"\nDefinition/Meaning: {correct_pair[1]}")
        
        # Get the user's input
        answer = input("Enter the number of the correct option (or type 'Switch' to change quiz, or 'End' to quit): ").strip().lower()
        
        if answer == "end":
            print("\nExiting quiz...")
            break
        elif answer == "switch":
            return correct_answers, total_attempts, "switch"

        # Validate the input
        if answer.isdigit() and 1 <= int(answer) <= 4:
            total_attempts += 1
            selected_pair = random_pairs[int(answer) - 1]
            if selected_pair == correct_pair:
                print("Correct!")
                correct_answers += 1
            else:
                print(f"Wrong! The correct answer was '{correct_pair[0]}'.")
        else:
            print("Invalid input. Please enter a number between 1 and 4, 'Switch', or 'End'.")
    
    return correct_answers, total_attempts, "end"

# Main program
print("Welcome to the Language Learning Quiz!")

# Get the student's name
student_name = input("\nEnter your name: ")

# Display quiz options
while True:
    print("\nSelect the quiz you want to attempt:")
    for i, quiz_name in enumerate(quizzes.keys(), 1):
        print(f"{i}. {quiz_name}")
    
    quiz_choice = input("Enter the number of the quiz you want to attempt (or type 'End' to exit): ").strip().lower()
    
    if quiz_choice == "end":
        print("\nThank you for using the quiz program!")
        break
    
    if quiz_choice.isdigit() and 1 <= int(quiz_choice) <= len(quizzes):
        selected_quiz = list(quizzes.keys())[int(quiz_choice) - 1]
        pairs = quizzes[selected_quiz]
        
        # Run the selected quiz
        total_correct = 0
        total_attempts = 0
        
        while True:
            correct, attempts, status = run_quiz(selected_quiz, pairs)
            total_correct += correct
            total_attempts += attempts
            
            if status == "switch":
                break
            elif status == "end":
                print(f"\n{student_name}, your score: {total_correct}/{total_attempts}")
                break
    else:
        print("Invalid input. Please select a valid option.")
