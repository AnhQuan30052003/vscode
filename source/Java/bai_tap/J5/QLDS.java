import java.util.List;
import java.util.ArrayList;

class QLDS implements IQLDS{
  List<CaNhan> ds = new ArrayList<>();

  @Override
  public void Them(CaNhan cn) {
    ds.add(cn);
  }

  @Override
  public void Xoa(String ten) {

  }

  @Override
  public void InDS() {
    System.out.println("Danh sach:");
    for (CaNhan x : ds) {
      x.HienThiThongTin();
      System.out.println("---------------------");
    }
  }
}
