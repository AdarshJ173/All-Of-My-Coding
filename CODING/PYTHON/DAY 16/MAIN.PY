# MATCH CASE STATEMENTS 

x = int(input("enter the value of x : "))

match x :
    case 0 :
        print ("x is zero")
    case 4 :
        print("case is 4")

    case _ if x!= 70:
        print(x, "is not 70")
    
    case _ if x!= 40:
        print(x, "is not 40")
    
    case _ :
        print(x)

