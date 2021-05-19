public class Main {

	public static void main(String[] args) {

		float a = 1.0f;

		for (float i = 0; i < 2.2; i += 0.2) {
			for (float j = 1; j <= 3; j++, a++) {
				if (i == 0.0) {
					System.out.printf("I=%.0f J=%.0f\n", i, a);
				} else if (i == 1.0) {
					System.out.printf("I=%.0f J=%.0f\n", i, a);
				} else if (i >= 2.0) {
					System.out.printf("I=%.0f J=%.0f\n", i, a);
				} else {
					System.out.printf("I=%.1f J=%.1f\n", i, a);
				}
			}
			a = a - 2.8f;

		}
	}

}
