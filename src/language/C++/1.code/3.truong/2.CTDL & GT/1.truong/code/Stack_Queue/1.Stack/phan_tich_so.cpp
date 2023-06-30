#include <iostream>
#include <stack>
using namespace std;

int main() {
    system("cls");
    stack<int> s;
    int n;
    cin >> n;

    while (n > 1) {
        int i = 2;
        while (n % i != 0) i += 1;
        s.push(i);
        n /= i;
    }

    while (s.size() > 0) {
        cout << s.top();
        s.pop();
        if (s.size() > 0) cout << '*';
    }
}