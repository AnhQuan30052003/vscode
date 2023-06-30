#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> a;
    int n;
    cin >> n;
    while (n > 1) {
        int i = 2;
        while (n % i != 0) i += 1;
        a.push(i);
        n /= i;
    }
    while (a.size() > 0) {
        cout << a.top();
        a.pop();
        if (a.size() > 0) cout << '*';
    }
}