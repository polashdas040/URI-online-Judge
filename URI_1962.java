import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int N = inScanner.nextInt();
		for(int i=0; i<N; i++) {
			int T = inScanner.nextInt();
			if(T>=2015) System.out.println(T-2014+" A.C.");
			else System.out.println(2015-T+" D.C.");
		}
	}
}
