// Nhập mảng n số nguyên. Nhập vào số x, in ra vị trí xuất hiện của x trong mảng. Xóa số x trong mảng, in ra mảng sau khi xóa. 
#include <iostream>
using namespace std;

int main() {
    // Input
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Nhap x va tin x trong a[]
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            cout << i << ' ';
    }
    cout << endl;

    // In ra lai mang sau khi xoa phan tu x
    int k = 0;
    int b[n];
    for (int i = 0; i < n; i++) {
        if (a[i] != x)
            b[k++] = a[i];
    }

    for (int i = 0; i < k; i++) {
        cout << b[i] << ' ';
    }
}