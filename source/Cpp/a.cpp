#include <iostream>
using namespace std;

int main() {
  system("cls");

  char a = 'a';
  char b = 'b';
  char c = 'c';

  string s = "quan";
  string t;
  t += a;
  t += b;
  t += c;
  s = t;
  cout << t << endl;
  cout << s << endl;
}