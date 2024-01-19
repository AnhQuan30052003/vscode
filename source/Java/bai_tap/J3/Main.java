public class Main {
  public static void main(String[] args)   {
    SinhVienPoly sv1 = new SinhVienIT("Nguyen Anh A", "Cong nghe thong tin", 10, 10, 10);
    sv1.Xuat();
    System.out.println(sv1.GetDiem());
    System.out.println(sv1.HocLuc());

    System.out.println();
    SinhVienPoly sv2 = new SinhVienBiz("Nguyen Anh B", "Marketing", 10, 10);
    sv2.Xuat();
    System.out.println(sv2.GetDiem());
    System.out.println(sv2.HocLuc());
  }
}
