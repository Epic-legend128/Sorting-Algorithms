public class Main {
    
    public static int[] merge(int[] array, int p, int q, int r) {
        int[] lowHalf = new int[q-p+1];
        int[] highHalf = new int[r-q];

        for (int i = p; i<=q; i++) {
            lowHalf[i-p] = array[i];
        }

        for (int j = q+1; j<=r; j++) {
            highHalf[j-q-1] = array[j];
        }

        int i=0, j=0, k=p;
        while (i<lowHalf.length && j<highHalf.length) {
            if (lowHalf[i] < highHalf[j]) {
                array[k] = lowHalf[i++];
            }
            else {
                array[k] = highHalf[j++];
            }
            k++;
        }

        for ( ; i<lowHalf.length; i++) {
            array[k++] = lowHalf[i];
        }

        for ( ; j<highHalf.length; j++) {
            array[k++] = highHalf[j];
        }
        return array;
    }
    
    public static int[] mergesort(int[] array, int p, int r) {
        if (p < r) {
            int q = (p+r)/2;
            array = mergesort(array, p, q);
            array = mergesort(array, q+1, r);
            array = merge(array, p, q, r);
        }
        return array;
    }

    public static void main(String[] args) {
        int[] array = new int[] {5, 2, 8, 12, 8, 2, 6, 1, -34, 100, -325, 930, 0, 7};
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" ");
        }
        System.out.println("");
        array = mergesort(array, 0, array.length-1);
        for (int i = 0; i<array.length; i++) {
            System.out.print(array[i]+" "); 
        }
        System.out.println("");
    }
}
