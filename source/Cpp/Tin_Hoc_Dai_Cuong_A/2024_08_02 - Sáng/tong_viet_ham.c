// Tổng: 2^2 + 4^2 + ... + n^2
#include <stdio.h>

void nhap(int *n);
int soChan(int n);

void main(void) {
  int n, tong;
  nhap(&n);

  tong = 0;
  for (int i = 2; i <= n; i++) {
    if (soChan(i)) {
      tong += i * i;
    }
  }

  printf("Tong: %d", tong);
}

void nhap(int *n) {
  do {
    printf("Nhap n: ");
    scanf("%d", n);
  }
  while (!(*n >= 2 && *n <= 10));
}

int soChan(int n) {
  if (n % 2 == 0) return 1;
  return 0;
}