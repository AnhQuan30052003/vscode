import java.util.List;
import java.util.ArrayList;


abstract class ChuyenXe {
  protected String maChuyenXe, hoTenTaiXe;
  protected int soXe;
  protected double doanhThu;

  public ChuyenXe(String maChuyenXe, String hoTenTaiXe, int soXe, double doanhThu) {
    this.maChuyenXe = maChuyenXe;
    this.hoTenTaiXe = hoTenTaiXe;
    this.soXe = soXe;
    this.doanhThu = doanhThu;
  }

  public double GetDoanhThu() {
    return doanhThu;
  }

  public abstract void ThongTinChuyenXe();
}

class XeNgoaiThanh extends ChuyenXe {
  private String noiDen;
  private int soNgayDi;

  public XeNgoaiThanh(String maChuyenXe, String hoTenTaiXe, int soXe, double doanhThu, String noiDen, int soNgayDi) {
    super(maChuyenXe, hoTenTaiXe, soXe, doanhThu);
    this.noiDen = noiDen;
    this.soNgayDi = soNgayDi;
  }

  @Override
  public void ThongTinChuyenXe() {
    System.out.println("Ma so chuyen: " + maChuyenXe);
    System.out.println("Ho ten tai xe: " + hoTenTaiXe);
    System.out.println("So xe: " + soXe);
    System.out.println("Noi den: " + noiDen);
    System.out.println("So ngay di: " + soNgayDi);
    System.out.println("Doanh thu: " + doanhThu);
  }
}

class XeNoiThanh extends ChuyenXe {
  private int soTuyen, soKmDiDuoc;

  public XeNoiThanh(String maChuyenXe, String hoTenTaiXe, int soXe, double doanhThu, int soTuyen, int soKmDiDuoc) {
    super(maChuyenXe, hoTenTaiXe, soXe, doanhThu);
    this.soTuyen = soTuyen;
    this.soKmDiDuoc = soKmDiDuoc;
  }

  @Override
  public void ThongTinChuyenXe() {
    System.out.println("Ma so chuyen: " + maChuyenXe);
    System.out.println("Ho ten tai xe: " + hoTenTaiXe);
    System.out.println("So xe: " + soXe);
    System.out.println("So tuyen: " + soTuyen);
    System.out.println("So km di duoc: " + soKmDiDuoc);
    System.out.println("Doanh thu: " + doanhThu);
  }
}

class QuanLyChuyenXe {
  // List<ChuyenXe> 
}