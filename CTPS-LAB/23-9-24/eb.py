# 18-9-24

def calculate_total_cost():
    my_unit = float(input("Enter your unit: "))

    unit_space = 100

    rs1 = 1
    rs2 = 1.5
    rs3 = 3
    rs4 = 5

    cost1 = unit_space * rs1
    cost2 = unit_space * rs2
    cost3 = unit_space * rs3
    cost4 = unit_space * rs4

    total_cost = 0

    if my_unit <= 0:
        print("Invalid unit. Please enter a value greater than 0.")
    elif my_unit <= 100:
        total_cost = cost1
    elif my_unit <= 200:
        total_cost = cost1 + cost2
    elif my_unit <= 300:
        total_cost = cost1 + cost2 + cost3
    else:
        total_cost = cost1 + cost2 + cost3 + cost4
        extra_units = my_unit - 300
        total_cost += (extra_units // 100) * cost4
        if extra_units % 100 != 0:
            total_cost += (extra_units % 100) * rs4

    print("Total cost: ", total_cost)

calculate_total_cost() 

