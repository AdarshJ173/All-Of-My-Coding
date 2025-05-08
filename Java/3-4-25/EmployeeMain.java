public class EmployeeMain{

  public static class Employee {
      private String name;
      private String address;
      private double salary;
      private String jobTitle;

      public Employee(String name, String address, double salary, String jobTitle) {
          this.name = name;
          this.address = address;
          this.salary = salary;
          this.jobTitle = jobTitle;
      }

      public double calculateBonus() {
          return salary * 0.1;
      }

      public String generatePerformanceReport() {
          return name + " is doing great as a " + jobTitle + ".";
      }

      public void manageProject(String projectName) {
          System.out.println(name + " is managing the " + projectName + " project.");
      }

      public String getName() {
          return name;
      }

      public String getAddress() {
          return address;
      }

      public double getSalary() {
          return salary;
      }

      public String getJobTitle() {
          return jobTitle;
      }
  }

  public static class Manager extends Employee {
      private String department;

      public Manager(String name, String address, double salary, String jobTitle, String department) {
          super(name, address, salary, jobTitle);
          this.department = department;
      }

      public void manageDepartment() {
          System.out.println(getName() + " is managing the " + department + " department.");
      }
  }

  public static class Developer extends Employee {
      private String programmingLanguage;

      public Developer(String name, String address, double salary, String jobTitle, String programmingLanguage) {
          super(name, address, salary, jobTitle);
          this.programmingLanguage = programmingLanguage;
      }

      public void writeCode() {
          System.out.println(getName() + " is writing code in " + programmingLanguage + ".");
      }
  }

  public static class Programmer extends Developer {
      private String operatingSystem;

      public Programmer(String name, String address, double salary, String jobTitle, String programmingLanguage, String operatingSystem) {
          super(name, address, salary, jobTitle, programmingLanguage);
          this.operatingSystem = operatingSystem;
      }

      public void debugCode() {
          System.out.println(getName() + " is debugging code on " + operatingSystem + ".");
      }
  }

  public static void main(String[] args) {
    Manager manager = new Manager("Ramya", "123 Main St", 100000, "Manager", "IT");
    Developer developer = new Developer("Swathi", "456 Elm St", 80000, "Developer", "Java");
    Programmer programmer = new Programmer("Adarsh", "789 Oak St", 70000, "Programmer", "Python", "Windows");

    System.out.println(' ');

      System.out.println("Manager's bonus: $" + manager.calculateBonus());
      System.out.println(manager.generatePerformanceReport());
      manager.manageProject("New Project");
      manager.manageDepartment();

      System.out.println(' ');

      System.out.println("Developer's bonus: $" + developer.calculateBonus());
      System.out.println(developer.generatePerformanceReport());
      developer.writeCode();

      System.out.println(' ');

      System.out.println("Programmer's bonus: $" + programmer.calculateBonus());
      System.out.println(programmer.generatePerformanceReport());
      programmer.writeCode();
      programmer.debugCode();
  }
}
