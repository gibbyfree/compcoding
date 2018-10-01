import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    String dummy = in.nextLine();
    List<String> winners = new ArrayList<String>();
    int counter = 0;

    while(counter != 12){
      String standing = in.nextLine();
      String[] teamAndUni = standing.split(" ");
      boolean alreadyWon = false;

      for(int i = 0; i < winners.size(); i++){
        if(teamAndUni[0].equals(winners.get(i))){
          alreadyWon = true;
        }
      }

      if(!alreadyWon){
        winners.add(teamAndUni[0]);
        winners.add(teamAndUni[1]);
        counter++;
      }
    }

    for(int i = 0; i < winners.size(); i++){
      System.out.println(winners.get(i) + " " + winners.get(i + 1));
      i++;
    }

  }
}
