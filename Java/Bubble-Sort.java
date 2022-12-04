public class Main {
    public static int[] bubble(int[] array) {
        boolean changed = true;
        for (int i = array.length-1; changed; i--) {
            changed = false;
            for (int j = 0; j<i; j++) {
                if (array[j] > array[j+1]) {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    changed = true;
                }
            }
        }
        return array;
    }

    public static void main(String[] args) {
        int[] array = new int[] {5, 2, 8, 12, 8, 2, 6, 1, -34, 100, -325, 930, 0, 7};
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" ");
        }
        System.out.println("");
        array = bubble(array);
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" ");
        }
        System.out.println("");
    }
}
