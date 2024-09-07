#include <iostream>
#include <string>
using namespace std;

int main() {
  system("cls");

  char ch[256] = {};

  string text = "131234322";
  int startIndex = 0, numberChar = 0;
  int maxNumberChar = 0;

  for (int i = 0; i < text.size(); i++) {
    if (ch[text[i]] = '') {
      ch[text[i]] = text[i];
      numberChar += 1;
    }
    else {
      if (numberChar > maxNumberChar) {
        maxNumberChar = numberChar;
      }
      else {

      }
    }
  }

  cout << text.substr(startIndex, numberChar);

  return 0;
}