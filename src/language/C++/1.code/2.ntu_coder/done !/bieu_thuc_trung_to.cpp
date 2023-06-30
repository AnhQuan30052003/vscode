#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;

string input;
char c[200];
short _c = 0;

void ChuyenSangHauTo();
short TinhHauTo();

int main() {
    getline(cin, input);
    ChuyenSangHauTo();
    cout << TinhHauTo();
}

short DoUuTien(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*') return 2;
    return 0;
}

void ChuyenSangHauTo() {
    stack<char> s;
    for (short i = 0; i < input.size(); i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            if (input[i+1] >= '0' && input[i+1] <= '9' && i+1 < input.size())  c[_c++] = input[i];
            else {
                c[_c++] = input[i];
                c[_c++] = ' ';
            }
        }
        else if (input[i] == ')') {
            while (s.top() != '(') {
                c[_c++] = s.top();
                c[_c++] = ' ';
                s.pop();
            }
            s.pop();
        }
        else if (s.size() > 0 && s.top() != '(' && input[i] != '(' && DoUuTien(input[i]) <= DoUuTien(s.top())) {
            while (s.size() > 0 && DoUuTien(s.top()) >= DoUuTien(input[i])) {
                c[_c++] = s.top();
                c[_c++] = ' ';
                s.pop();
            }
            s.push(input[i]);
        }
        else s.push(input[i]);
    }

    while (s.size() > 0) {
        c[_c++] = s.top();
        c[_c++] = ' ';
        s.pop();
    }
}

short TinhHauTo() {
    stack<int> s;
    char so[3];
    short k = 0;
    for (int i = 0; i < _c; i++) {
        if (c[i] == ' ') {
            if (k == 0) continue;
            s.push(atoi(so));
            for (int j = 0; j < k; j++) {
                so[j] = ' ';
            }
            k = 0;
            continue;
        }
        if (c[i] >= '0' && c[i] <= '9') {
            so[k++] = c[i];
            if (i == _c-1 && s.size() == 0) {
                s.push(atoi(so));
            }
        }
        else {
            int s1 = s.top(); s.pop();
            int s2 = s.top(); s.pop();
            switch (c[i]) {
                case '+':
                    s.push(s2 + s1);
                    break;
                case '-':
                    s.push(s2 - s1);
                    break;
                case '*':
                    s.push(s2 * s1);
                    break;
            }
        }
    }
    return s.top();
}