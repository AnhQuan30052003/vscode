// Ap dung quy hoach dong de giai quyet bai toan !
#include <bits/stdc++.h>
using namespace std;

int V[] = {0,2,2};
int GT[] = {0,10,20};
int n = sizeof(V)/sizeof(V[0])-1;
int p[50][300];
int V_max = 5;
int V_bo_duoc = 0;

int ham_muc_tieu()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= V_max; j++)
            if (j >= V[i] && (p[i-1][j-V[i]] + GT[i] > p[i-1][j]))
                p[i][j] = p[i-1][j-V[i]] + GT[i];
            else p[i][j] = p[i-1][j];

    if (p[n][V_max] == 0) return false;
    return true;
}

void truy_vet()
{
    for (int i = n, j = V_max; i > 0; i--)
        if (p[i][j] != p[i-1][j])
        {
            cout << "\n Vat thu: " << i << ", The tich: " << V[i] << ", Gia tri: " << GT[i];
            j -= V[i];
            V_bo_duoc += V[i];
        }
}

int main()
{
    if (ham_muc_tieu())
    {
        cout << "\n Cac vat da lay:";
        truy_vet();
        cout << "\n\n The tich bo duoc: " << V_bo_duoc << '/' << V_max;
        cout << "\n Gia tri lay duoc: " << p[n][V_max];
    }
    else cout << "\n Khong the lay duoc vat nao co gia tri chi voi tui co V_max la: " << V_max;
}