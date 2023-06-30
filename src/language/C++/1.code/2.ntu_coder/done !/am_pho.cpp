#include <iostream>
using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;
	
	long long a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int dong = 1; dong <= m; dong++) {
		for (int i = 0; i < n; i++)
			if (m - dong >= a[i]) cout << '.';
			else cout << '#';
		cout << endl;
	}
}