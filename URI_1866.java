import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int n, s;
		
		n = inScanner.nextInt();
		for(int i = 0; i<n; i++) {
			s = inScanner.nextInt();
			if(s%2 == 0) {
				System.out.println(0);
			}else {
				System.out.println(1);
			}
		}

	}
}
