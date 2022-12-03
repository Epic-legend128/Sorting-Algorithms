using System;

namespace BubbleSort {
    public class  Program {
        public static void Bubble(ref int[] array) {            
            bool changed = true;
            for (int i = array.Length-1; changed; i--) {
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
        }

        static void Main(string[] args) {
            int[] array = new int[] {4, 2, 7, 7, 5, 27, 0, 2, 10, -14, 546, 2};
            for (int i = 0; i<array.Length; i++) {
            	Console.Write(array[i]+" ");
            }
            Console.WriteLine("");
            Bubble(ref array); // pass by reference to work
            for (int i = 0; i<array.Length; i++) {
                Console.Write(array[i]+" ");
            }
        }
    }
}
