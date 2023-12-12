import java.util.List;
import java.util.ArrayList;

class QuanLyChuyenXe {
  private List<ChuyenXe> danhSachChuyenXe = new ArrayList<>();

  // Thêm chuyến xe mới vào danh sách
  public void ThemChuyenXe(ChuyenXe chuyenXeMoi) {
    danhSachChuyenXe.add(chuyenXeMoi);
  }

  // Xuất ra thông tin danh sách các chuyến xe
  public void XuatDanhSachChuyenXe() {
    for (ChuyenXe cx : danhSachChuyenXe) {
      cx.ThongTinChuyenXe();
      System.out.println("---------------------");
    }
  }

  // Tính doanh thu xe ngoài thành
  public double DoanhThuXeNgoaiThanh() {
    double tongDoanhThu = 0;
    for (ChuyenXe cx : danhSachChuyenXe) {
      if (cx instanceof XeNgoaiThanh) {
        tongDoanhThu += cx.doanhThu;
      }
    }

    return tongDoanhThu;
  }

  // Tính doanh thu xe nội thành
  public double DoanhThuXeNoiThanh() {
    double tongDoanhThu = 0;
    for (ChuyenXe cx : danhSachChuyenXe) {
      if (cx instanceof XeNoiThanh) {
        tongDoanhThu += cx.doanhThu;
      }
    }
    
    return tongDoanhThu;
  }

  // Tính doanh thu của các chuyến xe
  public double DoanhThuCacChuyenXe() {
    double tongDoanhThu = 0;
    for (ChuyenXe cx : danhSachChuyenXe) {
      tongDoanhThu += cx.doanhThu;
    }
    
    return tongDoanhThu;
  }
}