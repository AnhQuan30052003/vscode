#include <iostream>
using namespace std;

// quy uoc 0 la 4, 1 la 7

int main() {
    int k;
    cin >> k;

    int a[30], i = 0;
    while (k > 0) {
        --k;
        if (k % 2 == 1) a[i++] = 7;
        else a[i++] = 4;
        k /= 2;
    }
    
    for (int j = i-1; j >= 0; j--) {
        cout << a[j];
    }
}