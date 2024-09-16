#include <iostream>
using namespace std;

int main() {
  system("cls");

  string text = "IRXU VFRUH DQG VHYHQ BHDUV DJR";

  for (int k = 3; k <= 3; k++) {
    cout << k << " ";
    for (int i = 0; i < text.length(); i++) {
      char c = text[i];
      if (text[i] == ' ') {
        cout << ' ';
        continue;
      }

      c = c + 32 - k;
      c = (c < 'a' ? c + 26 : c);
      cout << c;
    }
    cout << endl;
  }

  return 0;
}