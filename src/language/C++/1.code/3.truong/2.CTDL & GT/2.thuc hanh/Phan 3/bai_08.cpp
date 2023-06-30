/*
Thực hiện tương tự câu 7 cho các thuật toán:
a) Sắp xếp chèn (Insertion Sort)
b) Sắp xếp nổi bọt (Bubble Sort)
c) Sắp xếp nhanh (Quick Sort)
d) Sắp xếp trộn (Merge Sort) 
*/
#include <iostream>
using namespace std;

void InsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            if (a[i] > a[j-1] && a[i] < a[j]) {
                int x = a[i];
                for (int k = i; k > j; k--) {
                    a[k] = a[k-1];
                }
                a[j] = x;
                break;
            }
        }
    }
}

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    }
}

void QuickSort(int a[], int f, int e) {
    int l = f, r = e;
    int x = a[(l+r)/2];
    while (l <= r) {
        while (a[l] < x && l < e) l += 1;
        while (a[r] > x && r > f) r -= 1;

        if (l <= r) {
            swap(a[l], a[r]);
            l += 1;
            r -= 1;
        }
    }
    if (l < e) QuickSort(a, l, e);
    if (f < r) QuickSort(a, f, r);
}

void MergeSort(int a[], int f, int e) {
    int x = (f+e)/2;
    if (f < x) MergeSort(a, f, x);
    if (x < e) MergeSort(a, x+1, e);

    int b[100], c[100];
    for (int i = 0; i <= x; i++) {
        b[i] = a[i];
    }
    b[x+1] = 1000000000;
    for (int i = x+1; i <= e; i++) {
        c[i] = a[i];
    }
    c[e+1] = 1000000000;

    int i = f, j = x+1;
    for (int k = f; k <= e; k++) {
        if (b[i] <= c[j]) a[k] = b[i++];
        else a[k] = c[j++];
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    /// Thuat toan sap xep ///
    // InsertionSort(a, n);
    // BubbleSort(a, n);
    // QuickSort(a, 0, n-1);
    // MergeSort(a, 0, n-1);

    for (int x : a) {
        cout << x << ' ';
    }
}