import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int n;
		String string = "LIFE IS NOT A PROBLEM TO BE SOLVED";
		n = inScanner.nextInt();
		System.out.println(string.substring(0, n));
	}
}
