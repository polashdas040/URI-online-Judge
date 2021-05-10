import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		int a, even=0,odd=0,positive=0,negative=0;
		
		Scanner in = new Scanner (System.in);
			
		for (int i = 0; i<5; i++){
			a = in.nextInt();
				
			if(a%2==0){
				even++;
			}else{
				odd++;
			}
			if(a>0){
				positive++;
			}else{
				if(a != 0){
					negative++;
				}
				}
			}
		
		System.out.println(even+" valor(es) par(es)");
		System.out.println(odd+" valor(es) impar(es)");
		System.out.println(positive+" valor(es) positivo(s)");
		System.out.println(negative+" valor(es) negativo(s)");

	}

}
