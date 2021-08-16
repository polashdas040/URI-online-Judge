import java.util.Scanner;

public class Main {
	public static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {

		while (inScanner.hasNextLine()) {
			StringBuffer stringBuffer = new StringBuffer(inScanner.nextLine());
			boolean a = false;
			for (int i = 0; i < stringBuffer.length(); i++) {
				char c = stringBuffer.charAt(i);
				if (Character.isAlphabetic(c)) {
					if (a) {
						stringBuffer.setCharAt(i, Character.toLowerCase(c));
					} else {
						stringBuffer.setCharAt(i, Character.toUpperCase(c));
					}
					a = !a;
				}
			}
			System.out.println(stringBuffer);
		}
	}
}
