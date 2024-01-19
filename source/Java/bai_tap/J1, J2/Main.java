public class Main {
  public static void main(String[] args) {
    // J1();
    J2();
  }
  
  // Bài tập J1
  public static void J1() {
    NhanVien nv1 = new NhanVien("Nguyen Anh A", 20, "Nha Trang, Khanh Hoa", 10000, 230);
    NhanVien nv2 = new NhanVien("Nguyen Anh B", 20, "Ninh Hoa, Khanh Hoa", 10000, 230);
    System.out.println("Nhan vien 1:");
    System.out.println(nv1.GetThongTin());
    
    System.out.println("\nNhan vien 2:");
    System.out.println(nv2.GetThongTin());
  }

  // Bài tập J2
  public static void J2() {
    QuanLyNhanVien qlnv = new QuanLyNhanVien();
    qlnv.Them(new NhanVien("Nguyen Anh A", 20, "Nha Trang, Khanh Hoa", 10000, 230));
    qlnv.Them(new NhanVien("Nguyen Anh B", 20, "Nha Trang, Khanh Hoa", 10000, 230));
    qlnv.Them(new NhanVien("Nguyen Anh C", 20, "Nha Trang, Khanh Hoa", 10000, 230));
    qlnv.Them(new NhanVien("Nguyen Anh D", 20, "Nha Trang, Khanh Hoa", 10000, 230));
    qlnv.Them(new NhanVien("Nguyen Anh E", 20, "Nha Trang, Khanh Hoa", 10000, 230));

    qlnv.InDanhSach();
  }
}
