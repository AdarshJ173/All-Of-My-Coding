import matplotlib.pyplot as plt
import numpy as np

# Create the ROC Curve plot
plt.figure(figsize=(10, 8))

# Plot the diagonal line (random classifier)
x = np.linspace(0, 1, 100)
plt.plot(x, x, color='gray', linestyle='--')

# Plot the ROC curve with precise points matching the image
x_curve = [0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]
y_curve = [0, 0.3, 0.5, 0.6, 0.7, 0.8, 0.85, 0.9, 0.95, 0.99, 1.0]
plt.plot(x_curve, y_curve, color='skyblue', label='Classifier ROC')

# Add points at the curve bends
plt.scatter(x_curve, y_curve, color='skyblue', s=50)

# Customize the plot
plt.title('Receiver Operating Characteristic (ROC) Curve')
plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.xlim(0, 1)
plt.ylim(0, 1)
plt.grid(True, linestyle='--', alpha=0.7)

# Add text for AUC with careful positioning
plt.text(0.4, 0.02, 'With Outliers 70:10 (AUC = 0.93)', fontsize=10)

# Add legend
plt.legend(loc='lower right')

# Ensure tight layout
plt.tight_layout()
plt.show()