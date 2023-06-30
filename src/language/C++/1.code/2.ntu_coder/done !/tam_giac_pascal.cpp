#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j == 0) a[i][j] = 1;
            else a[i][j] = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++) {
            if (j != 0) a[i][j] = a[i-1][j] + a[i-1][j-1];
                cout << a[i][j] << (j == i ? "\n" : " ");
        }
}