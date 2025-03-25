import matplotlib.pyplot as plt 

class Circle(object):
    def __init__(self, radius=3, color='purple'):
        self.radius = radius
        self.color = color

    def add_radius(self, r):
        self.radius += r 
        return self.radius

    def draw_circle(self):
        plt.gca().add_patch(plt.Circle((0, 0), radius=self.radius, fc=self.color))
        plt.axis('scaled')
        plt.show()

my_circle = Circle(radius=5, color='blue')

my_circle.add_radius(2)

my_circle.draw_circle()