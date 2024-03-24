#include <iostream>
#include <algorithm>
using namespace std;

string format(long long value) {
  int a[100];
  int _a = 0;
  while (value > 0) {
    a[_a++] = value % 10;
    value /= 10;
  }

  string strTemp = "";
  int __a = 0, count = 0;
  while (__a < _a) {
    strTemp.append(to_string(a[__a++]));
    count += 1;
    if (count == 3 && __a < _a) {
      strTemp.append(",");
      count = 0;
    }
  }

  reverse(strTemp.begin(), strTemp.end());
  return strTemp;
}

int main() {
  system("cls");
  long long money = 10000000000000;
  cout << format(money);
}