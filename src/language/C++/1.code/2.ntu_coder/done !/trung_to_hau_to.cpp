#include <iostream>
#include <stack>
using namespace std;

short DoUuTien(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

int main() {
    // Input
    stack <char> a;
    string s;
    cin >> s;

    // Xu ly
    for (short i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') cout << s[i] << ' ';
        else if (s[i] == ')') {
            while (a.top() != '(') {
                cout << a.top() << ' ';
                a.pop();
            }
            a.pop();
        }
        else if (a.size() > 0 && a.top() != '('  && s[i] != '(' && DoUuTien(s[i]) <= DoUuTien(a.top())) {
            while (a.size() > 0 && DoUuTien(a.top()) >= DoUuTien(s[i])) {
                cout << a.top() << ' ';
                a.pop();
            }
            a.push(s[i]);
        }
        else a.push(s[i]);
    }
    
    while (a.size() > 0) {
        cout << a.top() << ' ';
        a.pop();
    }
}