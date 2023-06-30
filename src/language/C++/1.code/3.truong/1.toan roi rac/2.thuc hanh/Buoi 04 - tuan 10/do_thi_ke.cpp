#include <iostream>
using namespace std;
#define M 100

int n;
int a[M][M];
int bbr[M], bbv[M];

// Kiểm tra ma trận có Khuyên hay không ?
bool TimKhuyen() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (i == j && a[i][j] == 1)
                return true;
    }
    return false;
}

// Ma trận thuộc loại có hướng hay vô hướng
bool VoHuong() {
    if (TimKhuyen()) return true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                return false;
    }
    return true;
}

// Tính bậc | bán bậc của ma trận
void Tinh() {
    int dem;
    if (VoHuong()) {
        for (int i = 0; i < n; i++) {
            dem = 0;
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1) {
                    dem += 1;
                    if (a[j][i] == 1 && i == j) dem += 1;
                }
            }
            cout << "Bac cua dinh " << i + 1 << " la: " << dem << endl;
        }
    }
    else {
        int dem_bbr, dem_bbv;
        for (int i = 0; i < n; i++) {
            dem = 0, dem_bbr = 0;
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1) {
                    dem += 1;
                    dem_bbr += 1;
                }
            }
            bbr[i] = dem_bbr;
        }

        for (int j = 0; j < n; j++) {
            dem_bbv = 0;
            for (int i = 0; i < n; i++) {
                if (a[i][j] == 1) {
                    dem_bbv += 1;
                }
            }
            bbv[j] = dem_bbv;
        }

        for (int i = 0; i < n; i++) {
            cout << "Dinh " << i + 1 << ": " << "ban bac ra: " << bbr[i] << ", ban bac vao: " << bbv[i] << endl;
        } 
    }
}

// Tổng bán bậc
void TinhBanBac() {
    if (VoHuong()) return;
    int tong_bbr = 0, tong_bbv = 0;
    for (int i = 0; i < n; i++) {
        tong_bbr += bbr[i];
        tong_bbv += bbv[i];
    }
    cout << "Tong ban bac ra: " << tong_bbr << endl;
    cout << "Tong ban bac vao: " << tong_bbv << endl;
}

// Tìm số cạnh | cung của ma trận
int SoCanhDoThi() {
    int tong = 0;
    if (VoHuong()) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1) tong += 1;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            tong += bbr[i] + bbv[i];
        }
    }
    return tong/2;
}

int main() {
    system("cls");
    // input
    cout << "Nhap so dinh: ";
    cin >> n;
    a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    // output
    if (TimKhuyen()) cout << "Ma tran co canh khuyen" << endl;
    else cout << "Ma tran khong co canh khuyen !" << endl;
    if (VoHuong()) cout << "Ma tran vo huong" << endl;
    else cout << "Ma tran co huong" << endl;
    Tinh();
    TinhBanBac();
    cout << "So canh cua do thi: " << SoCanhDoThi();
}