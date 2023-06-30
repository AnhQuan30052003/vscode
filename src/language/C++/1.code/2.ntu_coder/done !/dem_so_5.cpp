#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int dem = 0;
    while (n > 0) {
        if (n % 10 == 5)
            ++dem;
        n /= 10;
    }
    cout << dem;
}