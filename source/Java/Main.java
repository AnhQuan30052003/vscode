import java.util.List;
import java.util.ArrayList;

public class Main {
  public static void main(String[] args) {
    List<String> ds = new ArrayList<>();
    ds.add("Anh Quân");
    ds.add("Văn Đồng");

    System.out.println("Danh sách hiện có:");
    for (String _ds : ds) {
      System.out.println(_ds);
    }

    System.err.println("Sau khi xoá một người: ");
    for (int i = 0; i < ds.size(); i++) {
      if (ds.get(i).equalsIgnoreCase("quân")) {
        ds.remove(i);
      }
    }
    for (String _ds : ds) {
      System.err.println(_ds);
    }
  }
}