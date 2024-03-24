#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  system("cls");
  string text = "abc";
  reverse(text.begin(), text.end());
  cout << text;
}
