using System;

namespace QuickSort {
    public class Program {
        public static int Partition(ref int[] array, int p, int r) {
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
            return q;
        }
        
        public static void Quick(ref int[] array, int p, int r) {
            if (p < r) {
                int q = Partition(ref array, p, r);
                Quick(ref array, p, q-1);
                Quick(ref array, q+1, r);
            }
        }
        
        static void Main(string[] args) {
            int[] array = new int[] {4, 2, 7, 7, 5, 27, 0, 2, 10, -14, 546, 2};
            for (int i = 0; i<array.Length; i++) {
            	Console.Write(array[i]+" ");
            }
            Console.WriteLine(" <- Before");
            Quick(ref array, 0, array.Length-1); // pass by reference to work
            for (int i = 0; i<array.Length; i++) {
                Console.Write(array[i]+" ");
            }
            Console.WriteLine(" <- After");
        }
    }
}
