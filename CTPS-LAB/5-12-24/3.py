import matplotlib.pyplot as plt
import numpy as np

# First plot
plt.figure(figsize=(10, 5))
plt.plot([-1, -4.5, 16, 23], marker='o')
plt.title('Plot of list [-1, -4.5, 16, 23]')
plt.xlabel('Index')
plt.ylabel('Value')
plt.grid(True)
plt.show()

# Second plot
plt.figure(figsize=(10, 5))
plt.plot([10, 200, 10, 200, 10, 200, 10, 200], marker='o')  
plt.title('Plot of list [10, 200, 10, 200, 10, 200, 10, 200]')
plt.xlabel('Index')
plt.ylabel('Value')
plt.grid(True)
plt.show() 

# Third plot
plt.figure(figsize=(10, 5))  
xpoints = np.array([0, 6])
ypoints = np.array([0, 250])
plt.plot(xpoints, ypoints, marker='o')  
plt.title('Plot of xpoints and ypoints')
plt.xlabel('xpoints')
plt.ylabel('ypoints')
plt.grid(True)
plt.show()  