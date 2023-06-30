// Hoán vị lien sau
#include <iostream>
using namespace std;

int n, dem = 0;

void HoanVi(int vt, int* tt, int* a) {
	for (int i = 1; i <= n; i++)
		if (tt[i] != 1) {
			tt[i] = 1;
			a[vt] = i;
			if (vt < n-1)
				HoanVi(vt+1, tt, a);
			else {
                ++dem;
				for (int i = 0; i < n; i++)
					cout << a[i];
				cout << endl;
			}
			tt[i] = 0;
		}
}

int main() {
    cout << "Nhap mot so nguyen duong n = ";
    cin >> n;
    int a[n], tt[n+1];
    HoanVi(0, tt, a);
    cout << dem;
}