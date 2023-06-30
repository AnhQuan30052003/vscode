/* Cho một số tự nhiên n lớn hơn 0, và ba số khác là 1, 3, 4
tìm xe có bao nhiêu cách biểu diển n từ 3 số trên*/
#include <bits/stdc++.h>
using namespace std;

int so[] = {1,2,3};
int size = sizeof(so)/sizeof(so[0]);
int n;
int tong = 0;
int dem = 0;

void kiem_tra() { if (tong == n) dem++; }

void thu()
{
    for (int i = 0; i < size; i++)
    {
        tong += so[i];
        if (tong < n) thu();
        else kiem_tra();
        tong -= so[i];
    }
}

int main()
{
    cout << "\n Nhap n = "; cin >> n;
    thu();
    cout << " So cac bieu dien: " << dem;
}