class GiaoVien extends CaNhan{
  private String monDay, toBoMon;

  public GiaoVien(String hoTen, int tuoi, String diaChi, String soDienThoai, String monDay, String toBoMon) {
    super(hoTen, tuoi, diaChi, soDienThoai);
    this.monDay = monDay;
    this.toBoMon = toBoMon;
  }

  @Override
  public void HienThiThongTin() {
    super.HienThiThongTin();
    System.out.println("Mon day: " + monDay);
    System.out.println("To bo mon: " + toBoMon);
  }
}
