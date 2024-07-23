#include <stdio.h>

void main() {
  system("cls");

  int soLan, i = 0;
  printf("Nhap vao so lan lap: ");
  scanf("%d", &soLan);

  // Vong lap while
  printf("\n---\nVong lap while:");
  while (i++ < soLan) {
    printf("\nXin chao lan %d", i);
  }

  // Vong lap for
  printf("\n\n---\nVong lap for:");
  for (i = 0; i < soLan; i++) {
    printf("\nXin chao lan %d", i+1);
  }

  // Vong lap do_while
  printf("\n\n---\nVong lap do while");
  i = 1;
  do {
    printf("\nXin chao lan %d", i);
  }
  while (i++ < soLan);
}
