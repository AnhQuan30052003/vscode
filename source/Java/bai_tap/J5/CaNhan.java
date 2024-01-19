abstract class CaNhan {
  protected String hoTen, diaChi, soDienThoai;
  protected int tuoi;

  public CaNhan(String hoTen, int tuoi, String diaChi, String soDienThoai) {
    this.hoTen = hoTen;
    this.tuoi = tuoi;
    this.diaChi = diaChi;
    this.soDienThoai = soDienThoai;
  }

  public void HienThiThongTin() {
    System.out.println("Ho ten: " + hoTen);
    System.out.println("Tuoi: " + tuoi);
    System.out.println("Dia chi: " + diaChi);
    System.out.println("So dien thoai: " + soDienThoai);
  }
}
