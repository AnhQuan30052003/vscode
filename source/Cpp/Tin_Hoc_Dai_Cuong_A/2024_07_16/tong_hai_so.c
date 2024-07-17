#include <stdio.h>

int main() {
  int a, b, tong;
  
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);

  tong = a + b;
  printf("Tong cua %d va %d la %d", a, b, tong);

  return 0;
}