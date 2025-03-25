from scipy import misc
from matplotlib import pyplot as plt
import numpy as np

# panda = misc.face()

# plt.imshow(panda)
# plt.title('Raccoon face image from scipy')
# plt.axis('off')
# plt.show()

image_path = 'CTPS-LAB/Picsart_24-10-28_21-28-43-844.png'  # Use forward slashes for compatibility
img = plt.imread(image_path)

# Display the image
plt.imshow(img)
plt.axis('off')  # Turn off axis
plt.title('new woxsen linkedin bg')
plt.show()