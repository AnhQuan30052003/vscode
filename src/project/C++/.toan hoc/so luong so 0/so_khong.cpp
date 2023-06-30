// su dung ky thuat chia de tri de tim so luong so 0 trong mang sau
#include <iostream>
using namespace std;

int a[] = {1,0,0,0,0};
int n = sizeof(a)/sizeof(a[0]);

int so_khong(int f, int l) {
	if (a[0] == 0) return n;
	if (a[n-1] == 1 || f > l) return -1;
	else {
		int m = (f+l)/2;
		if (a[m] == 0 && a[m-1] == 1)
			return n-m;
		if (a[m] == 1) return
			so_khong(m+1,l);
		else
			return so_khong(f,m-1);
	}
}

int main() {
	cout << "So luong: " << so_khong(0,n-1) << endl;
}