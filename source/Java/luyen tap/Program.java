import java.util.List;
import java.util.ArrayList;

public class Program {
  public static void main(String[] args) {
    List<Integer> arr = new ArrayList<>(List.of(1, 2, 3, 4, 5));

    arr.add(arr.size(), 10);

    for (int a : arr) {
      System.out.print(a + " ");
    }
  }
}