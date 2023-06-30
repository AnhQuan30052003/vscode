// Chuon trinh tim ra so gan so nhap vao nhat trong mang (neu co)
#include <iostream>
using namespace std;

int a[] = {1,2,3,5,32,34,6,4,3,5,7,8,55,4,10,6,7};
int n = sizeof(a)/sizeof(a[0]);
int x;

void sap_xep_tang() {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

int san(int f, int l, int x) {
    if (x < a[0]) return -1;
    if (x >= a[n-1]) return a[n-1];

    int m = (f+l)/2;
    if (x == a[m]) return a[m];
    else if (x > a[m]) {
        if (x < a[m+1]) return a[m];
        else return san(m+1, l, x);
    }
    else return san(f, m-1, x);
}

int main() {
    cout << "Nhap x = ";
    cin >> x;
    sap_xep_tang();
    cout << san(0, n-1, x);
}
