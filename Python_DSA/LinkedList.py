class Node:
    def __init__(self, data):
        self.data = data  # Store the data
        self.next = None  # Initialize the next pointer to None

class LinkedList:
    def __init__(self):
        self.head = None  # Initialize the head of the list

    def append(self, data):
        """Add a node with the given data to the end of the list."""
        new_node = Node(data)  # Create a new node
        if not self.head:  # If the list is empty
            self.head = new_node  # Set the new node as the head
            return
        last_node = self.head
        while last_node.next:  # Traverse to the last node
            last_node = last_node.next
        last_node.next = new_node  # Link the new node

    def display(self):
        """Display the linked list."""
        current_node = self.head
        while current_node:  # Traverse the list
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")  # Indicate the end of the list

    def delete(self, key):
        """Delete the first node with the given key."""
        current_node = self.head
        if current_node and current_node.data == key:  # If the head needs to be removed
            self.head = current_node.next  # Move the head to the next node
            current_node = None  # Free the old head
            return
        prev_node = None
        while current_node and current_node.data != key:  # Search for the key
            prev_node = current_node
            current_node = current_node.next
        if current_node is None:  # If the key was not found
            return
        prev_node.next = current_node.next  # Unlink the node
        current_node = None  # Free the node

# Example usage
if __name__ == "__main__":
    ll = LinkedList()
    ll.append(1)
    ll.append(2)
    ll.append(3)
    ll.display()  # Output: 1 -> 2 -> 3 -> None
    ll.delete(2)
    ll.display()  # Output: 1 -> 3 -> None
