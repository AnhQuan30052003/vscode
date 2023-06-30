#include <iostream>
using namespace std;

long double GT(int n) {
	if (n == 1) return 1;
	return n * GT(n-1);
}

string ChinhHop(int k, int n) {
	long double kq = 1;
	for (int i = n; i > n-k; i--)
		kq *= i;
	return to_string(kq);
}

string ToHop(int k, int n) {
	long long kqt = 1, kqm = 1;
	int a, b;
	if (k >= n-k) {
		a = k;
		b = n-k;
	}
	else {
		a = n-k;
		b = k;
	}
	for (int i = n; i > a; i--)
		kqt *= i;
	for (int i = 1; i <= b; i++)
		kqm *= i;
	return to_string(kqt/kqm);
}