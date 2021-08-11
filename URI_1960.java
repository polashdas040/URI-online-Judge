import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int N = inScanner.nextInt();
		String string = "";

		while (N > 0) {

			if (N >= 1000) {
				N -= 1000;
				string += "M";
			} else if (N >= 900) {
				N -= 900;
				string += "CM";
			} else if (N >= 500) {
				N -= 500;
				string += "D";
			} else if (N >= 400) {
				N -= 400;
				string += "CD";
			} else if (N >= 100) {
				N -= 100;
				string += "C";
			} else if (N >= 90) {
				N -= 90;
				string += "XC";
			} else if (N >= 50) {
				N -= 50;
				string += "L";
			} else if (N >= 40) {
				N -= 40;
				string += "XL";
			} else if (N >= 10) {
				N -= 10;
				string += "X";
			} else if (N >= 9) {
				N -= 9;
				string += "IX";
			} else if (N >= 5) {
				N -= 5;
				string += "V";
			} else if (N >= 4) {
				N -= 4;
				string += "IV";
			} else if (N >= 1) {
				N -= 1;
				string += "I";
			}
		}

		System.out.println(string);
	}
}
