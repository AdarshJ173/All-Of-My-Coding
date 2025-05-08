public class five1 {
    public class Vehicle {
      public void drive() {
          System.out.println("Driving a vehicle");
      }
  }

  class Car extends Vehicle {
      @Override
      public void drive() {
          System.out.println("Repairing a car");
      }
  }

  public static void main(String[] args) {
      five1 obj = new five1();
      five1.Vehicle v = obj.new Vehicle();
      v.drive();
      five1.Car c = obj.new Car();
      c.drive();
  }
}
