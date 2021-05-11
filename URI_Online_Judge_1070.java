import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		int X,odd;
		Scanner input = new Scanner(System.in);
			
		X = input.nextInt();
		
		for(int i = X; i < X+12 ; i = i+2){
			
			if(X%2==0){
				
				odd = i + 1;
				System.out.println(odd);
				
			}else{
				
				odd = i;
				System.out.println(odd);
			}
		}
	}
}