import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		 int d1,d2,h1,h2,m1,m2,s1,s2,W,X,Y,Z,day1,day2,cal;
		 String s;
		 Scanner input = new Scanner (System.in);
		 
		 s = input.next();
		 d1 = input.nextInt();
		 
		 h1 = input.nextInt();
		 s = input.next();
		 
		 m1 = input.nextInt();
		 s = input.next();
		 
		 s1 = input.nextInt();
		 
		 
		 s = input.next();
		 d2 = input.nextInt();
		 
		 h2 = input.nextInt();
		 s = input.next();
		 
		 m2 = input.nextInt();
		 s = input.next();
		 
		 s2 = input.nextInt();
		 
		 Z = s2 - s1;
		 Y = m2 - m1;
		 X = h2 - h1;
		 W = d2 - d1;
		    
		    if(Z<0){
		    	Z+=60;
		    	Y--;
			}
			if(Y<0){
		    	Y+=60;
		    	X--;
			}
			if(X<0){
		    	X+=24;
		    	W--;
			}
		    
			
			System.out.print(W+" dia(s)\n"+X+" hora(s)\n"+Y+" minuto(s)\n"+Z+" segundo(s)\n");
	
	}
	
}