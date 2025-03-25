public class five3 {
  public class Employee {
    private double salary;

    public Employee(double salary) {
        this.salary = salary;
    }
    public void work() {
        System.out.println("Employee is working.");
    }
    public double getSalary() {
        return salary;
    }
}

public class HRManager extends Employee {
    public HRManager(double salary) {
        super(salary);
    }

    @Override
    public void work() {
        System.out.println("HR Manager is working.");
    }

    public void addEmployee() {
        System.out.println("HR Manager is adding an employee.");
    }
}
}
