from typing import Any


class Employee:
    name = "Adarsh"
    def __len__(self):
        i = 0
        for c in self.name:
            i = i + 1
        return i

    def __str__(self) -> str:
        return(f'The name of the employee is {self.name} str ')

    def __repr__(self) -> str:
        return (f"Employee('{self.name}')")

    def __call__(self):
        print("Hey I am Good")






























