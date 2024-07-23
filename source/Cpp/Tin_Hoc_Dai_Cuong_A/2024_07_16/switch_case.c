#include <stdio.h>

void main() {
  system("cls");

  int a, b;
  char pt;

  printf("Nhap 2 so a & b: ");
  scanf("%d%d", &a, &b);

  fflush(stdin);
  printf("Nhap phep tinh (+, -, *, /): ");
  scanf("%c", &pt);

  switch (pt) {
    case '+': {
      printf("%d + %d = %d", a, b, a+b);
      break;
    }

    case '-': {
      printf("%d - %d = %d", a, b, a-b);
      break; 
    }

    case '*': {
      printf("%d * %d = %d", a, b, a*b);
      break;
    }

    default: {
      if (b == 0) printf("Loi chia cho 0 !");
      else printf("%d / %d = %g", a, b, (float) a/b);
    }
  }
}
