import java.util.List;
import java.util.ArrayList;

class LopHoc {
  List<CaNhan> ds = new ArrayList<>();

  public void ThemHocSinh(HocSinh hs) {
    ds.add(hs);
  }

  public void ThemGiaoVien(GiaoVien gv) {
    ds.add(gv);
  }

  public void InDanhSachHocSinh() {
    System.out.println("Danh sach hoc sinh:");
    for (CaNhan x : ds) {
      if (x instanceof HocSinh) {
        x.HienThiThongTin();
        System.out.println("------");
      }
    }
  }

  public void InDanhSachGiaoVien() {
    System.out.println("Danh sach giao vien:");
    for (CaNhan x : ds) {
      if (x instanceof GiaoVien) {
        x.HienThiThongTin();
        System.out.println("------");
      }
    }
  }
}
