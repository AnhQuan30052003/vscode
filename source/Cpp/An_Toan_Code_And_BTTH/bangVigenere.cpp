#include <iostream>
using namespace std;

void getMatrixVigenere();
void printVigenereTable();
string banRoSangBanMa(string banRo, string khoa);
string timKhoa(string banRo, string banMa);

const int N = 26;
char a[N][N] = {};

int main() {
  system("cls");
  getMatrixVigenere();
  // printVigenereTable();

  string banRo = "PERMUTATION";
  string khoa = "CHECKABLE";
  // string banMa = "PVRLHFMJCRNFKKW";

  cout << banRoSangBanMa(banRo, khoa);
  // cout << timKhoa(banRo, banMa);

  return 0;
}

void getMatrixVigenere() {
  for (char i = 'A'; i <= 'Z'; i++) {
    for (char j = i; j < i + N; j++) {
      char c = char(j > 'Z' ? j - N : j);
      a[i-65][j-i] = c;
    }
  }
}

void printVigenereTable() {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

string banRoSangBanMa(string banRo, string khoa) {
  string banMa;
  for (int i = 0, k = 0; i < banRo.length(); i++) {
    char row = banRo[i] - 65;
    char col = khoa[k++] - 65;
    banMa += a[row][col];
    if (k == khoa.length()) k = 0;
  }
  
  return banMa;
}

string timKhoa(string banRo, string banMa) {
  string khoa;
  for (int i = 0; i < banRo.length(); i++) {
    char row = banRo[i] - 97;
    char col;

    for (int j = 0; j < N; j++) {
      col = j;
      if (a[row][col] == banMa[i]) {
        khoa += char(j + 65);
        break;
      }
    }
  }

  return khoa;
}