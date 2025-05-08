/**
 * ExceptionExample - Demonstrates exception handling using try-catch blocks
 */
public class sevenA {
  public static void main(String[] args) {
      System.out.println("Program started...");
      
      try {
          // Attempting division by zero which will throw an ArithmeticException
          int numerator = 10;
          int divisor = 0;
          int result = numerator / divisor;
          
          // This line will not execute if an exception occurs
          System.out.println("Result: " + result);
      } 
      catch (ArithmeticException e) {
          // Catching the ArithmeticException and displaying a user-friendly message
          System.out.println("Cannot divide by zero.");
      }
      
      // Program continues execution after handling the exception
      System.out.println("Program has continued running after handling the exception.");
  }
}
