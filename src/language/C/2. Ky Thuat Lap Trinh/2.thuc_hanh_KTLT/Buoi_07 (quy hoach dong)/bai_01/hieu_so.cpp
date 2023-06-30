#include <bits/stdc++.h>
using namespace std;

fstream file;
int n;
int a[50];
int H[50];

void doc_du_lieu()
{
    file.open("thong_tin.inp", ios::in);
    file >> n;
    for (int i = 0; i < n; i++) file >> a[i];
    file.close();
}

void tinh_hieu()
{
    for (int i = 1; i < n; i++)
    {
        H[i] = H[i-1];
        for (int j = 0; j < i; j++)
            if (a[i] - a[j] > H[i])
                H[i] = a[i] - a[j];
    }
}

int main()
{
    doc_du_lieu();
    tinh_hieu();
    cout << "\n Hieu max = " << H[n-1];
}