public class SevenB {

    public static void checkEvenNumber(int number) {
        if (number % 2 != 0) {
            throw new IllegalArgumentException("Odd numbers are not allowed.");
        } else {
            System.out.println("Valid input: number is even.");
        }
    }

    public static void main(String[] args) {
        int[] testValues = {4, 7}; // one even, one odd

        for (int value : testValues) {
            try {
                checkEvenNumber(value);
            } catch (IllegalArgumentException e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
