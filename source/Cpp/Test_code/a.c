#include <stdio.h>

void main() {
  system("cls");

  int i = 0;
  do {
    printf("%d-", i);
    i++;
    if (i == 4) break;
  }
  while (i <= 10);
}
