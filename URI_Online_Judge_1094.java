import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int N, C = 0, R = 0, S = 0, Amount, Total;
		double c, r, s;
		char ch;

		Scanner in = new Scanner(System.in);

		N = in.nextInt();

		for (int i = 0; i < N; i++) {
			Amount = in.nextInt();
			ch = in.next().charAt(0);
			if (ch == 'C') {
				C += Amount;
			}
			if (ch == 'R') {
				R += Amount;
			}
			if (ch == 'S') {
				S += Amount;
			}
		}

		Total = C + R + S;
		c = (C * 100.0) / Total;
		r = (R * 100.0) / Total;
		s = (S * 100.0) / Total;

		System.out.println("Total: " + Total + " cobaias");
		System.out.println("Total de coelhos: " + C);
		System.out.println("Total de ratos: " + R);
		System.out.println("Total de sapos: " + S);
		System.out.printf("Percentual de coelhos: %.2f %%\n", c);
		System.out.printf("Percentual de ratos: %.2f %%\n", r);
		System.out.printf("Percentual de sapos: %.2f %%\n", s);

	}
}