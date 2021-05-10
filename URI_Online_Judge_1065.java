import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		
		int a, count = 0;
		Scanner in = new Scanner (System.in);
		
		for(int i = 0; i < 5; i++) {
			a = in.nextInt();
			
			if(a%2==0) {
				count++;
			}
		}
		
		System.out.println(count+" valores pares");

	}

}

