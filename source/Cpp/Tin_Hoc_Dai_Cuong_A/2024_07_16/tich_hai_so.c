#include <stdio.h>

int main() {
  int a, b, tich;
  
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);

  tich = a * b;
  printf("Tich cua %d va %d la %d", a, b, tich);

  return 0;
}