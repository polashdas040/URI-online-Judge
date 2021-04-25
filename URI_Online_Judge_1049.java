import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner (System.in);
		String a,b,c;
		
		a = input.nextLine();
		b = input.nextLine();
		c = input.nextLine();

		Display display = new Display(a,b,c);

	}

}

class Display{
	
	String result = "";

	public Display(String a, String b,String c) {
		if(a.equals("vertebrado") && b.equals("ave") && c.equals("carnivoro")) {
			result += "aguia";
		}
		if(a.equals("vertebrado") && b.equals("ave") && c.equals("onivoro")) {
			result += "pomba";
		}
		if(a.equals("vertebrado") && b.equals("mamifero") && c.equals("onivoro")) {
			result += "homem";
		}
		if(a.equals("vertebrado") && b.equals("mamifero") && c.equals("herbivoro")) {
			result = "vaca";
		}
		if(a.equals("invertebrado") && b.equals("inseto")&& c.equals("hematofago")) {
			result += "pulga";
		}
		if(a.equals("invertebrado") && b.equals("inseto") && c.equals("herbivoro")) {
			result += "lagarta";
		}
		if(a.equals("invertebrado") && b.equals("anelideo") && c.equals("hematofago")) {
			result += "sanguessuga";
		}
		if(a.equals("invertebrado") && b.equals("anelideo") && c.equals("onivoro")) {
			result += "minhoca";
		}
		
		System.out.println(result);
	}
	
}