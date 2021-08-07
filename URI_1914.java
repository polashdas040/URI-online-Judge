import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int t, n, m;
		String string1, string2, string3, string4;

		t = inScanner.nextInt();

		for (int i = 0; i < t; i++) {
			string1 = inScanner.next();
			string2 = inScanner.next();
			string3 = inScanner.next();
			string4 = inScanner.next();
			n = inScanner.nextInt();
			m = inScanner.nextInt();

			if ((n + m) % 2 == 0 && string2.equals("PAR") || (n + m) % 2 != 0 && string2.equals("IMPAR")) {
				System.out.println(string1);
			} else {
				System.out.println(string3);
			}
		}

	}
}
