import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		double x = inScanner.nextDouble();
		System.out.println(String.format((String.valueOf(x).startsWith("-") ? "" : "+") + "%.4E", x));
	}
}
