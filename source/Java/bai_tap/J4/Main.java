public class Main {
  public static void main(String[] args) {
    XeNgoaiThanh xngt1 = new XeNgoaiThanh("CX001", "Nguyen Van 1", 101, 10000, "Khánh Hoà", 2);
    XeNgoaiThanh xngt2 = new XeNgoaiThanh("CX002", "Nguyen Van 2", 102, 10000, "Đà Nẵng", 3);
    XeNgoaiThanh xngt3 = new XeNgoaiThanh("CX003", "Nguyen Van 3", 103, 10000, "Thanh Hoá", 4);
    XeNoiThanh xnt1 = new XeNoiThanh("CX004", "Nguyen Van 4", 104, 12000, 2, 20);
    XeNoiThanh xnt2 = new XeNoiThanh("CX005", "Nguyen Van 5", 105, 12200, 10, 15);
    XeNoiThanh xnt3 = new XeNoiThanh("CX006", "Nguyen Van 6", 106, 12500, 4, 12);
    
    QuanLyChuyenXe quanLyChuyenXe = new QuanLyChuyenXe();
    quanLyChuyenXe.ThemChuyenXe(xngt1);    
    quanLyChuyenXe.ThemChuyenXe(xngt2);  
    quanLyChuyenXe.ThemChuyenXe(xngt3);    
    quanLyChuyenXe.ThemChuyenXe(xnt1);    
    quanLyChuyenXe.ThemChuyenXe(xnt2);    
    quanLyChuyenXe.ThemChuyenXe(xnt3);

    quanLyChuyenXe.XuatDanhSachChuyenXe();

    System.out.println("Tổng doanh thu xe ngoại thành: " + quanLyChuyenXe.DoanhThuXeNgoaiThanh());
    System.out.println("Tổng doanh thu xe nội thành: " + quanLyChuyenXe.DoanhThuXeNoiThanh());
    System.out.println("Tổng doanh thu các chuyến xe: " + quanLyChuyenXe.DoanhThuCacChuyenXe());
  }
}
