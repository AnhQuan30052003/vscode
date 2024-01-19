public class Main {
  public static void main(String[] args)   {
    SinhVienPoly sv1 = new SinhVienIT("Nguyen Anh A", "Công nghệ thông tin", 10, 10, 10);
    sv1.Xuat();
    System.out.println("Điểm: " + sv1.GetDiem());
    System.out.println("Học lực: " + sv1.HocLuc());

    System.out.println();
    SinhVienPoly sv2 = new SinhVienBiz("Nguyen Anh B", "Marketing", 7, 7);
    sv2.Xuat();
    System.out.println("Điểm: " + sv2.GetDiem());
    System.out.println("Học lực: " + sv2.HocLuc());
  }
}
