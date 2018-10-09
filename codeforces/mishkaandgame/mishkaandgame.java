→ Source Copy
import java.util.*;
public class game {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int mScore = 0;
		int cScore = 0;
		int rounds = in.nextInt();
		
		for(int i = 0; i < rounds; i++){
			int m = in.nextInt();
			int c = in.nextInt();
			
			if(m > c){
				mScore++;
			}
			else if(c > m){
				cScore++;
			}
		}
		
		if(mScore > cScore){
			System.out.println("Mishka");
		}
		else if(cScore > mScore){
			System.out.println("Chris");
		}
		else{
			System.out.println("Friendship is magic!^^");
		}
	}
}
