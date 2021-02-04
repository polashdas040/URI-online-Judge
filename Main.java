/*
URI Online Judge | 1035
 
Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).

Input
Four integer numbers A, B, C and D.

Output
Show the corresponding message after the validation of the values​​.

*/
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
