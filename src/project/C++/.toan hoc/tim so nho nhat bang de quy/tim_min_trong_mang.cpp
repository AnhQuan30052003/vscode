// Su dung ky thuat chia de tri de tim so nho nha trong mang
#include <iostream>
using namespace std;

int a[] = {9,9,9,9,99,9,0};
int n = sizeof(a)/sizeof(a[0]);

int tim_min(int a[], int n) {
	if (n == 0) return a[0];
	if (n == 1) return min(a[0], a[1]);
	else return min(a[n], tim_min(a, n-1));
}

int main() {
	cout << "Min: " << tim_min(a, n-1) << endl;
}