# Importing the necessary modules
# concurrent.futures is a module that provides a high-level interface for asynchronously executing callables.
import concurrent.futures
# requests is a simple, yet elegant, HTTP library.
import requests

# Define a function to download a file
def downloadFile(url, name):
    # Print a message to indicate the start of the download
    print(f"Started downloading {name}")
    
    # Send a GET request to the URL and get the response
    response  = requests.get(url)
    
    # Open a file in binary write mode and write the response content to it
    open(f"files/files{name}.jpg","wb").write(response.content)
    
    # Print a message to indicate the completion of the download
    print(f"Finished downloading {name}")

if __name__ == "__main__":
    # Define the URL to download from
    url = "https://picsum.photos/200/300"
    
    # Create a ProcessPoolExecutor, which is an Executor that uses a pool of at most max_workers processes to execute calls asynchronously.
    with concurrent.futures.ProcessPoolExecutor() as executor:
        # Create a list of URLs to download (all the same URL in this case)
        l1 = [url for i in range(6)]
        # Create a list of file names
        l2 = [i for i in range(6)]
        
        # Use the executor's map function to concurrently execute the downloadFile function for each URL and file name
        results = executor.map(downloadFile, l1, l2)
        
        # Iterate over the results (although in this case, the downloadFile function does not return anything, so results will be empty)
        for r in results:
            print(r)

    # This code is commented out, but it demonstrates an alternative way to achieve concurrency using the multiprocessing module
    # pros = []
    
    # for i in range(5):
    #     # downloadFile(url,i)
    #     # Create a new Process that will execute the downloadFile function with the given arguments
    #     p = multiprocessing.Process(target=downloadFile,args=[url,i])
    #     # Start the process
    #     p.start()
    #     # Add the process to the list
    #     pros.append(p)

    # for p in pros:
    #     # Wait for the process to finish
    #     p.join()

    