abstract class SinhVienPoly {
  public String hoTen, nganh;

  public SinhVienPoly(String hoTen, String nganh) {
    this.hoTen = hoTen;
    this.nganh = nganh;
  }

  public abstract double GetDiem();

  public String HocLuc() {
    double diem = GetDiem();
    if (diem < 5) return "Yeu";
    else if (diem < 6.5) return "Trung binh";
    else if (diem < 7.5) return "Kha";
    else if (diem < 9) return "Gioi";
    return "Xuat sac";
  }
  
  public void Xuat() {
    System.out.println("Ho ten: " + hoTen + ", nganh: " + nganh);
  }
}