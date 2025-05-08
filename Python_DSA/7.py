class HashTable:
    def __init__(self, capacity=10):
        self.capacity = capacity
        self.size = 0
        self.table = [None] * self.capacity

    def hash_function(self, key):
        return hash(key) % self.capacity

    def rehash(self):
        old_table = self.table
        self.capacity *= 2
        self.size = 0
        self.table = [None] * self.capacity
        for entry in old_table:
            if entry:
                for key, value in entry:
                    self.insert(key, value)

    def insert(self, key, value):
        index = self.hash_function(key)
        if self.table[index] is None:
            self.table[index] = []
        for pair in self.table[index]:
            if pair[0] == key:
                pair[1] = value
                return
        self.table[index].append([key, value])
        self.size += 1
        if self.size / self.capacity > 0.7:
            self.rehash()

    def search(self, key):
        index = self.hash_function(key)
        if self.table[index] is not None:
            for pair in self.table[index]:
                if pair[0] == key:
                    return pair[1]
        return None

    def display(self):
        for i, bucket in enumerate(self.table):
            if bucket:
                print(f"Index {i}: {bucket}")

# Example Usage
if __name__ == "__main__":
    ht = HashTable()
    ht.insert("Laptop", {"price": 1000, "brand": "Dell"})
    ht.insert("Phone", {"price": 500, "brand": "Samsung"})
    ht.insert("Headphones", {"price": 100, "brand": "Sony"})

    print("Hash Table:")
    ht.display()

    product = "Laptop"
    result = ht.search(product)
    if result:
        print(f"\n{product} found: {result}")
    else:
        print(f"\n{product} not found")
