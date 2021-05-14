import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		 int N,square;
		 
		 Scanner input = new Scanner (System.in);
		 
		 N = input.nextInt();
		 
			for(int i=2; i<=N; i=i+2){
    			
		    	if(N%2==0){
		    	 square = i*i;
		    	 System.out.println(i+"^2 = "+square);
		    		 
					}
				}
	}
}
