import java.util.Scanner;

public class Condition_Statements_2_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter two Double Values:");
        double value1 = input.nextDouble();
        double value2 = input.nextDouble();

        if (value1 >= 0 && value1 <= 1 && value2 >= 0 && value2 <= 1) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
        input.close();
    }
}
