applePrice = float(input("price of the apples: "))
budget = 200

if (budget - applePrice > 100):
    print("Buy the apples")
elif (budget - applePrice > 100 or 70):
    print("Its okay you can buy the apples")
else:
    print("do not buy the apples")