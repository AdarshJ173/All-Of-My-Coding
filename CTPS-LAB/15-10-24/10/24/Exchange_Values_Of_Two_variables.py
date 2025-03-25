# 15/10/24

# 1.Temporary Variable

var_1 = int(input("v1: "))
var_2 = int(input("v2: "))

print("initial_v1: ",var_1)
print("initial_v2: ",var_2)

print("\n")

temp = var_1
var_1 = var_2
var_2 = temp

print("Final_v1: ",var_1)
print("Final_v2: ",var_2)


print("\n")
# 2.Without temporary variable

v1 = int(input("v1:"))
v2 = int(input("v2:"))

print("initial v1:",v1)
print("initial v2:",v2)

print("\n")
v1 = v1+v2
v2 = v1-v2
v1 = v1-v2

print("final v1:",v1)
print("final v2:",v2)

print("\n")
# 3.Tuple Assignment
d = 10
f = 20
print("initial d: ",d)
print("initial f: ",f)

(d,f) = (f,d)

print("final d: ",d)
print("final f: ",f)