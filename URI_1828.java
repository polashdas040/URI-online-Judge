import java.util.Scanner;

public class Main {

	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {

		int T, n = 1;
		String string1, string2;

		T = inScanner.nextInt();
		while (n <= T) {
			string1 = inScanner.next();
			string2 = inScanner.next();
			if (string1.equals(string2)) {
				System.out.println("Caso #" + n + ": De novo!");
			} else {
				if (string1.equals("pedra") && (string2.equals("lagarto") || string2.equals("tesoura"))) {
					System.out.println("Caso #" + n + ": Bazinga!");
				} else if (string1.equals("papel") && (string2.equals("pedra") || string2.equals("Spock"))) {
					System.out.println("Caso #" + n + ": Bazinga!");
				} else if (string1.equals("tesoura") && (string2.equals("papel") || string2.equals("lagarto"))) {
					System.out.println("Caso #" + n + ": Bazinga!");
				} else if (string1.equals("lagarto") && (string2.equals("Spock") || string2.equals("papel"))) {
					System.out.println("Caso #" + n + ": Bazinga!");
				} else if (string1.equals("Spock") && (string2.equals("tesoura") || string2.equals("pedra"))) {
					System.out.println("Caso #" + n + ": Bazinga!");
				} else {
					System.out.println("Caso #" + n + ": Raj trapaceou!");
				}
			}

			n++;
		}
	}
}
