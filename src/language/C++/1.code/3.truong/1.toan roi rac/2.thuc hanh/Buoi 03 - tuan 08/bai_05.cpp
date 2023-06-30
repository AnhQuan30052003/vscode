#include <iostream>
using namespace std;

/*
5
2 5 1 8 9
DS: 
*/

int main() {
    // Input
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Xu ly
    int tien = 0;
    for (int i = 0; i < n; i++) {
        int max = a[i];
        for (int j = i+1; j < n; j++) {
            if (a[j] > max) max = a[j];
        }
        if (max > a[i]) {
            tien -= a[i];
        }
        else {
            tien += a[i];
        }
    }
    cout << tien;
}