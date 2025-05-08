import java.util.Arrays;

public class KLargestElements {
    public static void main(String[] args) {
        int[] array = {3, 1, 5, 12, 2, 11};
        int k = 3;

        int[] result = findKLargestElements(array, k);

        System.out.println("The " + k + " largest elements are:");
        for (int num : result) {
            System.out.print(num + " ");
        }
    }

    public static int[] findKLargestElements(int[] array, int k) {
        Arrays.sort(array);
        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = array[array.length - 1 - i];
        }
        return result;
    }
}
