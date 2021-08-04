import java.util.Scanner;

public class Main {

	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {

		int N, T, a = 0, hit = 1;

		N = inScanner.nextInt();

		for (int i = 1; i <= N; i++) {
			T = inScanner.nextInt();
			if (i == 1) {
				a = T;
				hit = 1;
			} else if (a > T) {
				hit = i;
				a = T;
			}
		}

		System.out.println(hit);
	}
}
