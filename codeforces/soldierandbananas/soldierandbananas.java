import java.util.Scanner;
public class Soldier {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		int bananaInitCost = in.nextInt();
		int budget = in.nextInt();
		int desiredBananas = in.nextInt();
		
		int totalCost = 0;
		
		for(int i = 1; i < desiredBananas + 1; i++){
			totalCost += i * bananaInitCost;
		}
		
		if(budget >= totalCost){
			System.out.print("0");
		}
		else{
			int loan = totalCost - budget;
			System.out.print(loan);
		}
	}
}
