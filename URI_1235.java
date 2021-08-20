import java.util.Scanner;

public class Main {
	public static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		String string;
		int N = inScanner.nextInt();

		for (int i = 0; i < N; i++) {
			string = inScanner.nextLine();

			while (string.isEmpty()) {
				string = inScanner.nextLine();
			}
			StringBuilder sb1 = new StringBuilder(string.substring(0, string.length() / 2));
			StringBuilder sb2 = new StringBuilder(string.substring(string.length() / 2, string.length()));
			sb1.reverse();
			sb2.reverse();

			System.out.println(sb1.toString()+sb2.toString());
		}
	}

}
