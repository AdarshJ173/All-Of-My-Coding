import tkinter as tk
from tkinter import messagebox
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

# Function to run the quiz logic
def run_quiz_gui(quiz_name):
    pairs = quizzes[quiz_name]
    correct_answers = 0
    total_attempts = 0

    def ask_question():
        nonlocal correct_answers, total_attempts

        # Pick 4 random pairs
        random_pairs = random.sample(pairs, 4)
        correct_pair = random.choice(random_pairs)

        # Display the question
        question_label.config(text=f"Definition: {correct_pair[1]}")
        for i, (item, _) in enumerate(random_pairs):
            option_buttons[i].config(text=item, command=lambda choice=item: check_answer(choice, correct_pair[0]))

    def check_answer(choice, correct_answer):
        nonlocal correct_answers, total_attempts
        total_attempts += 1
        if choice == correct_answer:
            correct_answers += 1
            messagebox.showinfo("Result", "Correct!")
        else:
            messagebox.showinfo("Result", f"Wrong! Correct answer was: {correct_answer}")
        ask_question()

    # Create quiz window
    quiz_window = tk.Toplevel()
    quiz_window.title(f"Quiz: {quiz_name}")
    quiz_window.geometry("400x300")

    question_label = tk.Label(quiz_window, text="", font=("Arial", 14), wraplength=350)
    question_label.pack(pady=20)

    option_buttons = [tk.Button(quiz_window, font=("Arial", 12), width=25) for _ in range(4)]
    for button in option_buttons:
        button.pack(pady=5)

    ask_question()

# GUI Application
def create_gui():
    def start_quiz():
        selected_quiz = quiz_var.get()
        if selected_quiz == "Select a quiz":
            messagebox.showwarning("Selection Error", "Please select a quiz to start.")
        else:
            run_quiz_gui(selected_quiz)

    # Main window
    root = tk.Tk()
    root.title("Language Learning Quiz")
    root.geometry("400x300")

    # Minimize and Maximize Buttons
    root.state("normal")  # Initial state

    # Welcome Label
    welcome_label = tk.Label(root, text="Welcome to the Language Learning Quiz!", font=("Arial", 14))
    welcome_label.pack(pady=10)

    # Dropdown for quiz selection
    quiz_var = tk.StringVar(value="Select a quiz")
    quiz_dropdown = tk.OptionMenu(root, quiz_var, *quizzes.keys())
    quiz_dropdown.pack(pady=10)

    # Start and End Buttons
    start_button = tk.Button(root, text="Start Quiz", font=("Arial", 12), command=start_quiz)
    start_button.pack(pady=10)

    end_button = tk.Button(root, text="End Program", font=("Arial", 12), command=root.quit)
    end_button.pack(pady=10)

    # Run the GUI
    root.mainloop()

# Start the GUI application
create_gui()
