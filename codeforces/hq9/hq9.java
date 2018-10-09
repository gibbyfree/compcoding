import java.util.*;
public class hq9 {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();
		char[] line = str.toCharArray();
		boolean hasOutput = false;
		
		for(int i = 0; i < line.length; i++){
			if(line[i] == 'H'){
				hasOutput = true;
			}
			else if(line[i] == 'Q'){
				hasOutput = true;
			}
			else if(line[i] == '9'){
				hasOutput = true;
			}
		}
		
		if(hasOutput){
			System.out.println("YES");
		}
		else{
			System.out.println("NO");
		}
	}
}
