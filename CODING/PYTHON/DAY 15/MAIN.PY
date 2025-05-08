# GOOD MORNING SIR 
import time

current_time = int(time.strftime('%H'))
print(current_time)

if current_time < 12 :
    print("Good Morning sir")
elif  12 <= current_time <=14 :
    print("good afternoon sir")
else:
    print("Good evening sir")
