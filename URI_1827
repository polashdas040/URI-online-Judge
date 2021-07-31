import java.util.Scanner;

public class Main {

	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int[][] array = new int[102][102];
		int N = 0;
		while (inScanner.hasNextInt()) {

			N = inScanner.nextInt();

			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {

					if (N / 2 == i && N / 2 == j) {
						array[i][j] = 4;
					} else if (i >= N / 3 && j >= N / 3 && (N - i) > N / 3 && (N - j) > N / 3) {
						array[i][j] = 1;
					} else if (i + j == N - 1) {
						array[i][j] = 3;
					} else if (i == j) {
						array[i][j] = 2;
					} else {
						array[i][j] = 0;
					}
				}
			}
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					System.out.print(array[i][j]);
				}
				System.out.println();
			}
			System.out.println();
		}
	}
}
