public class Main {
    public static int[] insertion(int[] array) {
        for (int i = 1; i<array.length; i++) {
            int value = array[i];
            for (int j = i-1; j>=0 && value<array[j]; j--) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
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
        array = insertion(array);
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" "); 
        }
        System.out.println("");
    }
}
