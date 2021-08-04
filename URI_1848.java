import java.util.Scanner;

public class Main {

	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {

		String string;
		int a = 0;

		while (inScanner.hasNext()) {
			string = inScanner.nextLine();

			if (string.equals("--*"))
				a += 1;
			else if (string.equals("-*-"))
				a += 2;
			else if (string.equals("-**"))
				a += 3;
			else if (string.equals("*--"))
				a += 4;
			else if (string.equals("*-*"))
				a += 5;
			else if (string.equals("**-"))
				a += 6;
			else if (string.equals("***"))
				a += 7;
			if (string.equals("caw caw")) {
				System.out.println(a);
				a = 0;
			}
		}
	}
}
