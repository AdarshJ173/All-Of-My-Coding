# TYPECASTING
''' THE CONVERSION OF ONE TYPE OF DATA TYPE INTO ANOTHER TYPE OF DATA TYPE , IS KNOWN AS TYPECASTING OR TYPE CONVERSION'''

# FUNCTION like : int() , float(), str(), ord(), hex(), oct(), tuple(), set(), list(), dict(), etc... can be used for typecasting

a = "3"
b = "4"
print(a+b) # output will be 34
# this gives 34 not 7 , this is bcz both the variables are string data types , not integer data types
# for the result to be 7
print(int(a) + int(b))
# we converted a string into a number

''' but if the string is invalid , then it will show and error
e = "AAJ7"
print(int(a) + int(e))'''


c = 3
d = 4
print(c + d)
# here the variables are integer type , thats why the output is 7 

#// -------------------------------------------
j = 43+57
print("43 + 57 is: " + (j))
#// -------------------------------------------


''' AND SO IF WE WANT TO TELL THE COMPUTER THAT THE VALUE INSIDE THE STRING IS AN INTEGER VALUE , THEN WE USE TYPECASTING '''

# TYPES OF CONVERSION
'''
1.EXPLICIT CONVERSION (EXPLICIT TYPECASTING BY THE PROGRAMMER IN PYTHON)
2.IMPLICIT CONVERSION ( IMPLICIT TYPECASTING BY PYTHON ITSELF)
'''
# EXAMPLE OF IMPLICIT CONVERSION
R = 2.3
J = 5 
print(R+J)
# here it converted the lower data type into higher data type , j = 5 into j = 5.0 , to give the final answer in float i.e 7.3