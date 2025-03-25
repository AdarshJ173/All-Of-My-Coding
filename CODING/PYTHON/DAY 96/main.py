# AsyncIO in Python

'''
Asynchronous I/O, or async for short, is a programming pattern that allows for high performance I/O operations in a concurrent and non-blocking manner. In Python, async programming is achieved through the use of the asyncio module and asynchronous functions.
'''

import time
import asyncio
import requests

async def Fun1():
    """
    This function downloads an image from a specified URL and saves it to the local file system.
    """
    print("Func 1")
    url = "https://images.pexels.com/photos/1402787/pexels-photo-1402787.jpeg?auto=compress&cs=tinysrgb&w=600"
    response  = requests.get(url)
    open("4k1.png","wb").write(response.content)

    # The following lines are commented out as they are not necessary for the function's purpose.
    # await asyncio.sleep(1)
    # time.sleep(3)
    return "Adarsh"

async def Fun2():
    """
    This function downloads an image from a specified URL and saves it to the local file system.
    """
    print("Func 2")
    url = "https://images.pexels.com/photos/807598/pexels-photo-807598.jpeg?auto=compress&cs=tinysrgb&w=600"
    response  = requests.get(url)
    open("4k2.png","wb").write(response.content)
    # await asyncio.sleep(1)
    # time.sleep(3)

async def Fun3():
    """
    This function downloads an image from a specified URL and saves it to the local file system.
    """
    print("Func 3")
    url = "https://images.pexels.com/photos/1366957/pexels-photo-1366957.jpeg?auto=compress&cs=tinysrgb&w=600"
    response  = requests.get(url)
    open("4k3.png","wb").write(response.content)
    # await asyncio.sleep(1)
    # time.sleep(3)

async def main():
    """
    This function runs all three Fun1, Fun2, and Fun3 functions concurrently using asyncio.gather().
    """
    # The following lines are commented out as they are not necessary for the function's purpose.
    # await Fun1()
    # await Fun2()
    # await Fun3()

    # The following lines create tasks for each function and run them concurrently.
    l = await asyncio.gather(
        Fun1(),
        Fun2(),
        Fun3()
    )
    print(l)

# The following line runs the main function using asyncio.run().
asyncio.run(main())