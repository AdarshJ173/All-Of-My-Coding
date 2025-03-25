import time

current_time_str = time.strftime('%H:%M:%S')
print("Current time:", current_time_str)

# Extracting hours, minutes, and seconds as integers
current_hour, current_minute, current_second = map(int, current_time_str.split(':'))

# Comparing only the hour component
if current_hour < 12:
    print("Good Morning sir")
elif 12 <= current_hour < 14:
    print("Good Afternoon sir")
else:
    print("Good Evening sir")
