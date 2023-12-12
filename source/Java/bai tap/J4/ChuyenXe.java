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
