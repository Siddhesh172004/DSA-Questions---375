//Maximum and Minimum Element in an Array

import java.util.*;

public class P12 {

	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int n, temp;

		int[] array = new int[10];
		System.out.println("Enter size of array : ");
		n = s.nextInt();

		// int arrary[];
		System.out.println("Enter element : ");

		for (int i = 0; i < n; i++) {

			temp = s.nextInt();
			array[i] = temp;
		}

		int small;
		small = array[0];

		for (int x = 0; x < n - 1; x++) {

			if (array[x] > array[x + 1]) {
				small = array[x + 1];
			}

		}

		int largest;
		largest = array[0];
		for (int j = 0; j < n - 1; j++) {
			if (array[j] < array[j + 1]) {
				largest = array[j+1];
			}
		}

		System.out.println("Smallest amoung the aaray is : " + small);
		System.out.println("Largest amoung the aaray is : " + largest);
	}
}
