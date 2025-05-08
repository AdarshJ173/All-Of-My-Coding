class Product:
    def __init__(self, name):
        self.name = name

class ECommercePlatform:
    def __init__(self):
        self.products = []

    def add(self, product):
        self.products.append(product)

    def search(self, target):
        return next((p for p in self.products if p.name == target), None)

platform = ECommercePlatform()
while True:
    print("1. Add product")
    print("2. Search")
    print("3. Exit")
    choice = input("Enter your choice: ")
    if choice == "1":
        name = input("Enter product name: ")
        platform.add(Product(name))
    elif choice == "2":
        target = input("Enter product name to search: ")
        result = platform.search(target)
        if result:
            print("Product found:", result.name)
        else:
            print("Product not found")
    elif choice == "3":
        break
    else:
        print("Invalid choice")
