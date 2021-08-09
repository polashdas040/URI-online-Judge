import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {

		int v, rem;
		String toHex = "";
		char hex[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

		v = inScanner.nextInt();

		while (v > 0) {
			rem = v % 16;
			toHex = hex[rem] + toHex;
			v = v / 16;
		}
		System.out.println(toHex);
	}
}
