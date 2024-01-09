#include <iostream>
#include <cmath>
using namespace std;

const int N = 100;

bool SoNguyenTo(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return n > 1;
}

void FindSpecialPoints(int a[N][N], int n, int& xa, int& ya, int& xb, int& yb) {
  int A = 0, B = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (A == 0) {
        if (SoNguyenTo(a[i][j])) {
          A = a[i][j];  xa = i;   ya = j;
        }
      }
      else {
        if (a[i][j] > A && SoNguyenTo(a[i][j])) {
          B = A;        xb = xa;  yb = ya;
          A = a[i][j];  xa = i;   ya = j;
        }
        else if (a[i][j] > B && SoNguyenTo(a[i][j])) {
          B = a[i][j];  xb = i;   yb = j;
        }
      }
    }
  }
}

int main() {
  system("cls");
  int xa, ya, xb, yb;
  int n = 4;
  cin >> n;
  int a[N][N];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  system("cls");
  cout << "Ma trận vừa nhập:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  FindSpecialPoints(a, n, xa, ya, xb, yb);
  cout << "Số nguyên tố lớn nhất: " << a[xa][ya] << ". Toạ độ: " << "a[" << xa << "][" << ya << "]" << endl;
  cout << "Số nguyên tố lớn nhì: " << a[xb][yb] << ". Toạ độ: " << "a[" << xb << "][" << yb << "]" << endl;
}