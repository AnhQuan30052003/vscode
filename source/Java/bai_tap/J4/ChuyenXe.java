public class ChuyenXe {
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
    System.out.println("Mã số chuyến: " + maSoChuyen);
    System.out.println("Họ tên tài xế: " + hoTenTaiXe);
    System.out.println("Số xe: " + soXe);
    System.out.println("Doanh thu: " + doanhThu);
  }
}
