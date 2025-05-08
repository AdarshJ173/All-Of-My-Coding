public class five2 {
    public class Shape {
      public double getArea() {
          return 0;
      }
  }

  public class Rectangle extends Shape {
      private double length;
      private double width;

      public Rectangle(double length, double width) {
          this.length = length;
          this.width = width;
      }

      @Override
      public double getArea() {
          return length * width;
      }
  }

  public static void main(String[] args) {
      five2 rectangle = new five2();
      five2.Rectangle rect = rectangle.new Rectangle(5, 10);
      System.out.println("Area of rectangle: " + rect.getArea());
  }
}
