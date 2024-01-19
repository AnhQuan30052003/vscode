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