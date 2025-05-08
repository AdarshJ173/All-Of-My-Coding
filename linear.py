# you are working on a project to create an efficient sort functionality for a large dataset in a an e-commerce platfrom the platform needs to allow users to search for products based on thier names design an python program.

class EcommerceProductSearch:
    def __init__(self, products=None):
        self.products = products or []
        self.sorted = False
    
    def add_product(self, product_id, name, price, category):
        """Add a product to the dataset"""
        self.products.append({
            'id': product_id,
            'name': name,
            'price': price,
            'category': category
        })
        self.sorted = False
    
    def sort_products(self):
        """Sort products by name using quicksort (efficient for large datasets)"""
        if not self.sorted:
            self.products.sort(key=lambda x: x['name'].lower())
            self.sorted = True
    
    def search_by_name(self, query):
        """Binary search implementation for finding products by name"""
        self.sort_products()
        query = query.lower()
        
        # For exact matches, use binary search
        left, right = 0, len(self.products) - 1
        while left <= right:
            mid = (left + right) // 2
            if self.products[mid]['name'].lower() == query:
                return [self.products[mid]]
            elif self.products[mid]['name'].lower() < query:
                left = mid + 1
            else:
                right = mid - 1
        
        # If no exact match, return partial matches
        return [p for p in self.products if query in p['name'].lower()]
    
    def search_by_prefix(self, prefix):
        """Find all products starting with a given prefix"""
        self.sort_products()
        prefix = prefix.lower()
        return [p for p in self.products if p['name'].lower().startswith(prefix)]
    
    def display_products(self, products):
        """Display products in a readable format"""
        if not products:
            return "No products found."
        
        result = []
        for p in products:
            result.append(f"ID: {p['id']}, Name: {p['name']}, Price: ${p['price']}, Category: {p['category']}")
        return "\n".join(result)


# Example usage
if __name__ == "__main__":
    # Initialize search engine
    search_engine = EcommerceProductSearch()
    
    # Add sample products
    search_engine.add_product(1, "Smartphone X", 799.99, "Electronics")
    search_engine.add_product(2, "Laptop Pro", 1299.99, "Electronics")
    search_engine.add_product(3, "Smart Watch", 199.99, "Electronics")
    search_engine.add_product(4, "Wireless Headphones", 149.99, "Audio")
    search_engine.add_product(5, "Smart TV", 899.99, "Electronics")
    search_engine.add_product(6, "Coffee Maker", 79.99, "Kitchen")
    search_engine.add_product(7, "Blender Premium", 129.99, "Kitchen")
    search_engine.add_product(8, "Wireless Keyboard", 59.99, "Accessories")
    search_engine.add_product(9, "Gaming Mouse", 49.99, "Accessories")
    search_engine.add_product(10, "Backpack Pro", 39.99, "Accessories")
    
    print("Welcome to E-commerce Product Search\n")
    
    # Search examples
    print("=== Search for 'smart' ===")
    results = search_engine.search_by_name("smart")
    print(search_engine.display_products(results))
    
    print("\n=== Search by prefix 'wir' ===")
    results = search_engine.search_by_prefix("wir")
    print(search_engine.display_products(results))
    
    # Interactive search
    print("\n=== Interactive Search ===")
    query = input("Enter product name to search: ")
    results = search_engine.search_by_name(query)
    print(search_engine.display_products(results))