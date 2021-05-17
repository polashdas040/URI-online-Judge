import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int N, highest = 0, position = 0;

		Scanner in = new Scanner(System.in);

		for (int i = 0; i < 100; i++) {
			N = in.nextInt();
			if (N > highest) {
				highest = N;
				position = i + 1;
			}

		}

		System.out.println(highest + "\n" + position);

	}
}