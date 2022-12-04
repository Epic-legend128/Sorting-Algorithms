public class Main {
    
    public static int[][] partition(int[] array, int p, int r) {
        int q = p;
        for (int j = p; j<r; j++) {
            if (array[j] <= array[r]) {
                int temp = array[q];
                array[q] = array[j];
                array[j] = temp;
                q++;
            }
        }
        int temp2 = array[q];
        array[q] = array[r];
        array[r] = temp2;
        int[][] result = new int[][] {array, {q}};
        return result;
    }
    
    public static int[] quicksort(int[] array, int p, int r) {
        if (p < r) {
            int[][] temp = partition(array, p, r);
            int q = temp[1][0];
            array = temp[0];
            array = quicksort(array, p, q-1);
            array = quicksort(array, q+1, r);
        }
        return array;
    }

    public static void main(String[] args) {
        int[] array = new int[] {5, 2, 8, 12, 8, 2, 6, 1, -34, 100, -325, 930, 0, 7};
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" ");
        }
        System.out.println("");
        array = quicksort(array, 0, array.length-1);
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" "); 
        }
        System.out.println("");
    }
}
