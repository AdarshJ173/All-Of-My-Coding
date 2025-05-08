import java.util.Scanner;
public class EXP2b {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter First number: ");
        double num1 = input.nextDouble();

        System.out.println("Enter Second number: ");
        double num2 = input.nextDouble();

        boolean result = (num1 > 0 && num1 < 1) && (num2 > 0 && num2 < 1);
        System.out.println("The Result is: " + result);
        
        input.close();
    }
}

