import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		int X;
		Scanner input = new Scanner(System.in);
			
		X = input.nextInt();
		
		if(1 <= X && X <= 1000){
			
			for(int i = 1; i <= X ; i = i+2){
				
					System.out.println(i);
				}
			}
	}

}