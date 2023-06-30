#include <iostream>
using namespace std;

void AdjustHeap(short a[], short n, short i) {
    short k = i, p = 2*i+1, r = 2*i+2;
    if (p < n && a[p]> a[k]) k = p;	
    if (r < n && a[r] > a[k]) k = r;	
    if (k != i) {
	    swap(a[i], a[k]);
	    AdjustHeap(a, n, k);
    }
}

void BuildHeap(short a[], short n) {
    for (short i = n/2-1; i >= 0; i--) {
        AdjustHeap(a, n, i);
    }
}

void Print_Arr(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    // system("cls");
    short n;
    cin >> n;
    short a[n];
    for (short i = 0; i < n; i++) {
        cin >> a[i];
    }

    BuildHeap(a, n);
    Print_Arr(a, n);
    while (n > 1) {
	    swap(a[0], a[n-1]);
        n -= 1;
	    AdjustHeap(a, n, 0);
        Print_Arr(a, n);
    } 		
}