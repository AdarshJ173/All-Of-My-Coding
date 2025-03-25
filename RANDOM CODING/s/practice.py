name = "Adarsh"
print( " only p: ",name[::-1])

def reverse_name():
    print( name[::-1])

reverse_name()


def reverse_name2():
    reversed_name = ""
    for char in name:
        reversed_name = char + reversed_name
    print(reversed_name)

reverse_name2()



def reverse_name3():
    reversed_name = ""
    i = len(name) - 1
    while i >= 0:
        reversed_name += name[i]
        i -= 1
    print(reversed_name)

reverse_name3()



def reverse_name4(name):
    if len(name) == 0:
        return name
    elif len(name) == 1:
        return name
    else:
        return reverse_name4(name[1:]) + name[0]

print(reverse_name4(name))


def quicksort(array):
    # If the array has 1 or 0 elements, it's already sorted
    if len(array) <= 1:
        return array
    
    # Choose a pivot element from the array
    pivot = array[len(array) // 2]
    
    # Create three lists: elements less than the pivot, equal to the pivot, and greater than the pivot
    less_than_pivot = []
    equal_to_pivot = []
    greater_than_pivot = []
    
    # Iterate through the array and categorize each element
    for element in array:
        if element < pivot:
            less_than_pivot.append(element)
        elif element == pivot:
            equal_to_pivot.append(element)
        else:
            greater_than_pivot.append(element)
    
    # Recursively sort the less_than_pivot and greater_than_pivot lists
    sorted_less_than_pivot = quicksort(less_than_pivot)
    sorted_greater_than_pivot = quicksort(greater_than_pivot)
    
    # Combine the sorted lists and the equal_to_pivot list to get the final sorted array
    sorted_array = sorted_less_than_pivot + equal_to_pivot + sorted_greater_than_pivot
    
    return sorted_array

# Test the quicksort function
print(quicksort([3, 6, 8, 10, 1, 2, 1]))  # Output: [1, 1, 2, 3, 6, 8, 10]


def find_max_element(arr):
    max_element = arr[0]
    for i in range(1, len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]
    return max_element

# Example usage:
arr = [3, 1, 4, 1, 5, 9, 2, 6]
print("Maximum element in the array is:", find_max_element(arr))


def is_palindrome(s):
    s = s.lower()  # Convert to lowercase for case-insensitive comparison
    return s == s[::-1]  # Compare the string with its reverse

# Example usage:
print(is_palindrome("radar"))  # True
print(is_palindrome("hello"))  # False


def find_min_element(arr):
    min_element = arr[0]
    for i in range(1, len(arr)):
        if arr[i] < min_element:
            min_element = arr[i]
    return min_element

# Example usage:
arr = [3, 1, 4, 1, 5, 9, 2, 6]
print("Minimum element in the array is:", find_min_element(arr))