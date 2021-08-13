import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int N;

		N = inScanner.nextInt();

		for (int i = 0; i < N; i++) {
			int leds = 0;
			String string = inScanner.next();

			for (int j = 0; j < string.length(); j++) {
				if (string.charAt(j) == '0' || string.charAt(j) == '6' || string.charAt(j) == '9')
					leds += 6;
				else if (string.charAt(j) == '1')
					leds += 2;
				else if (string.charAt(j) == '2' || string.charAt(j) == '3' || string.charAt(j) == '5')
					leds += 5;
				else if (string.charAt(j) == '4')
					leds += 4;
				else if (string.charAt(j) == '7')
					leds += 3;
				else
					leds += 7;
			}
			System.out.println(leds + " leds");
		}
	}
}
