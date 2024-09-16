#include <iostream>
using namespace std;

int main() {
  system("cls");
  string text = "anh quan";
  int k = 3;

  for (int i = 0; i < text.length(); i++) {
    if (text[i] == ' ') {
      cout << text[i];
      continue;
    }

    char c = text[i] - 32 + k;
    cout << char(c > 'Z' ? c - 26 : c);
  }

  return 0;
}