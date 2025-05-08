Shape = input("Enter the shape You Want to find The Area Of: ")
def AreaOfShapes(Shape):
    if Shape == "Circle" or Shape == "circle":
        radius = float(input("Enter the Radius: "))
        print("The Area of Circle is: ",22/7*radius*radius)
    elif Shape == "Rectangle" or Shape == "rectangle":
        length = float(input("Enter the Length Of Rectangle: "))
        breadth = float(input("Enter the Breadth Of Rectangle: "))
        print("The Area of Rectangle is: ",length*breadth)
    elif Shape == "Triangle" or Shape == "triangle":
        height = float(input("Enter the Height Of Triangle: "))
        breadth = float(input("Enter the Breadth Of Triangle: "))
        print("The Area of Triangle is: ",1/2*height*breadth)
    elif Shape == "Parallelogram" or Shape == "parallelogram":
        base = float(input("Enter the Base Of Parallelogram: "))
        height = float(input("Enter the Height Of Parallelogram: "))
        print("The Area of Parallelogram is: ",base*height)
    elif Shape == "Square" or Shape == "square":
        lengthOfSide = float(input("Enter the lengthOfSide Of Square: "))
        print("The Area of Square is: ",lengthOfSide*lengthOfSide)
    else:
        print("Invalid Shape")

AreaOfShapes(Shape)