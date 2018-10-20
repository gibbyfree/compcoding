import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int t = in.nextInt();
    String here;

    for(int i = 0; i < t; i++){
      Set<String> cities = new HashSet<String>();
      int n = in.nextInt();
      String dummy = in.nextLine();
      for(int j = 0; j < n; j++){
        here = in.nextLine();
        cities.add(here);
      }
      System.out.println(cities.size());
    }
  }
}
