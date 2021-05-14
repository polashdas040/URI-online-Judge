import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		 int N,X;
		 
		 Scanner input = new Scanner (System.in);
		 
		 N = input.nextInt();
		 
		 for(int i=0; i<N; i++){
		   		
			 X = input.nextInt();
			   	
		   		if(X==0){
		   			
		   			System.out.println("NULL");
		   				
					}else if(X%2==0){
					   		if(X<0){
					   		 System.out.println("EVEN NEGATIVE");	
							}
							else{
							 System.out.println("EVEN POSITIVE");
							}
					    }else{
							if(X<0){
						     System.out.println("ODD NEGATIVE");
					  	    }else{
					  	    	System.out.println("ODD POSITIVE");
					        }
						}
				   		
				   }	
	}
}
