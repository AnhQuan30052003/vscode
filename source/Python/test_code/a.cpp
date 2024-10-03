#include <iostream>
using namespace std;

int main() {
  system("cls");

  char P = 'A';  // Giả sử P là 'A'
  int K = 25;     // Giả sử khóa là 3, trong phạm vi 0-25

  // Mã hóa
  int encoded = ((P - 'A') ^ K) % 26 + 'A';

  // Giải mã
  int decoded = ((encoded - 'A') ^ K) % 26 + 'A';

  printf("Ký tự sau mã hóa: %c\n", encoded);
  printf("Ký tự sau giải mã: %c\n", decoded);
}