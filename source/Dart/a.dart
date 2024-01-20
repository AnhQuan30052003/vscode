class Nguoi {
  String ten;
  static int soLuong = 0;

  Nguoi(this.ten) {
    soLuong += 1;
  }
}

void main() {
  Nguoi a = new Nguoi("a");
  Nguoi b = new Nguoi("b");
  Nguoi c = new Nguoi("c");

  print(Nguoi.soLuong);
}