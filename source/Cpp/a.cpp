#include <iostream>
#include <cstdlib>
using namespace std;

void Tang(int& n) {
  n += 1;
}

int main() {
  system("cls");
  int n = 10;
  Tang(n);
  cout << n;
}