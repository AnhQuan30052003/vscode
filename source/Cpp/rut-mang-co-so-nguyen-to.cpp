#include <iostream>
#include <cmath>
using namespace std;

bool SoNguyenTo(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return n > 1;
}

int reduceArray(int a[], int& n) {
  int demDay = 0, tong = -1, i = 0, _i = 0;

  while (i < n) {
    if (SoNguyenTo(a[i])) {
      if (tong == -1) tong = 0;
      tong += a[i];
    }
    else {
      if (tong == -1) {
        a[_i] = a[i];
        _i += 1;
      }
      else {
        a[_i] = tong;
        demDay += 1;
        tong = -1;
        a[_i+1] = a[i];
        _i += 2;
      }
    }
    i += 1;
  }

  n = _i;
  return demDay;
}

int main() {
  system("cls");
  int a[] = {5, 2, 6, 7, 11, 8, 13, 5, 3, 15};
  int n = size(a);

  int soLuongChuoiConSoNguyenTo = reduceArray(a, n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl << soLuongChuoiConSoNguyenTo;
}