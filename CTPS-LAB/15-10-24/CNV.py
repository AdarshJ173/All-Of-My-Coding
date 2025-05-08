from collections import deque

O_list = [4, 6, 12, 16, 20, 24]
print("Old List: ", O_list)

d = deque(O_list)

d.rotate(-3)

N_List = list(d)

print("New List: ", N_List)