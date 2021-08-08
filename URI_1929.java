import java.util.Arrays;
import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int[] array = new int[4];
		for (int i = 0; i < 4; i++) {
			array[i] = inScanner.nextInt();
		}
		Arrays.sort(array);

		if (array[0] + array[1] > array[2]) {
			System.out.println("S");
		} else if (array[0] + array[2] > array[3]) {
			System.out.println("S");
		} else if (array[1] + array[2] > array[3]) {
			System.out.println("S");
		} else {
			System.out.println("N");
		}
	}
}
