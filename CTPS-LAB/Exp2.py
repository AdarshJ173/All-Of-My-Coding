print("Welcome to daily need retail shopping ")
print("list of items in market")

Bread = 50
Milk = 35
Eggs = 7
Rice = 45
Banana = 6

Regular_Discount = 0.1
premium_Discount = 0.2

amount = 0

print('''
1.Bread
2.Milk
3.Eggs
4.Rice
5.Banana
''')

print("To stop shopping enter 0")

print('\n')

while True:
    item = int(input("Enter the item number(Type 0 if you r done): "))

    if item == 0:
        break
    elif item <= 5:
        quantity = int(input("enter the quantity: "))

        if item == 1:
            amount += Bread * quantity
        elif item == 2:
            amount += Milk * quantity
        elif item == 3:
            amount += Eggs * quantity
        elif item == 4:
            amount += Rice * quantity
        elif item == 5:
            amount += Banana * quantity
        else :
            print("Item is not available")

    else :
        print("Invalid Item Number")


customer_Type = input("Enter you customer Type i.e Regular(r) / Premium(P):").lower()

total_cost = amount

if customer_Type == 'r':
    total_cost -= total_cost * Regular_Discount
elif customer_Type == 'p':
    total_cost -= total_cost * premium_Discount
else:
    print("Invalid Customer Type")

print(total_cost)