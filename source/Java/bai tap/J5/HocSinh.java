class HocSinh extends CaNhan{
  private String lop, nangKhieu;

  public HocSinh(String hoTen, int tuoi, String diaChi, String soDienThoai, String lop, String nangKhieu) {
    super(hoTen, tuoi, diaChi, soDienThoai);
    this.lop = lop;
    this.nangKhieu = nangKhieu;
  }

  @Override
  public void HienThiThongTin() {
    super.HienThiThongTin();
    System.out.println("Lop: " + lop);
    System.out.println("Nang khieu: " + nangKhieu);
  }
}
