/*
Giả bài toán quy hoạch gồm co 4 bước:
1. Cần xác định bài toán cơ sở
2. Cần hàm truy hồi
3. Cần hàm mục tiêu
4. Cần hàm truy vết
*/
#include <bits/stdc++.h>
using namespace std;

int keo[] = {0,8,9,4,6,2};
int n = sizeof(keo)/sizeof(keo[0]);
int s = 7;
int a[100][100];

void in()
{
    for (int i = 0; i <= n; i++)
    {
        cout << endl;
        for (int j = 0; j <= s; j++) cout << ' ' << a[i][j];
    }
}

void bai_toan_co_so()
{
    a[0][0] = 1;
    for (int i = 1; i <= max(s,n); i++)
    {
        a[i][0] = 1;
        a[0][i] = 0;
    }
}

void ham_truy_hoi()
{
    sort(keo, keo+n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= s; j++)
            if (a[i-1][j] == 1 || a[i-1][j-keo[i]] == 1)
                a[i][j] = 1;
}

int ham_muc_tieu()
{
    bai_toan_co_so();
    ham_truy_hoi();
    if (a[n][s] == 1) return true;
    return false;
}

void truy_vet()
{
    for (int i = n; i > 0; i--)
        if (a[i][s] == 1 && a[i-1][s] == 0)
        {
            cout << keo[i] << ' ';
            s = s - keo[i];
        }
}

int main()
{
    if (ham_muc_tieu())
    {
        //in();
        cout << "\n Day con co tong bang " << s << " la: ";
        truy_vet();
    }
    else cout << "\n Khong co day con co tong = " << s << " !";
}