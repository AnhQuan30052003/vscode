// Nhập mảng gồm n số nguyên đã sắp xếp tăng dần. Nhập vào số x, dùng thuật toán BinarySearch in ra vị trí xuất hiện của x trong mảng. 
#include <iostream>
using namespace std;

int Search(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;
    cout << Search(a, n, x);
}