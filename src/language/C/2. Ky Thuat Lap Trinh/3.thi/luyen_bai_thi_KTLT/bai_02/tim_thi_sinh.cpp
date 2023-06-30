#include <bits/stdc++.h>
using namespace std;

fstream file;

int n;
int ts[50];
int kiem_tra_khong = 0;

void lay_du_lieu()
{
    file.open("thong_tin.inp", ios::in);
    if (file.fail()) cout << "\n Mo file khong thanh cong !";
    else
    {
        file >> n;
        for (int i = 1; i <= n; i++) file >> ts[i];
        file.close();
    }
}

void ao(int f, int l)
{
    if (f <= l)
    {
        int m = (f+l)/2;
        if (ts[m] == m) cout << m << ' ';
        else kiem_tra_khong++;

        if (f < m) ao(f, m-1);
        if (m < l) ao(m+1, l);
    }
    
    if (kiem_tra_khong == n)
    {
        cout << -1;
        exit(0);
    }
}

int main()
{
    lay_du_lieu();
    cout << "\n Thi sinh co so ao trung voi vi tri la: ";
    ao(1, n);
}