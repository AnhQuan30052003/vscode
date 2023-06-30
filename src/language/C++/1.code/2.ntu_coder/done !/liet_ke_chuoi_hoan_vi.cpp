#include <iostream>
using namespace std;

void HoanVi(int vt, int n, int* tt, int* a) {
	for (int i = 1; i <= n; i++) {
		if (tt[i] != 1) {
			tt[i] = 1;
			a[vt] = i;
			if (vt < n-1)
				HoanVi(vt+1, n, tt, a);
			else {
				for (int i = 0; i < n; i++) {
					cout << a[i];
				}
				cout << endl;
			}
			tt[i] = 0;
		}
	}
}

int TinhHoanVi(int n) {
	if (n == 1 || n == 0) return 1;
	return n * TinhHoanVi(n-1);
}

int main() {
	int n;
	cin >> n;
	int a[n], tt[n+1];
	cout << TinhHoanVi(n) << endl;
	HoanVi(0, n, tt, a);
}