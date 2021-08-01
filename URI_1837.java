import java.util.Scanner;

public class Main {

	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {

		int a, b, q = 0, r = 0, d = 0, c = 0;
		a = inScanner.nextInt();
		b = inScanner.nextInt();

		if (a > 0) {
			q = a / b;
			r = a % b;
		} else {
			c = b;
			if (b < 0)
				c = -b;
			for (r = 0; r < c; r++) {
				d = a - r;
				if (d % b == 0)
					break;
			}
			q = d / b;
		}

		System.out.println(q + " " + r);
	}
}
