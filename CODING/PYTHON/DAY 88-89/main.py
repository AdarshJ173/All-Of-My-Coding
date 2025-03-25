#Request module in python

'''
The requests module in Python is a popular library used for making HTTP requests. It simplifies the process of sending HTTP requests and handling the responses.

Here's a brief explanation of the requests module:

It provides a simple and user-friendly interface for sending HTTP requests.
It supports various HTTP methods such as GET, POST, PUT, DELETE, etc.
You can specify the URL, headers, parameters, and data for the request.
It automatically handles tasks like URL encoding, following redirects, and handling cookies.
It provides a convenient way to access the response status code, headers, and content.
It supports features like session management, timeouts, and authentication.
To use the requests module, you need to install it first by running pip install requests in your terminal. Then, you can import it in your Python code using import requests.

Here's a simple example of making a GET request using the requests module:

Copy
Insert
import requests

response = requests.get('https://api.example.com/data')

if response.status_code == 200:
    data = response.json()
    # Process the data
else:
    print('Request failed with status code:', response.status_code)
This is just a basic introduction to the requests module. It has many more features and options that you can explore in the official documentation: https://requests.readthedocs.io/
'''

import requests
from bs4 import BeautifulSoup

url = "https://en.wikipedia.org/wiki/Main_Page"
r = requests.get(url)
soup = BeautifulSoup(r.text,'html.parser')
# print(soup.prettify())

for heading in soup.find_all("h2"):
    print(heading.text)


# response = requests.get("https://www.google.com")
# print(response.text)










































































































