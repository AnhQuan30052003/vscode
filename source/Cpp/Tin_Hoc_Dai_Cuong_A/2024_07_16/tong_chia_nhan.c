#include <stdio.h>

int main() {
  system("cls");
  
  int a, b, tong, tich;
  float thuong;
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);

  tong = a + b;
  tich = a * b;
  
  printf("Tong cua %d va %d la %d", a, b, tong);
  printf("\nTich cua %d va %d la %d", a, b, tich);

  if (b == 0) {
    printf("\nLoi chia cho 0 !");
  }
  else {
    thuong = (float) a / b;
    printf("\nThuong cua %d va %d la %g", a, b, thuong);
  }

  return 0;
}