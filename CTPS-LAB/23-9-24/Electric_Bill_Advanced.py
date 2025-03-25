CGST_Rate = 0.09
SGST_Rate = 0.09

Fixed_Charge_Domestic = 50
Fixed_Charge_Commercial = 100

Domestic_Rate_1 = 1.50
Domestic_Rate_2 = 3.50
Domestic_Rate_3 = 4.50

Commercial_Rate_1 = 2.50
Commercial_Rate_2 = 5.00
Commercial_Rate_3 = 6.50


def calc_electricity_bill(units,usage_type):
    
    if usage_type == 'Domestic':
        if units <= 100 :
            bill = units * Domestic_Rate_1
        elif units <= 300:
            bill = (100 * Domestic_Rate_1)+((units - 100) * Domestic_Rate_2)
        else:
            bill = (100*Domestic_Rate_1) + (200*Domestic_Rate_2) + ((units-300)*Domestic_Rate_3)

    elif usage_type == "Commercial":
        if units <= 100 :
            bill = units * Commercial_Rate_1
        elif units <= 300:
            bill = (100 * Commercial_Rate_1)+((units - 100) * Commercial_Rate_2)
        else:
            bill = (100*Commercial_Rate_1) + (200*Commercial_Rate_2) + ((units-300)*Commercial_Rate_3)

    return bill


def calc_total_bill(bill,usage_type):
    CGST = bill * CGST_Rate
    SGST = bill * SGST_Rate

    if usage_type == 'Domestic':
        fixed_Charge = Fixed_Charge_Domestic
    elif usage_type == 'Commercial':
        fixed_Charge = Fixed_Charge_Commercial
    
    total_Bill = bill + CGST + SGST + fixed_Charge

    return total_Bill,CGST,SGST,fixed_Charge


print("Electric Billing System")

units = float(input("Enter Your Units: "))
usage_type = input("Enter Your Usage Type, Domestic/Commercial :")

bill = calc_electricity_bill(units,usage_type)
total_Bill,CGST,SGST,fixed_Charge = calc_total_bill(bill,usage_type)

print("Your Electricity Bill is: ", total_Bill)
print("CGST: ", CGST)
print("SGST: ", SGST)
print("Fixed Charge: ", fixed_Charge)

print("Thank You for using the Electricity Billing System")