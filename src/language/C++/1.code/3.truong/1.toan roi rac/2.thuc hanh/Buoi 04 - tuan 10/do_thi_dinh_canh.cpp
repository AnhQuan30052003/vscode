#include <iostream>
using namespace std; 

int main() {
  system("cls");
  // Nhập dữ liệu
  int dinh, canh;
  cout << "Nhap so dinh: ";
  cin >> dinh;
  cout << "Nhap so canh: ";
  cin >> canh;

  // Xử lý
  int c1, c2;
  int a[dinh][dinh];
  // Khỏi tạo đồ thì rỗng
  for (int i = 0; i < dinh; i++) {
    for (int j = 0; j < dinh; j++) {
      a[i][j] = 0;
    }
  }

  cout << "Nhap canh giua 2 dinh:" << endl;
  for (int i = 1; i <= canh; i++) {
    cin >> c1 >> c2;
    a[c1-1][c2-1] = 1;
    a[c2-1][c1-1] = 1;
  }

  // Ra dữ liệu
  cout << "Ma tran dinh - canh:" << endl;
  for (int i = 0; i < dinh; i++) {
    for (int j = 0; j < dinh; j++) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}
