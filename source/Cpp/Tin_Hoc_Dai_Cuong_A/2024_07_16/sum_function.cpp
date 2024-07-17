#include <iostream>
using namespace std;

int main() {
  system("cls");

  int a, b;
  char pt;

  cout << "Nhâp số a và b: ";
  cin >> a >> b;
  cout << "Nhập phép tính (+, -, *, / ): ";
  cin >> pt;
  
  switch (pt) {
    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break; 

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;
  
    default:
      if (b == 0) cout << "Lỗi chia cho 0 !";
      else  cout << a << " / " << b << " = " << (float) a / b;
      break;
  }
  
  return 0;
}