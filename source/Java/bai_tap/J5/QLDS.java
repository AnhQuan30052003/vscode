import java.util.List;
import java.util.ArrayList;

class QLDS implements IQLDS{
  List<CaNhan> ds = new ArrayList<>();

  @Override
  public int Them(CaNhan cn) {
    ds.add(cn);
    return 0;
  }

  @Override
  public int Xoa(String ten) {
    return 0;
  }

  @Override
  public void InDS() {
    System.out.println("Danh sách:");
    for (CaNhan x : ds) {
      System.out.print(x.HienThiThongTin());
      System.out.println("---------------------");
    }
  }
}
