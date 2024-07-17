#include <stdio.h>

int main() {
  int a, b, tong, tich;
  
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);

  tong = a + b;
  tich = a * b;
  
  printf("Tong cua %d va %d la %d", a, b, tong);
  printf("\nTich cua %d va %d la %d", a, b, tich);

  return 0;
}