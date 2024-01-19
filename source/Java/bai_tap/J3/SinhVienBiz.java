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