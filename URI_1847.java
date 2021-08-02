import java.util.Scanner;

public class Main {

	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {

		int a, b, c;
		a = inScanner.nextInt();
		b = inScanner.nextInt();
		c = inScanner.nextInt();

		if (a > b && b <= c)
			System.out.println(":)");
		else if (a < b && b >= c)
			System.out.println(":(");
		else if (a < b && b < c && (c - b) < (b - a))
			System.out.println(":(");
		else if (a < b && b < c && (c - b) >= (b - a))
			System.out.println(":)");
		else if (a > b && b > c && (b - c) < (a - b))
			System.out.println(":)");
		else if (a > b && b > c && (b - c) >= (a - b))
			System.out.println(":(");
		else if (a == b) {
			if (b < c)
				System.out.println(":)");
			else
				System.out.println(":(");
		}
	}
}
