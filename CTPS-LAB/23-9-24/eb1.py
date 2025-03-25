threshold_1 = 100 
threshold_2 = 300

rate_1 = 5
rate_2 = 7
rate_3 = 10

unit = float(input("Enter units: "))

if unit <= threshold_1:
    tb = unit*rate_1
elif unit <= threshold_2:
    tb = (threshold_1*rate_1)+((unit-threshold_1)*rate_2)
else:
    tb = (threshold_1*rate_1)+((threshold_2-threshold_1)*rate_2) + ((unit-threshold_2)*rate_3)

print("Total bill is: ", tb)