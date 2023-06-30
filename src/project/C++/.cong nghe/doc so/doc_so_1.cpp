#include <iostream>
using namespace std;

string a[11] = {"khong", "mot", "hai", "ba", "bon", "nam" , "sau", "bay", "tam", "chin", "muoi"};
string b[11] = {"khong", "mot", "hai", "ba", "bon", "lam" , "sau", "bay", "tam", "chin", "muoi"};

int main() {
	int n;
	do {
		system("cls");
		cout << "Nhap n = tu 0-99: ";
		cin >> n;
	} while (n < 0 || n >= 100);

	if (n >= 0 && n <= 10)
		cout << a[n];
	else if (n > 10 && n <= 19)
		cout << a[10] << " " << b[n%10];
	else if (n % 10 == 0)
		cout << a[n/10] << " " << a[10];
	else
		cout << a[n/10] << " " << a[10] << " " << b[n%10];
}