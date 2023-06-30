// Ro bot chi co the di chuyen moi lan 1 hoac 2m ma thoi
#include <bits/stdc++.h>

int test[100];
int met;

inline void kiem_tra_so_buoc()
{
    int s = 0, buoc = 0;
    while (test[buoc] != 0)
    {
        s += test[buoc];
        buoc++;
    }

    if (s == met)
    {
        buoc = 0;
        printf("\n");
        while (test[buoc] != 0)
        {
            printf("%3d", test[buoc]);
            buoc++;
        }
    }
}

void thu(int vt, int m)
{
    for (int so_met = 1; so_met <= 2; so_met++)
    {
        test[vt] = so_met;
        if (m-so_met > 0) thu(vt+1, m-so_met);
        kiem_tra_so_buoc();
        test[vt] = 0;
    }
}

int main()
{
    cout << "\n Nhap chieu dai quang duong: "; cin >> met;
    printf("\n Voi doan duong %d met, Robot co cac cach di chuyen nhu sau:\n", met);
    thu(0, met);
}