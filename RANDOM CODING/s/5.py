square_Num = int(input("Enter a number: "))

def perfect_Square(square_Num):
    root = square_Num ** 0.5
    if int(root + 0.5) ** 2 == square_Num:
        print(square_Num, "is a perfect square")
    else:
        print(square_Num, "is not a perfect square")

perfect_Square(square_Num)