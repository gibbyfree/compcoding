import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int[] arr = new int[4];
    for(int i = 0; i < arr.length; i++){
      arr[i] = in.nextInt();
    }
    Arrays.sort(arr);
    System.out.println(arr[0] * arr[2]);
  }
}
