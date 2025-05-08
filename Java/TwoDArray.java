public class TwoDArray {
  public static void main(String[] args) {
    int m = 5; // Define the size of the array
    boolean[][] A = new boolean[m][m];

    // Fill the array based on the prime condition
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
        // Convert 1-based indices to 0-based indices
        int row = i + 1;
        int col = j + 1;
        A[i][j] = !(isPrime(row) && isPrime(col));
      }
    }

    // Print the array
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
        System.out.print(A[i][j] + " ");
      }
      System.out.println();
    }
  }

  public static boolean isPrime(int num) {
    if (num <= 1) {
      return false;
    }
    for (int i = 2; i <= Math.sqrt(num); i++) {
      if (num % i == 0) {
        return false;
      }
    }
    return true;
  }
}
