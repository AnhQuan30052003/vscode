// Nhập mảng n số nguyên. Sắp xếp mảng theo thuật toán Selection Sort. In ra kết quả sắp xếp. 
#include <iostream>
using namespace std;

void SelectionSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[min]) min = j;
        }
        if (min != i) swap(a[i], a[min]);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    SelectionSort(a, n);
    for (int x : a) {
        cout << x << ' ';
    }
}