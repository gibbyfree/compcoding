import java.util.*;
public class toolong {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		
		for(int i = 0; i < n; i++){
		String line = in.next();
		
		if(line.length() <= 10){
			System.out.println(line);
		}
		else{
			String first = line.substring(0, 1);
			int number = line.length() - 2;
			String digit = Integer.toString(number);
			String last = line.substring(line.length() - 1);
			String ans = first + digit + last;
			System.out.println(ans);
			}
		}
	}
