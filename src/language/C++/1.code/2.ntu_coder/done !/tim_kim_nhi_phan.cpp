// Tim kiem nhi phan //
#include <iostream>
using namespace std;

int TimX(int arr[], int f, int e, int x) {
	if (f > e || x < arr[f] || x > arr[e]) return -1;
	int k = (f+e)/2;
	if (x == arr[k]) return k+1;
	if (x > arr[k]) return TimX(arr, k+1, e, x);
	return TimX(arr, f, k-1, x);	
}

int main() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << TimX(a, 0, n-1, x);
}