import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String str = in.next();
    boolean hiss = false;

    for(int i = 0; i < str.length() - 1; i++){
      if(str.charAt(i) == 's' && str.charAt(i + 1) == 's'){
        hiss = true;
        System.out.println("hiss");
        break;
      }
    }
    if(!hiss){
      System.out.println("no hiss");
    }
  }
}
