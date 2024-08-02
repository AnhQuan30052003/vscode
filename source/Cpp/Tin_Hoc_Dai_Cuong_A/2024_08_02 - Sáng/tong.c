// Tổng: 2^2 + 4^2 + ... + n^2
#include <stdio.h>

void main() {
  int n, tong;
  do {
    printf("Nhap n: ");
    scanf("%d", &n);
  }
  while (!(n >= 2 && n <= 10));

  tong = 0;
  for (int i = 2; i <= n; i++) {
    if (i % 2 == 0) {
      tong += i * i;
    }
  }

  printf("Tong: %d", tong);
}