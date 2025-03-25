# Create a program in python using a linked list to manage student information. the program will allow students to add their details, display the list of students, and also perform GPA calculation.

class Node:
    def __init__(self,name,roll_no,marks):
        self.name = name
        self.roll_no = roll_no
        self.marks = int(marks)
        self.next = None

class Linked_List:
    def __init__(self):
        self.head = None
    
    def add_Students(self,name,roll_no,marks):
        new_Student = Node(name,roll_no,marks)
        new_Student.next = self.head
        self.head = new_Student
    
    def display(self):
        current = self.head
        while current:
            print(f"Name: {current.name}, Roll Number: {current.roll_no}, Marks: {current.marks}")
            current = current.next
    
    def calc_gpa(self):
        total_marks = 0
        total_students = 0
        current = self.head
        while current:
            total_marks += current.marks
            total_students += 1
            current = current.next
        if total_students == 0:
            return 0
        average_marks = total_marks/total_students

        if average_marks >= 90:
            return 'A'
        elif 80<= average_marks <90:
            return 'B'
        elif 70<= average_marks <80:
            return 'C'
        elif 60<= average_marks <70:
            return 'D'
        else:
            return 'F'
        
if __name__ == "__main__":
    student_list = Linked_List()

    student_list.add_Students("Adarsh",2063,87)
    student_list.add_Students("Yashu",1117,69)
    student_list.add_Students("Prashu",1118,96)

    print("List of Students: ")
    student_list.display()

    gpa = student_list.calc_gpa()
    print("Calculated GPA:",gpa)


'''
class Student:
    def __init__(self, name, gpa):
        self.name = name  # Store the student's name
        self.gpa = gpa    # Store the student's GPA
        self.next = None   # Initialize the next pointer to None

class StudentLinkedList:
    def __init__(self):
        self.head = None  # Initialize the head of the list

    def add_student(self, name, gpa):
        """Add a student to the linked list."""
        new_student = Student(name, gpa)  # Create a new student node
        if not self.head:  # If the list is empty
            self.head = new_student  # Set the new student as the head
            return
        last_student = self.head
        while last_student.next:  # Traverse to the last student
            last_student = last_student.next
        last_student.next = new_student  # Link the new student

    def display_students(self):
        """Display the list of students."""
        current_student = self.head
        while current_student:  # Traverse the list
            print(f"Name: {current_student.name}, GPA: {current_student.gpa}")
            current_student = current_student.next

    def calculate_average_gpa(self):
        """Calculate and return the average GPA of the students."""
        total_gpa = 0
        count = 0
        current_student = self.head
        while current_student:  # Traverse the list
            total_gpa += current_student.gpa
            count += 1
            current_student = current_student.next
        return total_gpa / count if count > 0 else 0  # Avoid division by zero

# Example usage
if __name__ == "__main__":
    student_list = StudentLinkedList()
    student_list.add_student("Alice", 3.5)
    student_list.add_student("Bob", 3.8)
    student_list.add_student("Charlie", 2.9)
    
    print("List of Students:")
    student_list.display_students()  # Display all students
    
    average_gpa = student_list.calculate_average_gpa()
    print(f"Average GPA: {average_gpa:.2f}")  # Calculate and display average GPA

'''