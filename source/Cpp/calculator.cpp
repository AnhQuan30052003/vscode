#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;

void chuyenSangHauTo(string& text);
int tinhHauTo(string text);

int main() {
  system("cls");
  string text = "(100 + 2) / 2 + 10"; // 100 2 + 2 / 10 + 
  chuyenSangHauTo(text);
  cout << text;
  // cout << tinhHauTo(text);
}

// Tính ra độ ưu tiên
short doUuTien(char c) {
  if (c == '+' || c == '-') return 1;
  if (c == '*' || c == '/') return 2;
  return 0;
}

// Kiểm tra xem ký tự c là số hay không ?
bool laSo(char c) {
  if (c >= '0' && c <= '9') return true;
  return false;
}

// Chuyển biểu thức sang hậu tố
void chuyenSangHauTo(string& text) {
  stack<float> s;
  for (int i = 0; i < text.size(); i++) {
    char t = text[i];
    if (t == ' ') {

      continue;
    }

    if (s.size() > 0 && doUuTien(s.top()) >= doUuTien(t)) {
      
    }
    else {
      s.push(t);
    }
  }
}

// Tính toán biểu thức hậu tố
int tinhHauTo(string text) {
  char so[10000];
  int _so = 0;
  stack<float> s;

  for (int i = 0; i < text.size(); i++) {
    // Nếu gặp dấu ' ' thì chuyển số rồi bỏ qua, duyệt tiếp các phần tử sau...
    char t = text[i];
    if (t == ' ') {
      if (_so > 0) {
        float soChuyen = atof(so);
        s.push(soChuyen);
        // Làm sạch so[]
        for (int j = 0; j < _so; j++) {
          if (so[j] == ' ') break;
          else {
            so[j] = ' ';
          }
        }
        _so = 0;
      }
      continue;
    }

    // Ngược lại, tiến hành lấy và bỏ vào stack
    if (laSo(t) == true) { // Nếu là sô, tiến hành lưu lại vào so[]
      so[_so] = t;
      _so += 1;
    }
    else { // Ngược lại, tiến hành tính toán rồi lưu lại
      float s1, s2, ketQua;
      s2 = s.top(); s.pop();
      s1 = s.top(); s.pop();

      switch(t) {
        case '+': {
          ketQua = s1 + s2;
          break;
        }
        case '-': {
          ketQua = s1 - s2;
          break;
        }
        case '*': {
          ketQua = s1 * s2;
          break;
        }
        case '/': {
          ketQua = s1 / s2;
          break;
        }
      }
      s.push(ketQua);
    }
  }

  return s.top();
}