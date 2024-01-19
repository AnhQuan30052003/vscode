abstract class SinhVienPoly {
  public String hoTen, nganh;

  public SinhVienPoly(String hoTen, String nganh) {
    this.hoTen = hoTen;
    this.nganh = nganh;
  }

  public abstract double GetDiem();

  public String HocLuc() {
    double diem = GetDiem();
    if (diem < 5) return "Yếu";
    else if (diem < 6.5) return "Trung binh";
    else if (diem < 7.5) return "Khá";
    else if (diem < 9) return "Giỏi";
    return "Xuất sắc";
  }
  
  public void Xuat() {
    System.out.println("Họ tên: " + hoTen + "\nNgành: " + nganh);
  }
}