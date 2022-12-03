using System;

namespace SelectionSort {
    public class Program {

        public static void Selection(ref int[] array) {
            for (int i = array.Length; i>0; i--) {
                int mx = 0;
                for (int j = 0; j<i; j++) {
                    if (array[mx] < array[j]) {
                        mx = j;
                    }
                }
                int temp = array[mx];
                array[mx] = array[i-1];
                array[i-1] = temp;
            }
        }


        static void Main(string[] args) {
            int[] array = new int[] {4, 2, 7, 7, 5, 27, 0, 2, 10, -14, 546, 2};
            for (int i = 0; i<array.Length; i++) {
            	Console.Write(array[i]+" ");
            }
            Console.WriteLine("");
            Selection(ref array); // pass by reference to work
            for (int i = 0; i<array.Length; i++) {
                Console.Write(array[i]+" ");
            }
        }
    }
}
