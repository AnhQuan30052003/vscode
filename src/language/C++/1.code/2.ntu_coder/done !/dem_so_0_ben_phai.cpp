#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dem = 0;
    for (int i = 5; i <= n; i += 5) {
        int gan = i;
        while (gan % 5 == 0) {
            ++dem;
            gan /= 5;
        }   
    }   
    cout << dem;
}