import java.util.Scanner;
import java.io.*;
public class pineapple {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		long firstBark = in.nextLong();
		long barksFirst = in.nextLong();
		long eats = in.nextLong();
		boolean willBark = false;
		
		if(((eats - firstBark) % barksFirst == 0) 
				|| (eats == firstBark) 
				|| (eats - firstBark - 1) % (barksFirst) == 0){
			willBark = true;
		}
		
		if(eats < firstBark || eats == firstBark + 1){
			willBark = false;
		}
		
		if(willBark){
			System.out.println("YES");
		}
		else{
			System.out.println("NO");
		}
	}
}
