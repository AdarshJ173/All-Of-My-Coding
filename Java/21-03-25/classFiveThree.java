class Employee {
    private double salary;

    public Employee(double salary) {
        this.salary = salary;
    }

    public void work() {
        System.out.println("Employee is working...");
    }

    public double getSalary() {
        return salary;
    }
}

class HRManager extends Employee {
    public HRManager(double salary) {
        super(salary);
    }

    @Override
    public void work() {
        System.out.println("HR Manager is managing employees...");
    }

    public void addEmployee() {
        System.out.println("HR Manager is adding a new employee...");
    }
}

public class classFiveThree {
    public static void main(String[] args) {
        Employee emp = new Employee(50000);
        emp.work();
        System.out.println("Salary: " + emp.getSalary());

        HRManager hr = new HRManager(70000);
        hr.work();
        hr.addEmployee();
        System.out.println("Salary: " + hr.getSalary());
    }
}
