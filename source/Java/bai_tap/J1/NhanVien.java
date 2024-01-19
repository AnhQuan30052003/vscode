// Lớp nhân viên
class NhanVien {
  private String ten, diaChi;
  private int tuoi, tongSoGioLam;
  private double tienLuong;

  // Không tham số
  public NhanVien() {}

  // Có tham số
  public NhanVien(String ten, int tuoi, String diaChi, double tienLuong, int tongSoGioLam ) {
    this.ten = ten;
    this.tuoi = tuoi;
    this.diaChi = diaChi;
    this.tienLuong = tienLuong;
    this.tongSoGioLam = tongSoGioLam;
  }

  // Get & set ten
  public String GetTen() { return this.ten; }
  public void SetTen(String ten) { this.ten = ten; }

  // Get & set diaChi
  public String GetDiaChi() { return this.diaChi; }
  public void SetDiaChi(String diaChi) { this.diaChi = diaChi; }

  // Get & set tuoi
  public int GetTuoi() { return this.tuoi; }
  public void SetTuoi(int tuoi) { this.tuoi = tuoi; }

  // Get & set tongSoGioLam
  public int GetTongSoGioLam() { return this.tongSoGioLam; }
  public void SetTongSoGioLam(int tongSoGioLam) { this.tongSoGioLam = tongSoGioLam; }

  // Get & set tienLuong
  public double GetTienLuong() { return this.tienLuong; }
  public void SetTienLuong(double tienLuong) { this.tienLuong = tienLuong; }

  // GetThongTin
  public String GetThongTin() {
    return "Tên: " + ten + "\nTuổi: " + tuoi + "\nĐịa chỉ " + diaChi + "\nTiền lương: " + tienLuong + "\nTổng số giờ làm: " + tongSoGioLam;
  }

  // Tính thưởng
  public double TinhThuong() {
    if (tongSoGioLam >= 200) return tienLuong * 0.2;
    else if (tongSoGioLam >= 100) return tienLuong * 0.1;
    return 0;
  }
}