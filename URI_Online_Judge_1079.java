import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int N;
		double a, b, c, avg;

		Scanner in = new Scanner(System.in);

		N = in.nextInt();
		for (int i = 0; i < N; i++) {
			a = in.nextDouble();
			b = in.nextDouble();
			c = in.nextDouble();

			avg = (a * 2 + b * 3 + c * 5) / 10;

			System.out.printf("%.1f\n", avg);

		}
	}

}
