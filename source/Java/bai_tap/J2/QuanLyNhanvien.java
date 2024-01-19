import java.util.List;
import java.util.ArrayList;

// Lớp Quản lý nhân viên
class QuanLyNhanVien implements IQuanLy {
  List<NhanVien> listNhanVien = new ArrayList<>();

  // Thêm mới nhân viên
  @Override
  public void Them(NhanVien nvm) {
    listNhanVien.add(nvm);
  }
  
  // In danh sách nhân viên
  @Override
  public void InDanhSach() {
    int stt = 1;
    for (NhanVien nv : listNhanVien) {
      System.out.println("Nhân viên " + stt++ + ":");
      System.out.println(nv.GetThongTin());
      System.out.println();
    }
  }
}