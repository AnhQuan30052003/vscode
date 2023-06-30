/*
Quản lý thông tin nhân viên trong một công ty gồm:
- Mã nhân viên: chuỗi 8 ký tự
- Tên nhân viên: chuỗi 20 ký tự
- Lương: số nguyên
a. Tổ chức quản lý các nhân viên trong công ty bằng mảng
b. Lần lượt thêm các nhân viên vào mảng (n nhân viên).
c. In ra các nhân viên đã nhập.
d. Sắp xếp mảng theo thứ tự giảm dần của lương. In ra kết quả sắp xếp.
e. In ra tổng lương của các nhân viên.
f. Nhập vào một mã nhân viên x, cho biết tên và mức lương của nhân viên này. Sau
đó xóa nhân viên này khỏi mảng.
*/
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

struct NhanVien {
    char msnv[8], ten[20];
    int luong;

    void Nhap() {
        fflush(stdin);
        cout << "Nhap ma so: ";
        cin.getline(msnv, 8);
        cout << "Nhap ten: ";
        cin.getline(ten, 20);
        cout << "Nhap luong: ";
        cin >> luong;
    }

    void Xuat() {
        cout << "MSNV: " << msnv << ", Ten: " << ten << ", Luong: " << luong << endl;
    }
};

void SelectionSort(NhanVien ds[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max = i;
        for (int j = i+1; j < n; j++) {
            if (ds[j].luong > ds[max].luong) max = j;
        }
        if (max != i) swap(ds[i], ds[max]);
    }
}

int TimNhanVien(NhanVien ds[], int n, char msnv[8]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].msnv, msnv) == 0)
            return i;
    }
    return -1;
}


int main() {
    system("cls");
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    NhanVien ds[n];
    for (int i = 0; i < n; i++) {
        system("cls");
        cout << "Nhan vien thu " << i+1 << ":" << endl;
        ds[i].Nhap();
    }
    
    system("cls");
    cout << "Danh sach nhan vien da nhap:" << endl;
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
    }
    getch();

    system("cls");
    SelectionSort(ds, n);
    cout << "Danh sach nhan vien duoc sap xep giam theo luong:" << endl;
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
    }
    getch();

    system("cls");
    long long tong_luong = 0;
    for (int i = 0; i < n; i++) {
        tong_luong += ds[i].luong;
    }
    cout << "Tong luong cua cac nhan vien: " << tong_luong << endl;
    getch();

    system("cls");
    fflush(stdin);
    char msnv[8];
    cout << "Nhap mot ma so nhan vien: ";
    cin.getline(msnv, 8);
    int x = TimNhanVien(ds, n, msnv);
    if (x == -1) cout << "Khong co nhan vien co ma so: " << msnv;
    else {
        cout << "Ten: " << ds[x].ten << ", Luong: " << ds[x].luong;
        n -= 1;
        for (int i = x; i < n; i++) {
            ds[i] = ds[i=1];
        }
    }
}