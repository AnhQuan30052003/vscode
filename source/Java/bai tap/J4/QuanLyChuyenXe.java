import java.util.List;
import java.util.ArrayList;

// Class Chuyến xe
abstract class ChuyenXe {
  protected String maSoChuyen, hoTenTaiXe;  
  protected int soXe;
  protected double doanhThu;

  public ChuyenXe(String maSoChuyen, String hoTenTaiXe, int soXe, double doanhThu) {
    this.maSoChuyen = maSoChuyen;
    this.hoTenTaiXe = hoTenTaiXe;
    this.soXe = soXe;
    this.doanhThu = doanhThu;
  }

  public void ThongTinChuyenXe() {
    System.out.println("Ma so chuyen: " + maSoChuyen);
    System.out.println("Ho ten tai xe: " + hoTenTaiXe);
    System.out.println("So xe: " + soXe);
    System.out.println("Doanh thu: " + doanhThu);
  }
}

// Class Xe ngoại thành
class XeNgoaiThanh extends ChuyenXe {
  private String noiDen;
  private int soNgayDi;

  public XeNgoaiThanh(String maSoChuyen, String hoTenTaiXe, int soXe, double doanhThu, String noiDen, int soNgayDi) {
    super(maSoChuyen, hoTenTaiXe, soXe, doanhThu);
    this.noiDen = noiDen;
    this.soNgayDi = soNgayDi;
  }

  @Override
  public void ThongTinChuyenXe() {
    super.ThongTinChuyenXe();
    System.out.println("Noi den: " + noiDen);
    System.out.println("So ngay di: " + soNgayDi);
  }
}

// Class Xe nội thành
class XeNoiThanh extends ChuyenXe {
  private int soTuyen, soKmDiDuoc;

  public XeNoiThanh(String maSoChuyen, String hoTenTaiXe, int soXe, double doanhThu, int soTuyen, int soKmDiDuoc) {
    super(maSoChuyen, hoTenTaiXe, soXe, doanhThu);
    this.soTuyen = soTuyen;
    this.soKmDiDuoc = soKmDiDuoc;
  }

  @Override
  public void ThongTinChuyenXe() {
    super.ThongTinChuyenXe();
    System.out.println("So tuyen: " + soTuyen);
    System.out.println("So km di duoc: " + soKmDiDuoc);
  }
}

// Class Quản lý chuyến xe
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