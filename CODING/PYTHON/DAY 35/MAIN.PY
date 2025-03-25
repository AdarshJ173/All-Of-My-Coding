''' FOR LOOP WITH ELSE'''
# python else in loop 

for i in range(5): #range work from 0 to n-1{in this case 5-1 = 4}
    print(i)
else:
    print("Sorry")

for i in []:
    print(i)
else:
    print("sorry")

# as we know that the else clause is used along with the if statement.
# python allows the else keyword to be used with the for and while loops too. the else block appears after the body of the loop. the statements in the else block will be executed after all iterations are completed. the program exits the loop only after the else block is executed.

# Iterations are the repetition of a process in order to achieve a desired result or outcome. In programming, iterations are commonly used in loops to execute a set of instructions multiple times.

'''Certainly! In Python, a for loop can have an optional else block that is executed when the loop completes normally (i.e., without encountering a break statement). The else block is executed only if the loop iterates through all the items in the sequence without being terminated prematurely,
Here's a simple example to illustrate the usage of a for loop with an else block:
'''

fruits = ['apple', 'banana', 'orange']

for fruit in fruits:
    print(f"Current fruit: {fruit}")
else:
    print("No more fruits.")

'''
In this example, we have a list of fruits. The for loop iterates over each fruit in the fruits list. For each iteration, it prints the current fruit using the print() function.

After the loop finishes iterating through all the fruits, the else block is executed, and it prints the message "No more fruits."

Now, let's see an example where the loop is terminated prematurely using a break statement:'''

fruits = ['apple', 'banana', 'orange']

for fruit in fruits:
    if fruit == 'banana':
        print("Found a banana! Stopping the loop.")
        break
    print(f"Current fruit: {fruit}")
else:
    print("No more fruits.")


'''In this case, the loop starts iterating over the fruits. When it encounters the 'banana', it prints a message indicating that a banana was found and then uses the break statement to exit the loop prematurely.

As a result, the else block is not executed because the loop was terminated by the break statement before completing all the iterations.

The else block in a for loop is useful when you want to perform some action or execute some code only if the loop completes normally without any interruptions.'''

for i in range(6):
    print(i)
    if i == 4:
        break
else:
    print("Sorry")

# here the loop is not breaked , its totaly ended successfully - therefore it does not execute else 

'''

The else block will not be executed. Here's why:

When the loop starts, it iterates over the values of i from 0 to 5 (since range(6) generates values from 0 to 5). The loop proceeds as follows:

When i is 0, it prints 0 and continues to the next iteration.
When i is 1, it prints 1 and continues to the next iteration.
When i is 2, it prints 2 and continues to the next iteration.
When i is 3, it prints 3 and continues to the next iteration.
When i is 4, it prints 4 and then encounters the if condition i == 4. Since the condition is true, it executes the break statement, which immediately terminates the loop and exits it.
After the loop is terminated by the break statement, the program continues with the next line of code after the loop. In this case, there are no more statements after the loop, so the program ends.

The else block is not executed because the loop was terminated prematurely by the break statement. The else block is only executed when the loop completes normally without encountering a break statement.
'''

