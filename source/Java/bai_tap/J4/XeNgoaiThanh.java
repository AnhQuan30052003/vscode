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
    System.out.println("Nơi đến: " + noiDen);
    System.out.println("Số ngày đi: " + soNgayDi);
  }
}