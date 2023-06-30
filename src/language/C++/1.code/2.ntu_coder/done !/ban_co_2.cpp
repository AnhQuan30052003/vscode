/*
Quy ước:
- bàn cờ toàn 0
- đánh dấu tượng ăn được hoặc xe ăn được là 1
- vị trí có tượng hoặc xe là 2
*/
#include <iostream>
using namespace std;

int a[9][9];

void DanhDauTuong(int x, int y) {
    // Trên - trái
	for (int i = x-1, j = y-1; i >= 1 && j >= 1; i--, j--)
        if (a[i][j] == 2) break;
		else a[i][j] = 1;
    
    // Trên - phải
	for (int i = x-1, j = y+1; i >= 1 && j <= 8; i--, j++)
        if (a[i][j] == 2) break;
		else a[i][j] = 1;

	// Dưới - trái
	for (int i = x+1, j = y-1; i <= 8 && j >= 1; i++, j--)
        if (a[i][j] == 2) break;
		else a[i][j] = 1;
    
    // Dưới - phải
	for (int i = x+1, j = y+1; i <= 8 && j <= 8; i++, j++)
        if (a[i][j] == 2) break;
		else a[i][j] = 1;
}

void DanhDauXe(int x, int y) {
    // Đi lên
    for (int i = x-1; i >= 1; i--)
        if (a[i][y] == 2) break;
        else a[i][y] = 1;

    // Đi xuống
    for (int i = x+1; i <= 8; i++)
        if (a[i][y] == 2) break;
        else a[i][y] = 1;

    // Sang trái
    for (int i = y-1; i >= 1; i--)
        if (a[x][i] == 2) break;
        else a[x][i] = 1;

    // Sang phải
    for (int i = y+1; i <= 8; i++)
        if (a[x][i] == 2) break;
        else a[x][i] = 1;
}

int main() {
    int nt, nx;
    cin >> nt >> nx;
    int xt[nt], yt[nt], xx[nx], yx[nx];

    // Nhập tạo độ cho các quân tượng
    for (int i = 0; i < nt; i++) {
        cin >> xt[i] >> yt[i];
        a[xt[i]][yt[i]] = 2;
    }

    // Nhập tọa độ cho các quân xe
    for (int i = 0; i < nx; i++) {
        cin >> xx[i] >> yx[i];
        a[xx[i]][yx[i]] = 2;
    }

    // Tiến hành đánh dấu xe và tượng
    for (int i = 0; i < nt; i++)
        DanhDauTuong(xt[i], yt[i]);
    for (int i = 0; i < nx; i++)
        DanhDauXe(xx[i], yx[i]);

    // Đếm kết quả
    int dem = 0;
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            if (a[i][j] > 0) ++dem;
    cout << dem;
}