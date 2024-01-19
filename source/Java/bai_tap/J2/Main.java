public class Main {
  public static void main(String[] args) {
    QuanLyNhanVien qlnv = new QuanLyNhanVien();
    qlnv.Them(new NhanVien("Nguyen Anh A", 20, "Nha Trang, Khánh Hoà", 10000, 100));
    qlnv.Them(new NhanVien("Nguyen Anh B", 20, "Nha Trang, Khánh Hoà", 10000, 90));
    qlnv.Them(new NhanVien("Nguyen Anh C", 20, "Nha Trang, Khánh Hoà", 10000, 330));
    qlnv.Them(new NhanVien("Nguyen Anh D", 20, "Nha Trang, Khánh Hoà", 10000, 30));
    qlnv.Them(new NhanVien("Nguyen Anh E", 20, "Nha Trang, Khánh Hoà", 10000, 10));
  
    qlnv.InDanhSach();
  }
}