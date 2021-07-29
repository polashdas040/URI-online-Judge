import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main{

	static InputStreamReader r = new InputStreamReader(System.in);
	static BufferedReader b = new BufferedReader(r);
	static PrintWriter out = new PrintWriter(System.out);

	public static void main(String[] args) throws IOException {
		String l;
		while (!(l = b.readLine()).equals("0 0")) {
			String[] p = l.split("\\s"); //splits the string based on whitespace  
			String D = p[0];
			String N = p[1];
			String r = N.replace(D, "");
			r = r.replaceFirst("0*", "");
			if(r.length()>0) {
				System.out.println(r);
			}else {
				System.out.println(0);
			}
		}
		out.close();
	}
}
