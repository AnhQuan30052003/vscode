import java.util.List;
import java.util.ArrayList;

// Lớp Quản lý nhân viên
class QuanLyNhanVien implements IQuanLy {
  List<NhanVien> ListNhanVien = new ArrayList<>();

  // Thêm mới nhân viên
  @Override
  public void Them(NhanVien nvm) {
    ListNhanVien.add(nvm);
  }
  
  // In danh sách nhân viên
  @Override
  public void InDanhSach() {
    int stt = 1;
    for (NhanVien nv : ListNhanVien) {
      System.out.println("Nhan vien " + stt++ + ":");
      System.out.println(nv.GetThongTin());
    }
  }
}