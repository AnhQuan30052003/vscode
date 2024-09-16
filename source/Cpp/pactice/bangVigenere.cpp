#include <iostream>
using namespace std;

int main() {
  system("cls");

  for (char i = 'A'; i <= 'Z'; i++) {
    for (char j = i; j < i + 26; j++) {
      cout << char(j > 'Z' ? j - 26 : j) << " ";
    }
    cout << endl;
  }

  return 0;
}
