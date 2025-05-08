list_of_Numbers = [1,200,4,74,8,4,37]

largest_Number = list_of_Numbers[0]

for number in list_of_Numbers:
    if number > largest_Number:
        largest_Number = number

print(largest_Number)


def LARGEST_NUM(list_of_Numbers):
    largest_Number = list_of_Numbers[0]

    for number in list_of_Numbers:
        if number > largest_Number:
            largest_Number = number

    print(largest_Number)

LARGEST_NUM(list_of_Numbers)
