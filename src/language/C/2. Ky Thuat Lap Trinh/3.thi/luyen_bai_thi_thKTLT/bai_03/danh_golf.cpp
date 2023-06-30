#include <bits/stdc++.h>
using namespace std;

fstream file;

int n;
int a[100], b[100], gtt[100];

void lay_thong_tin()
{
    file.open("thi_dau.inp", ios::in);
    file >> n;
    for (int i = 1; i <= n; i++) file >> a[i];
    for (int i = 1; i <= n; i++) file >> b[i];
    file.close();
}

void tinh()
{
    for (int i = 1; i <= n; i++)
        gtt[i] = a[i] - b[i];
}

void kt()
{
    int dem = 0;
    int max = gtt[1];
    for (int i = 1; i <= n; i++)
        if (gtt[i] > max)
            max = gtt[i];

    for (int i = 1; i <= n; i++)
        if (gtt[i] == max)
            dem++;

    file << dem << endl;
    for (int i = 1; i <= n; i++)
        if (gtt[i] == max)
            file << i << " ";
}

void xuat_thong_tin()
{
    file.open("thi_dau.out", ios::out);
    kt();    
    file.close();
}

int main()
{
    lay_thong_tin();
    tinh();
    xuat_thong_tin();
}