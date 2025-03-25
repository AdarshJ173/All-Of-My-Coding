# Multithreading Module In Python

'''
Multithreading is a technique in programming that allows multiple threads of execution to run concurrently within a single process.
In Python, we can use the threading module to implement multithreading.
'''

import threading
import time

from concurrent.futures import ThreadPoolExecutor

def func(seconds):
    '''
    This function takes an argument 'seconds' as input, prints a message indicating the number of seconds it will sleep for,
    and then sleeps for the specified number of seconds.
    '''
    print(f'sleeping for {seconds} seconds')
    time.sleep(seconds)

    return seconds

def main():
    '''
    This function demonstrates the use of multithreading to execute the 'func' function with different arguments concurrently.
    It measures the time taken for the execution of the threads and prints the difference between the start and end times.
    '''
    time1 = time.perf_counter()

    # normal code

    # func(4)
    # func(2)
    # func(1)

    # coding using threads

    t1 = threading.Thread(target=func,args=[4])
    t2 = threading.Thread(target=func,args=[2])
    t3 = threading.Thread(target=func,args=[1])

    t1.start()
    t2.start()
    t3.start()

    t1.join()
    t2.join()
    t3.join()

    time2 = time.perf_counter()
    print(time2-time1)

def pollingDemo():
    '''
    This function demonstrates the use of ThreadPoolExecutor from the concurrent.futures module to execute the 'func' function with different arguments concurrently.
    It uses the map method to submit the function calls and prints the results.
    '''
    with ThreadPoolExecutor() as executor:

        a = [3,5,2,1]
        results = executor.map(func,a)
        for result in results:
            print(result)














            