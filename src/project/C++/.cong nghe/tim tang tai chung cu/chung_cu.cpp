/*
Một chung cứ có 2 phòng 1 & 2 ở tầng 1, còn lại mỗi tâng đều có x phòng 
Nhập vào 2 thông số n (số phòng đang ở) & x (số phòng của mỗi tâng) rồi đi tìm sẽ phòng đó thuộc tầng thứ mấy ?
*/
#include <iostream>
using namespace std;

int TimTang(int n, int x) {
	if (n <= 2) return 1;
	if ((n-2) % x == 0) return 1 + (n-2)/x;
	else return 2 + (n-2)/x;
}

int main() {
	int n, x;
	cout << "Nhap n & x = ";
	cin >> n >> x;
	cout << "Phong " << n << " tang " << TimTang(n, x);
}