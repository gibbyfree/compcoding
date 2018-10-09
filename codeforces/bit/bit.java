import java.util.Scanner;

public class Bit {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		int x = 0;
		int j = in.nextInt();
		in.nextLine();
		
		for(int i = 0; i < j; i++){
			String statement = in.nextLine();
			
			if(statement.equals("++X") || statement.equals("X++")){
				x++;
			}
			else if(statement.equals("--X") || statement.equals("X--")){
				x--;
			}
			
		}
		
		System.out.println(x);
	}
}
