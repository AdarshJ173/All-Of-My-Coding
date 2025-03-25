import java.util.Scanner;
public class Condition_Statements_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter four integers:");
        int num1 = input.nextInt();
        int num2 = input.nextInt(); 
        int num3 = input.nextInt();
        int num4 = input.nextInt();
        
        if (num1 == num2 && num2 == num3 && num3 == num4) {
            System.out.println("equal");
        } else {
            System.out.println("not equal");
        }
        
        input.close();
    }
}
