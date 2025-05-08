# your are tasked with developing a python program for a small e-commerce platform. The platform needs a feature to sort a list of products based on different criteria. The criteria can be price, popularity, or alphabetical order. Design a sorting algorithm and implement it in a python program to demonstrate how the platform can efficiently organize and display its products. Encourage students to consider the efficiency of their sorting algorithm and its relevance to real-world application.

class Product:
    def __init__(self, name, price, popularity):
        self.name = name
        self.price = price
        self.popularity = popularity

    def __repr__(self):
        return f'Product Name: {self.name}, Price: ${self.price}, Popularity: {self.popularity}'

def sort_products(products, criteria):
    if criteria == 'price':
        return sorted(products, key=lambda x: x.price)
    elif criteria == 'popularity':
        return sorted(products, key=lambda x: x.popularity, reverse=True)
    elif criteria == 'alphabetical':
        return sorted(products, key=lambda x: x.name)

products = [
    Product('Product A', 10.99, 5),
    Product('Product B', 9.99, 3),
    Product('Product C', 12.99, 4),
    Product('Product D', 8.99, 2),
    Product('Product E', 11.99, 1)
]

print("Sorting products by price:")
for product in sort_products(products, 'price'):
    print(product)

print("\nSorting products by popularity:")
for product in sort_products(products, 'popularity'):
    print(product)

print("\nSorting products in alphabetical order:")
for product in sort_products(products, 'alphabetical'):
    print(product)
