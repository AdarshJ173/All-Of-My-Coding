import java.util.Scanner;

public class twoint {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        double num1 = input.nextDouble();

        System.out.print("Enter the second number: ");
        double num2 = input.nextDouble();

        if (num1 > 0 && num1 < 1 && num2 > 0 && num2 < 1) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }
}
