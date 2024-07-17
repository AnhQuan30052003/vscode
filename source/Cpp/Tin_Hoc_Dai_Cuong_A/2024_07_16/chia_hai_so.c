#include <stdio.h>

int main() {
  int a, b;
  float thuong;
  
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);

  if (b == 0) {
    printf("Loi chia cho 0 !");
  }
  else {
    thuong = (float) a / b;
    printf("Thuong cua %d va %d la %g", a, b, thuong);
  }

  return 0;
}