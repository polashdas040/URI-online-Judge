
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner input = new  Scanner(System.in);
        
        int A,B,C,D,sum1,sum2;
        
        A = input.nextInt();
        B = input.nextInt();
        C = input.nextInt();
        D = input.nextInt();
        
        sum1 = C + D;
        sum2 = A + B;
        
        if(B > C && D > A && sum1 > sum2){
            if(C >=0 && D >=0 ){
                if(A %2 == 0){
                    System.out.println("Valores aceitos");
                }
            }
        }else{
            System.out.println("Valores nao aceitos");
        }
               
    }
} 