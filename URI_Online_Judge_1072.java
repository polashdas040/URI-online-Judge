import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		int N,X,in=0,out=0;
		 
		 Scanner input = new Scanner (System.in);
		 
		 N = input.nextInt();
		 
		 for(int i=0; i<N; i++){
			   	
			 X = input.nextInt();
		   	    
		   		    if(X>=10 && X<=20){
		   		    	in++;
					   }else{
					   	out++;
					   }
		   }
		 System.out.print(in+" in\n"+out+" out\n");

	}
}
