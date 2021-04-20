import java.util.Scanner;
public class Main {
  
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		double A,B,C;
		
		A = input.nextDouble();
		B = input.nextDouble();
		C = input.nextDouble();
		
		Calculate calculate = new Calculate(A,B,C);

	}

}

 class Calculate{
 
	Calculate(double A, double B, double C){
		
		 double per,area;
		
		if(A<(B+C) && B<(A+C) && C<(A+C)){
			per =A+B+C;
			System.out.printf("Perimetro = %.1f\n",per);
		}
		else{
			area = (1/2.0)*(A+B)*C;
			System.out.printf("Area = %.1f\n",area);
		}
	}
	
}
