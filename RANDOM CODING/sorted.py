my_list = [10, 259, 64]
is_sorted = True

for i in range(len(my_list) - 1):
    if my_list[i+1] < my_list[i]:
        is_sorted = False
        break  

if is_sorted:
    print("The list is sorted.")
else:
    print("The list is not sorted.")