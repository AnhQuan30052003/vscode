
void XinChao({String? ten, int? tuoi}) {
  print("Xin chào $ten, ra la bạn đã $tuoi tuổi.");
}

void main() {
  XinChao(tuoi: 21, ten: "Nguyễn Anh Quân");
  XinChao(ten: "Bùi Văn Đồng", tuoi: 21);
}