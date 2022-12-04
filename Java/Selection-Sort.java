public class Main {
    public static int[] selection(int[] array) {
        for (int i = array.length-1; i>0; i--) {
            int mx = 0;
            for (int j = 0; j<i; j++) {
                if (array[j] > array[mx]) {
                    mx = j;
                }
            }
            int temp = array[mx];
            array[mx] = array[i];
            array[i] = temp;
        }
        return array;
    }

    public static void main(String[] args) {
        int[] array = new int[] {5, 2, 8, 12, 8, 2, 6, 1, -34, 100, -325, 930, 0, 7};
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" ");
        }
        System.out.println("");
        array = selection(array);
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" "); 
        }
        System.out.println("");
    }
}
