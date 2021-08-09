import java.util.Scanner;

public class Main {
	static Scanner inScanner = new Scanner(System.in);
	public static void main(String[] args) {

		int a, b, l;
		a = inScanner.nextInt();
		b = inScanner.nextInt();
		
		if(a==b) l = a;
		else if(a>b) l = a;
		else l = b;
		
		System.out.println(l);
	}
}
