

// Lớp SinhVienPoly
abstract class SinhVienPoly {
  protected String hoTen, nganh;

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

class SinhVienIT extends SinhVienPoly {
  private double java, html, css;

  public SinhVienIT(String hoTen, String nganh, double java, double html, double css) {
    super(hoTen, nganh);
    this.java = java;
    this.html = html;
    this.css = css;
  }

  @Override
  public double GetDiem() {
    return (2 * java + html + css) / 4;
  }
}

class SinhVienBiz extends SinhVienPoly {
  private double marketing, sales;
  
  public SinhVienBiz(String hoTen, String nganh, double marketing, double sales) {
    super(hoTen, nganh);
    this.marketing = marketing;
    this.sales = sales;
  }

  @Override
  public double GetDiem() {
    return (2 * marketing + sales) / 3;
  }
}