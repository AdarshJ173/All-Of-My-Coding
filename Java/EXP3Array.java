public class EXP3Array {
    public static void main(String[] args) {
        // Initialize the 2D boolean array
        boolean[][] array = {
            {true, false, true},
            {false, true, false}
        };

        // Print the array contents
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                // Print 't' for true and 'f' for false
                System.out.print(array[i][j] ? "t " : "f ");
            }
            System.out.println(); // New line after each row
        }
    }
}
