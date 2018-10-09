import java.util.ArrayList;
import java.util.Scanner;
public class Guy {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int levelUpperLimit = in.nextInt();
		boolean guy = true;
		
		ArrayList<Integer> levels = new ArrayList<Integer>();
		for(int fill = 1; fill < levelUpperLimit; fill++){
			levels.add(fill);
		}
		
		levels.add(levelUpperLimit);
		
		int x = in.nextInt();
		ArrayList<Integer> xLevels = new ArrayList<Integer>();
		for(int fillX = 0; fillX < x; fillX++){
			int xLevel = in.nextInt();
			xLevels.add(xLevel);
		}
		
		int y = in.nextInt();
		ArrayList<Integer> yLevels = new ArrayList<Integer>();
		for(int fillY = 0; fillY < y; fillY++){
			int yLevel = in.nextInt();
			yLevels.add(yLevel);
		}
		
		for(int i = 0; i < levels.size(); i++){
			boolean inX = false;
			boolean inY = false;
			int find = levels.get(i);
			for(int j = 0; j < xLevels.size(); j++){
				if(find == xLevels.get(j)){
					inX = true;
				}
				else{
					continue;
				}
			}
			
			if(inX == false){
				for(int k = 0; k < yLevels.size(); k++){
					if(find == yLevels.get(k)){
					inY = true;	
					}
					else{
						continue;
					}
				}
			}
			
			if(inX == false && inY == false){
				guy = false;
			}
		}
		
		if(guy){
			System.out.println("I become the guy.");
		}
		else{
			System.out.println("Oh, my keyboard!");
		}
		
	}
}
