abstract class CaNhan {
  protected String hoTen, diaChi, soDienThoai;
  protected int tuoi;

  public CaNhan(String hoTen, int tuoi, String diaChi, String soDienThoai) {
    this.hoTen = hoTen;
    this.tuoi = tuoi;
    this.diaChi = diaChi;
    this.soDienThoai = soDienThoai;
  }

  public String HienThiThongTin() {
    return "Họ tên: " + hoTen + "\nTuổi: " + tuoi + "\nĐịa chỉ: " + diaChi + "\nSố điện thoại: " + soDienThoai;
  }
}
