import java.util.ArrayList;

public class SevenC {
    public static void main(String[] args) {
        ArrayList<String> names = new ArrayList<>();

        // Add names to the list
        names.add("Raahini");
        names.add("Raja");
        names.add("Siri");
        names.add("Mano");
        names.add("Manoj");
        names.add("Jain");
        names.add("Tanuska");
        names.add("Kumar");

        // Print original list
        System.out.println("Original list: " + names);

        // Remove the third element (index 2)
        names.remove(2);

        // Insert "Srimomi" at the 4th position (index 3)
        names.add(3, "Srimomi");

        // Print updated list
        System.out.println("Updated list: " + names);
    }
}
