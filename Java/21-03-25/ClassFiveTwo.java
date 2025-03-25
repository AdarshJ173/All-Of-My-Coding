class Shape {
    double getArea() {
        return 0;  
    }
}

class Rectangle extends Shape {
    double length;
    double width;
    
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    
    @Override
    double getArea() {
        return length * width; 
    }
}

class ClassFiveTwo {
    public static void main(String[] args) {
        Rectangle box = new Rectangle(5, 3);
        System.out.println("Box area: " + box.getArea());
    }
}
