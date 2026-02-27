import java.util.*;

public class Solution {
    /**
     * Removes duplicates from the given array while preserving insertion order.
     *
     * @param arr the input array that may contain duplicate values
     * @return a list with duplicates removed, keeping first occurrences
     */
    public static List<Integer> removeDuplicates(int[] arr) {
        Set<Integer> seen = new LinkedHashSet<>();
        for (int item : arr) {
            seen.add(item);
        }
        return new ArrayList<>(seen);
    }

    public static void main(String[] args) {
        int[] sample = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
        System.out.println("Original array: " + Arrays.toString(sample));
        System.out.println("After removing duplicates: " + removeDuplicates(sample));
    }
}
