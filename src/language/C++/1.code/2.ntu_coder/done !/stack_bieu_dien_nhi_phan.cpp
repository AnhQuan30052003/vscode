#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> a;
    int n;
    cin >> n;
    if (n == 0) cout << 0;
    else {
        while (n > 0) {
            a.push(n%2);
            n /= 2;
        }   
        while (a.size() > 0) {
            cout << a.top();
            a.pop();
        }
    }
}