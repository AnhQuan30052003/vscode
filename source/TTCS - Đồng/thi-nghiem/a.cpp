#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

void InMangBieuDien(int a[], int l, int r) {
  int p = (l + r) / 2;

  // In ra chỉ số chọn P
  for (int i = l; i <= r; i++) {
    if (i == p) printf("%5c", 'P');
    else cout << "     ";
  }
  cout << endl;

  for (int i = l; i <= r; i++) {
    printf("%5d", a[i]);
  }
  cout << endl;

  // Hiển thị ra L
  for (int i = l; i <= r; i++) {
    if (i == l) printf("%5c", 'L');
    else cout << "     ";
  }
  cout << endl;

  // Hiển thị ra R
  for (int i = l; i <= r; i++) {
    if (i == r) printf("%5c", 'R');
    else cout << "     ";
  }
  cout << endl;
}

void QuickSortDeMo(int a[], int l, int r) {
  
}

int main() {
  system("cls");
  int a[] = {1, 3, 2, 5, 7, 6, 8};
  int n = size(a);
  InMangBieuDien(a, 0, n-1);

}