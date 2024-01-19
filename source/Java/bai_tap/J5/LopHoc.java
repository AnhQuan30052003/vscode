import java.util.List;
import java.util.ArrayList;

class LopHoc {
  List<CaNhan> ds = new ArrayList<>();

  public int ThemHocSinh(HocSinh hs) {
    ds.add(hs);
    return 0;
  }

  public int ThemGiaoVien(GiaoVien gv) {
    ds.add(gv);
    return 0;
  }

  public int InDanhSachHocSinh() {
    System.out.println("Danh sach hoc sinh:");
    for (CaNhan x : ds) {
      if (x instanceof HocSinh) {
        x.HienThiThongTin();
        System.out.println("------");
      }
    }
    return 0;
  }

  public int InDanhSachGiaoVien() {
    System.out.println("Danh sach giao vien:");
    for (CaNhan x : ds) {
      if (x instanceof GiaoVien) {
        x.HienThiThongTin();
        System.out.println("------");
      }
    }
    return 0;
  }
}
