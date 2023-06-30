#include <bits/stdc++.h>
using namespace std;

fstream file;

int n;
int a[100], cs[100];

void lay_thong_tin()
{
    file.open("THIDAU.INP", ios::in);
    if (file.fail()) cout << "\n Mo file khong thanh cong !";
    else
    {
        file >> n;
        for (int i = 1; i <= n; i++) file >> a[i];
        file.close();
    }
}

void gan()
{
    for (int i = 1; i <= n; i++) cs[i] = i;
}

void sap_xep_giam()
{
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (a[cs[i]] < a[cs[j]])
                swap(cs[i], cs[j]);
}

void xuat_thong_tin()
{
    file.open("THIDAU.OUT", ios::out);
    for (int i = 1; i <= n; i++) file << ' ' << cs[i];
    file.close();
}

int main()
{
    lay_thong_tin();
    gan();
    sap_xep_giam();
    xuat_thong_tin();
}