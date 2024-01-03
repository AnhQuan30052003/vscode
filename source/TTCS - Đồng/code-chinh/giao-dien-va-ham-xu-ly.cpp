#include "thu-vien.cpp"

// Kiểm tra nhâp số
bool KiemTraNhapSo(string s) {
  for (int i = 0; i < s.size(); i++) {
    if (!(s[i] >= '0' && s[i] <= '9')) return false;
  }
  return true;
}

// Hiển thị giao diện lúc đầu
void HienThiGiaoDienLucDau(int& luaChon) {
  string nhap = "";
  while (true) {
    system("cls");
    cout << endl;
    cout << "\t+---------------------------------+" << endl;
    cout << "\t|====== LỰA CHỌN THUẬT TOÁN ======|" << endl;
    cout << "\t| 1. Quick Sort                   |" << endl;
    cout << "\t| 2. Heap Sort                    |" << endl;
    cout << "\t| 3. Merge Sort                   |" << endl;
    cout << "\t| 0. Thoát                        |" << endl;
    cout << "\t+---------------------------------+" << endl << endl;
    cout << "Nhập lựa chọn: ";
    getline(cin, nhap);

    if (KiemTraNhapSo(nhap) == false || nhap.size() == 0) continue;
    luaChon = stoi(nhap);
    if (luaChon >= 0 && luaChon <= 3) break;
    system("cls");
  }
}