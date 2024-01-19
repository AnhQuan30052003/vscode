public class Main {
  public static void main(String[] args) {
    NhanVien nv1 = new NhanVien("Nguyen Anh A", 20, "Nha Trang, Khánh Hoà", 10000, 230);
    NhanVien nv2 = new NhanVien("Nguyen Anh B", 20, "Ninh Hoà, Khánh Hoà", 10000, 230);
    System.out.println("Nhân viên 1:");
    System.out.println(nv1.GetThongTin());
    
    System.out.println("\nNhân viên 2:");
    System.out.println(nv2.GetThongTin());
  }
}