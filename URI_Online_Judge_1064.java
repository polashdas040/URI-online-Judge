import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		int count=0;
		double a,s=0.0,average;
		
		Scanner input = new Scanner (System.in);
		
		for(int i = 0; i<6; i++) {
			a = input.nextDouble();
			
			if(a>=0) {
				count++;
				s += a;
			}
		}
		
		average = s/count;
		
		System.out.printf("%d valores positivos\n",count);
		System.out.printf("%.1f\n",average);
	}

}
