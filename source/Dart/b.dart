class Nguoi {
  String ten;
  int tuoi;

  Nguoi(this.ten, this.tuoi) {}

  String getTen() {
    return this.ten;
  }

  String XuatThongTin() {
    return "Tên: $ten \nTuổi: $tuoi";
  }
}

mixin Xuat {
  String Chao(String ten) {
    return "Xin chào $ten, rất vui gặp bạn.";
  }
}

class SinhVien extends Nguoi with Xuat {
  String lop;
  int khoa;

  SinhVien(String ten, int tuoi, this.lop, this.khoa) : super(ten, tuoi);

  @override
  String XuatThongTin() {
    return super.XuatThongTin() + "\nLớsp: $lop \nKhoá: $khoa";
  }
}

void main() {
  SinhVien a = new SinhVien("Nguyễn Anh Quân", 21, "63CNTT-2", 63);
  print(a.XuatThongTin());
  print(a.Chao(a.getTen()));
}