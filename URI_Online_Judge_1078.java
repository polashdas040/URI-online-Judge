import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int N, Multiplication;

		Scanner input = new Scanner(System.in);

		N = input.nextInt();
		for (int i = 1; i <= 10; i++) {
			Multiplication = i * N;
			System.out.println(i + " x " + N + " = " + Multiplication);

		}
	}

}
