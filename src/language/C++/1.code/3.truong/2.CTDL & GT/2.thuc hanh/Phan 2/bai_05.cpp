// Uóc số chung lón nhất
#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (a != b)
        if (a > b) return UCLN(a-=b, b);
        else return UCLN(a, b-=a);
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << UCLN(a, b);
}