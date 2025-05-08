class CategoryNode:
    def __init__(self, name):
        self.name = name
        self.children = []

    def add_child(self, child):
        self.children.append(child)

    def __str__(self, level=0):
        ret = "  " * level + self.name + "\n"
        for child in self.children:
            ret += child.__str__(level + 1)
        return ret

class AVLNode:
    def __init__(self, key, category_node):
        self.key = key
        self.category_node = category_node
        self.left = None
        self.right = None
        self.height = 1

class AVLTree:
    def get_height(self, node):
        return node.height if node else 0

    def get_balance(self, node):
        return self.get_height(node.left) - self.get_height(node.right) if node else 0

    def rotate_right(self, y):
        x = y.left
        T2 = x.right
        x.right = y
        y.left = T2
        y.height = 1 + max(self.get_height(y.left), self.get_height(y.right))
        x.height = 1 + max(self.get_height(x.left), self.get_height(x.right))
        return x

    def rotate_left(self, x):
        y = x.right
        T2 = y.left
        y.left = x
        x.right = T2
        x.height = 1 + max(self.get_height(x.left), self.get_height(x.right))
        y.height = 1 + max(self.get_height(y.left), self.get_height(y.right))
        return y

    def insert(self, root, key, category_node):
        if not root:
            return AVLNode(key, category_node)
        elif key < root.key:
            root.left = self.insert(root.left, key, category_node)
        else:
            root.right = self.insert(root.right, key, category_node)

        root.height = 1 + max(self.get_height(root.left), self.get_height(root.right))
        balance = self.get_balance(root)

        if balance > 1 and key < root.left.key:
            return self.rotate_right(root)
        if balance < -1 and key > root.right.key:
            return self.rotate_left(root)
        if balance > 1 and key > root.left.key:
            root.left = self.rotate_left(root.left)
            return self.rotate_right(root)
        if balance < -1 and key < root.right.key:
            root.right = self.rotate_right(root.right)
            return self.rotate_left(root)

        return root

    def inorder_traversal(self, root):
        if root:
            self.inorder_traversal(root.left)
            print(f"{root.key}: {root.category_node.name}")
            self.inorder_traversal(root.right)

# Example usage
if __name__ == "__main__":
    root_category = CategoryNode("Products")
    electronics = CategoryNode("Electronics")
    clothing = CategoryNode("Clothing")
    mobiles = CategoryNode("Mobiles")
    laptops = CategoryNode("Laptops")
    shirts = CategoryNode("Shirts")
    trousers = CategoryNode("Trousers")

    root_category.add_child(electronics)
    root_category.add_child(clothing)
    electronics.add_child(mobiles)
    electronics.add_child(laptops)
    clothing.add_child(shirts)
    clothing.add_child(trousers)

    print("Category Hierarchy:")
    print(root_category)

    avl = AVLTree()
    avl_root = None
    avl_root = avl.insert(avl_root, 50, electronics)
    avl_root = avl.insert(avl_root, 30, clothing)
    avl_root = avl.insert(avl_root, 20, mobiles)
    avl_root = avl.insert(avl_root, 40, laptops)
    avl_root = avl.insert(avl_root, 70, shirts)
    avl_root = avl.insert(avl_root, 60, trousers)

    print("\nBalanced AVL Tree:")
    avl.inorder_traversal(avl_root)
