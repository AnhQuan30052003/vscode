// Nhập mảng n số nguyên. Dịch phải mảng 1 vị trí (phần tử cuối mảng được chuyển về đầu
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int x = a[n-1];
    for (int i = n-1; i > 0; i--)
        a[i] = a[i-1];
    a[0] = x;

    for (int i : a) cout << i << ' ';
}