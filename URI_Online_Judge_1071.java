import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		 int x,y,z,sum=0;
		 
		 Scanner in = new Scanner (System.in);
		 
		 x = in.nextInt();
		 y = in.nextInt();
		 
		 if(x>y){
		    	z = x;
		    	x = y;
		    	y = z;
		    	
			}
			
			if(x==y){
				System.out.println("0");
			}
			else{
				if(x%2==0){
				x++;
				
					for(int i=x; i<y; i=i+2){
					sum = sum + i;
					}
			}
			
				else{
					x = x +2;
					for(int i=x; i<y; i=i+2){
					sum = sum + i;
				
					}
				}
				
				System.out.println(sum);
	}			

	}
}
