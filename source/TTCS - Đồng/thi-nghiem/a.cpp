#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int TimTang(int n) {
  int tang = 0;
  while (n > 0) {
    n /= 2;
    tang += 1;
  }
  return tang;
}

void VeCay(int a[], int n, int tang) {
  int khoangCach = (pow(2, tang) - 1) / 2;
  // Vẽ gốc
  for (int i = 1; i <= khoangCach; i++) cout << " ";
  cout << a[0] << endl;
  
  // Vẽ tiếp
  int cachDau = khoangCach / 2;
  int _a = 1;
  int soLanLap = 0;
  for (int _tang = 2; _tang <= tang; _tang++) {
    for (int _cachDau = 1; _cachDau <= cachDau; _cachDau++) cout << " ";

    soLanLap = pow(2, _tang) / 2;
    for (int _soLanLap = 1; _soLanLap <= soLanLap; _soLanLap++) {
      cout << a[_a];
      _a += 1;
      if (_a >= n) return;
      if (_soLanLap < soLanLap) {
        for (int _khoangCach = 1; _khoangCach <= khoangCach; _khoangCach++) cout << " ";
      }
    }

    cachDau /= 2;
    khoangCach /= 2;
    cout << endl;
  }
}

int main() {
  system("cls");
  int a[] = {1, 3, 2, 5, 6, 4, 6, 7, 8, 6, 7, 8, 2, 3, 3};
  int n = size(a);

  VeCay(a, n, TimTang(n));
}