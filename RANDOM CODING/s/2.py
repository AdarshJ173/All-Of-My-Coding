list_1 = []
list_2 = []
new_list = []

print("Enter numbers in first list: ")
for i in range(4):
    list_1.append(int(input()))

print("\nEnter numbers in second list: ")
for j in range(4):
    list_2.append(int(input()))

new_list = [value for value in list_1 if value in list_2]

print("\nCommon elements:")
print(new_list)