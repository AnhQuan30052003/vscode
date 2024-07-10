#include <iostream>
using namespace std;

int main() {
  system("cls");

  int x = 10, y = x;
  int b = --x >> 2 / y++;

  cout << b;

  return 0;
}