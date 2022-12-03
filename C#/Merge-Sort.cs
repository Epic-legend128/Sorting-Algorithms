using System;

namespace MergeSort {
    public class Program {

        public static void Merge(ref int[] array, int p, int q, int r) {
            int[] LowHalf = new int[q-p+1];
            int[] HighHalf = new int[r-q];

            int i, j, k=p;
            for (i=0; k<=q; k++) {
                LowHalf[k-p] = array[k];
            }

            for (j=0; k<=r; k++) {
                HighHalf[k-q-1] = array[k];
            }

            k = p; i = 0; j = 0;
            while (i < LowHalf.Length && j < HighHalf.Length) {
                if (LowHalf[i] < HighHalf[j]) {
                    array[k] = LowHalf[i++];
                }
                else {
                    array[k] = HighHalf[j++];
                }
                k++;
            }

            for ( ; i<LowHalf.Length; i++) {
                array[k++] = LowHalf[i];
            }

            for ( ; j<HighHalf.Length; j++) {
                array[k++] = HighHalf[j];
            }
        }
        
        public static void MergeSort(ref int[] array, int p, int r) {
            if (p<r) {
                int mid = (int) ((p+r)/2);
                MergeSort(ref array, p, mid);
                MergeSort(ref array, mid+1, r);
                Merge(ref array, p, mid, r);
            }
        }
        
        static void Main(string[] args) {
            int[] array = new int[] {4, 2, 7, 7, 5, 27, 0, 2, 10, -14, 546, 2};
            for (int i = 0; i<array.Length; i++) {
            	Console.Write(array[i]+" ");
            }
            Console.WriteLine(" <- Before");
            MergeSort(ref array, 0, array.Length-1); // pass by reference to work
            for (int i = 0; i<array.Length; i++) {
                Console.Write(array[i]+" ");
            }
            Console.WriteLine(" <- After");
        }
    }
}
