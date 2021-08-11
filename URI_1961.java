import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int P = inScanner.nextInt();
		int N = inScanner.nextInt();
		int[] T = new int[N];
		int c;
		int win = 0;

		for (int i = 0; i < N; i++) {
			T[i] = inScanner.nextInt();
		}

		for (int i = 0; i < N - 1; i++) {
			int x = T[i] - T[i + 1];
			c = x;
			if (x < 0) {
				c = -x;
			}

			if (c > P) {
				win = 1;
			}
		}
		if (win==1) {
			System.out.println("GAME OVER");
		} else {
			System.out.println("YOU WIN");
		}
	}
}
