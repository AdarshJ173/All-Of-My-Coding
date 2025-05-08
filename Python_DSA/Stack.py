# Create a program in python using a stack to implement a basic calculator. This program uses a stack to evaluate the expression entered by the user , recall the concept of stack and design a solution for parsing and evaluating the expression.

class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop() if self.items else None

    def peek(self):
        return self.items[-1] if self.items else None

    def is_empty(self):
        return len(self.items) == 0

def calculate(expression):
    numbers = Stack()
    operators = Stack()
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2}
    
    expression = expression.replace(' ', '')  # Remove all spaces
    
    for char in expression:
        if char.isdigit():
            numbers.push(int(char))
            
        elif char in '+-*/':
            while (not operators.is_empty() and operators.peek() in '+-*/' and 
                   precedence[operators.peek()] >= precedence[char]):
                op = operators.pop()
                b = numbers.pop()
                a = numbers.pop()
                
                if op == '+': numbers.push(a + b)
                elif op == '-': numbers.push(a - b)
                elif op == '*': numbers.push(a * b)
                elif op == '/': numbers.push(a // b)
                
            operators.push(char)
            
        elif char == '(':
            operators.push(char)
            
        elif char == ')':
            while operators.peek() != '(':
                op = operators.pop()
                b = numbers.pop()
                a = numbers.pop()
                
                if op == '+': numbers.push(a + b)
                elif op == '-': numbers.push(a - b)
                elif op == '*': numbers.push(a * b)
                elif op == '/': numbers.push(a // b)
                
            operators.pop()  # Remove '('
    
    while not operators.is_empty():
        op = operators.pop()
        b = numbers.pop()
        a = numbers.pop()
        
        if op == '+': numbers.push(a + b)
        elif op == '-': numbers.push(a - b)
        elif op == '*': numbers.push(a * b)
        elif op == '/': numbers.push(a // b)
    
    return numbers.pop()

def main():
    while True:
        try:
            expr = input("Enter expression (q to quit): ")
            if expr.lower() == 'q':
                break
            print(f"Result: {calculate(expr)}")
        except Exception as e:
            print(f"Error: {e}")

if __name__ == "__main__":
    main()
        

