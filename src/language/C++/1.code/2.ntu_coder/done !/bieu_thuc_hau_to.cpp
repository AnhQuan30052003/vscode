#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

int main() {
    stack<int> s;
    string text;
    getline(cin, text);

    char so[3];
    int k = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            if (k == 0) continue;
            s.push(atoi(so));
            for (int j = 0; j < k; j++) {
                so[j] = ' ';
            }
            k = 0;
            continue;
        }
        if (text[i] >= '0' && text[i] <= '9') {
            so[k++] = text[i];
            if (i == text.size()-1 && s.size() == 0) {
                s.push(atoi(so));
            }
        }
        else {
            int s1 = s.top(); s.pop();
            int s2 = s.top(); s.pop();
            switch (text[i]) {
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
    cout << s.top();
}