import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int n, m;
		String string;

		n = inScanner.nextInt();
		int i =  0;
		while (i < n) {
			string = inScanner.next();
			m = inScanner.nextInt();
			if (string.equals("Thor")) {
				System.out.println("Y");
			} else {
				System.out.println("N");
			}
			i++;
		}

	}
}
