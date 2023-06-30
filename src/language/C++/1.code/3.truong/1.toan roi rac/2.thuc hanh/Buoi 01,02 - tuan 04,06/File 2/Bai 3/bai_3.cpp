/*
Phương trình đã cho: x1 + x2 + x3 + x4 = 20 (1), với điều kiện: x1 >= 4; x2 > 2; x3 > 5; x4 >= -2
Ta gọi: y1 = x1 - 4; y2 = x2 - 3; y3 = x3 - 6; y4 = x4 + 2. Với yi >= 0 (i = 1...4)
Khi đó, phương trình (1) trở thành: y1 + y2 + y3 + y4 = 9 (2);
Do đó, số nghiệm của phương trình (1) cũng chính là số nghiệm của phương trình (2). Suy ra tìm nghiệm phương tình (2);
*/
#include <iostream>
using namespace std;

long long int GT(int n) {
	if (n == 1) return 1;
	return n * GT(n-1);
}

long long int ToHopLap(int n, int k) {
	return (GT(n+k-1))/(GT(n-1)*GT(k));
}

int main() {
	int n = 4, k = 9;
	cout << ToHopLap(n, k);
}