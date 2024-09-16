#include <iostream>
using namespace std;

int main() {
  system("cls");

  string banRo = "enemy coming";
  string khoa = "IAUTMOCSNREBDLHVWYFPZJXKGQ";
  string banMa;

  for (int i = 0; i < banRo.length(); i++) {
    char c = banRo[i];
    if (c == ' ') {
      banMa += ' ';
      continue;
    }

    int index = int(c - 97);
    banMa += khoa[index];
  }

  cout << banMa;

  return 0;
}