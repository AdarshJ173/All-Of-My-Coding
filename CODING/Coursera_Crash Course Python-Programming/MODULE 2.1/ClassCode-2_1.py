# Functions
# If , else, elif
# return 

def add(a, b):
    print(a + b)
add(3, 4)

def addition(c, d):
    return c + d
ans = addition(3, 4)
print(ans)


def marks(name,percentage):
    if  percentage >= 85:
        print(name,"A grade")
    elif  percentage >= 80:
        print(name,"B grade")
    elif  percentage >= 70:
        print(name,"C grade")
    else:
        print(name,"Failed")

marks("aayu",65874)
marks("stp",756)
marks("subu",445)
marks("aj",5)
marks("sajan",45)
marks("hado",12)
