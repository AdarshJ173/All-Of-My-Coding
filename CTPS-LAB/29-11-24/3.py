import numpy as np

arr_1d = np.array([10,20,30,40,50])
print("1D array:\n",arr_1d)

print("sum of all elements in 1D array: ",np.sum(arr_1d))
print("mean of all elements in 1D array: ",np.mean(arr_1d))
print("Standard of all elements in 1D array: ",np.std(arr_1d))
print(" ")

expenses = np.array([1200,800,600,1400,900])

print("Monthly expenses: \n",expenses)
print("Total expenses: ",np.sum(expenses))
print("Average monthly expenses: ",np.mean(expenses))
print(" ")

print("creating a 2D array for matrix operations: ")

arr_2d = np.array([[1,2,3],[4,5,6]])
print("2D array:\n",arr_2d)

print("2nd element on 1st row is: ",arr_2d[0,1])

print("Transpose of the 2D array:\n",np.transpose(arr_2d))
print("sum of elements along rows:",np.sum(arr_2d,axis=1))
print("sum of elements along columns:",np.sum(arr_2d,axis=0))
print(" ")

image_matrix = np.array([[0,128,255],[255,128,0]])
print("Image pixel matrix (grayscale):\n",image_matrix)
print(" ")



# OD = np.array([10, 20, 30, 40, 50])
# print("ID Array:", OD)

# TD = np.array([[1, 2, 3], [4, 5, 6]])
# print("\nTD Array:\n", TD)

# print("\nElement at TD[0, 1]:", TD[0, 1])

# TreD = np.array([[[1, 2, 3], [3, 4, 5]], [[6, 7, 8], [8, 9, 0]]])
# print("\nTreD Array:\n", TreD)

# print("Element at TreD[0, 1, 2]:", TreD[0, 1, 2])